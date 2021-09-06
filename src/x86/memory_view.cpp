#include "x86/memory_view.hpp"

#include <algorithm>

namespace x86 {

memory_block::memory_block(std::string_view id, x86::ptr address, x86::usize size) :
    id(id),
    address(address),
    size(size),
    data(new uint8_t[size]) {}

bool memory_block::contains(x86::ptr address) const {
    return address >= this->address && address <= (this->address + this->size);
}

void memory_block::write(x86::ptr address, std::span<uint8_t> const data) {
    size_t start_index = this->address_to_index(address);
    size_t end_index =
        this->address_to_index(address + x86::usize(data.size()));

    memcpy(&this->data[start_index], data.data(), data.size());
}

size_t memory_block::address_to_index(x86::ptr address) const {
    assert(this->contains(address));
    return address - this->address;
}

void memory_view::map(std::string_view id, x86::ptr address, size_t size) {
    // todo: log

    x86::ptr start = address;
    x86::ptr end = address + x86::usize(size);

    for (auto& block : this->blocks) {
        x86::ptr start_b = block->get_address();
        x86::ptr end_b = start_b + block->get_size();

        assert(!((start < end_b) && (end > start_b)) && "overlapping blocks");
    }

    auto insertion_pos = std::lower_bound(
        std::begin(this->blocks),
        std::end(this->blocks),
        address,
        [](std::unique_ptr<memory_block> const& block, x86::ptr address) {
            return block->get_address() < address;
        });

    this->blocks.insert(
        insertion_pos,
        std::make_unique<memory_block>(id, address, x86::usize(size)));
}

void memory_view::write(x86::ptr address, std::span<uint8_t> const data) {
    auto block = this->locate_block(address);
    assert(block != nullptr);

    block->write(address, data);
}

memory_block const* memory_view::locate_block(x86::ptr address) const {
    auto it = std::lower_bound(
        std::begin(this->blocks),
        std::end(this->blocks),
        address,
        [](std::unique_ptr<memory_block> const& block, x86::ptr address) {
            return block->get_address() < address;
        });

    if (it == std::end(this->blocks)) {
        return nullptr;
    }

    return it->get();
}

memory_block* memory_view::locate_block(x86::ptr address) {
    auto it = std::lower_bound(
        std::begin(this->blocks),
        std::end(this->blocks),
        address,
        [](std::unique_ptr<memory_block> const& block, x86::ptr address) {
            return block->get_address() < address;
        });

    if (it == std::end(this->blocks)) {
        return nullptr;
    }

    return it->get();
}

}  // namespace x86
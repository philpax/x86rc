#pragma once

#include <memory>
#include <span>
#include <string_view>
#include <vector>

#include "util.hpp"
#include "x86/defs.hpp"

namespace x86 {

class memory_block {
  public:
    memory_block(
        std::string_view id,
        x86::ptr address,
        x86::usize size);
    UTIL_DISABLE_COPY(memory_block);

    inline x86::ptr get_address() const {
        return this->address;
    }
    inline x86::usize get_size() const {
        return this->size;
    }
    inline std::string_view get_id() const {
        return this->id;
    }
    bool contains(x86::ptr address) const;

    std::span<uint8_t const> read(x86::ptr address, size_t size) const;
    std::span<uint8_t> read(x86::ptr address, size_t size);
    void write(x86::ptr address, std::span<uint8_t> const data);

  private:
    x86::ptr address;
    x86::usize size;
    std::unique_ptr<uint8_t[]> data;
    std::string id;

    size_t address_to_index(x86::ptr address) const;
};

class memory_view {
  public:
    memory_view() {}
    UTIL_DISABLE_COPY(memory_view);

    void map(std::string_view id, x86::ptr address, size_t size);
    void write(x86::ptr address, std::span<uint8_t> const data);

  private:
    std::vector<std::unique_ptr<memory_block>> blocks;

    // do not store, may be invalidated
    memory_block const* locate_block(x86::ptr address) const;
    memory_block* locate_block(x86::ptr address);
};

}  // namespace x86
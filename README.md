# x86rc

A project to statically recompile x86-32 Win32 applications to portable C++ by way of translating every instruction into a function, implementing stubs for the APIs, and letting the compiler do the work of mapping x86 to the target architecture.

## FAQ

### Will this actually work?

I don't know! Only one way to find out.

### Why?

For a couple of reasons:

- breathing new life into old applications, especially abandonware video games
- making it easier to modify existing applications
- providing a way for decades of applications to run on the architectures of the near-future, including Apple Silicon, your favourite ARM SoC, RISC-V, and more
- because it's cool

### How exactly does this work?

tl;dw;dr: each function is scanned through, a corresponding C++ function is created, and each x86 operation is represented as a function that mutates the state of the "processor". The processor is initialised at application startup, the memory map is initialised with something that looks like a loaded application in x86-32 Windows with no ASLR (the segments are loaded as-is), and then execution starts at the application's `start` function.

Will write up more information at a later date.

### How is the project structured?

`scripts/export.py` is the IDAPython script to generate our "recompiled" code from an existing IDB for a x86 executable. It will preserve any named functions, but it's not very intelligent.

At some point, this will likely be replaced with a Rust application that automatically opens a PE executable and does its own analysis. That would allow the project to work independently of IDA and allow it to focus on producing equivalent code without having to handle some of the constraints IDA does in its analysis.

### Why are you including segments?

Our recompilation is very simplistic and does not make any attempt to resolve variables in memory. This means the original segments are required to provide the actual data for the application to execute. As we improve our static analysis and/or allow for the use of dynamic traces to augment knowledge about the program, dependence on the raw data can be removed and variables can be reintroduced to the C++ code.

### Why does your codegen suck?

The goal is to get it working first before making it optimiser-friendly. Yes, we can use variables for the registers in functions. We just haven't yet.

### What are you developing/testing against?

The dream is to be able to recompile video games of the mid-to-late-2000s, so that these games can be experienced with modern non-x86 hardware (including ports to ARM consoles) without source code.

To this end, the two current target applications are Need for Speed: Underground 2 and Super Hexagon. This list will likely change depending on complexity.

### How are you going to implement the stubs?

That's a problem for future us :-)

### What's going on with the `x86/insn` folder?

A list of instructions for one of our target applications was generated in `all.hpp`. These instructions fall under different categories, represented by the folders in `insn`, but they haven't been moved there yet.

### What are the inspirations for the project?

- https://github.com/rexdex/recompiler
- https://github.com/ptitSeb/box86
- https://github.com/lifting-bits/mcsema

and projects of a similar ilk (`retdec` and similar.)

### Why C++20?

I wanted `std::span`. Yeah, that's pretty much it.
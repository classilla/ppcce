A port of Dhrystone 2.1 to Windows CE. This is based on the Reinhold Weicker and Rick Richardson C version, with a small amount of porting work by Cameron Kaiser.

Builds with Platform Builder 2.11 and possibly later versions. Note that `timers.c` is not actually part of the build because MS C/C++ in that version is buggy and doesn't preprocess it correctly. Instead, the relevant code has been moved into the other modules. A stub `WinMain()` has also been added. If you use the workspace provided, all supported architectures are enabled.

Pre-built binaries for PowerPC, MIPS and SH3 are in `bin`. You must have `dhry.res` in the same directory. They run from `CMD`.

It is not clear what, if any, license the Dhrystone 2.1 benchmark was originally issued under (see `dhry.h` for more copious notes). As it is now widely distributed with no known legal action taken, any claim of copyright would be subject to a defense of estoppel and/or laches in many, if not all, countries.

# raylib-carp

WIP [Carp](https://github.com/carp-lang/Carp) bindings for [the raylib gamedev library](https://github.com/raysan5/raylib). These bindings are made for and only confirmed to be working with raylib-2.6.0.

## Current state

These bindings are still a major work in progress. Expect bugs.

### Things that I'm aware might not work

* The `BoneInfo` struct.
* The `VrDeviceInfo` struct.
* The `TraceLogCallback` typedef.

I almost definitely need to re-evaluate how structs with static-length arrays are initialized.

*You may not be able to copy certain structs yet.* I'm adding `copy` functions for structs as needed right now.

However, all known potential issues only affect 3D games. You should already be more than capable of creating 2D games with these bindings.

## Quirks

There are a few things that I've had to do to get this working. They are as follows.

  * I've had to modify Carp's `core.h` to remove Windows headers that contain functions that cause naming collisions with raylib functions.

  The changes I've made are:

  ```
  #define NODRAWTEXT
  #define NOGDI
  #define NOUSER
  #define NOSOUND

  #include <windows.h>
  #undef PlaySound
  ```

  I've provided my `core.h` for convenience. On non-Windows platforms, this does not apply. Keep in mind that I cannot guarantee that this will not cause problems for certain programs.

  * I've also had to create a helper header called `raylib_helper.h`. This contains a few defines and functions that allow the bindings to work properly. Like the Carp side of the bindings, this header is a work in progress.

Additionally, there are a few stylistic quirks that you should be aware of.

  * I made a choice to group functions into modules. If you do not explicitly state `(use module)` under the file import, you will need to prepend the module name to each function.
  * In keeping with Lisp tradition, all functions are `kebab-case`. I'm still trying to decide on a stylistic choice for constants; right now, all of them are `kebab-case` except for raylib's built-in colors, which are simply `lowercase` due to my indecision about whether to call `RAYWHITE` `raywhite` or `ray-white`.

## Other raylib modules

I have not yet created bindings for any other raylib modules.
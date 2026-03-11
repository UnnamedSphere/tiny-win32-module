# win32-module

Minimal single-file C++20 module exposing commonly used Win32 APIs in a clean `win32::` namespace.

This module wraps frequently used Win32 types, constants and functions while avoiding global namespace pollution from `<windows.h>`.

## Features

* C++20 module
* Clean `win32::` namespace
* Common Win32 types, constants and functions
* Single-file drop-in module
* Avoids macro pollution from `<windows.h>`

## Usage

Copy `win32.ixx` into your project and add it to your build.

```cpp
import win32;

int main()
{
    win32::MessageBoxW(
        nullptr,
        L"Hello World",
        L"Win32 Module",
        win32::mb_ok | win32::mb_iconinformation
    );
}
```

## Requirements

* Windows
* C++20 compiler with module support
* `<windows.h>`

## License

MIT

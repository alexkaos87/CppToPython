# CppToPython

## CPPYY

This solution is using cppyy module: It's based on Cling, the C++ interpreter for Clang/LLVM. 

Bindings are at run-time and no additional intermediate language is necessary. 

Thanks to Clang, it supports C++17.

Install it using pip:
```
pip install cppyy
```

Create the shared library MyAwesomeLibrary.so with make:
```
make
```

Run the example using python:
```
python3 mytest.py
```
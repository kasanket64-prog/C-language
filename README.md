# C Programming and Data Structures Practice

An educational source archive covering beginner C programming and separate C++ algorithm exercises.

## Repository guide

| Folder | Contents |
| --- | --- |
| [`Basics/`](Basics/) | Introductory C exercises |
| [`chapter__1/`](chapter__1/) | Chapter practice, including `Q1.c` |
| [`DSA_practice/`](DSA_practice/) | Additional C++ data-structure and algorithm exercises |

## Run a C exercise

```bash
gcc Basics/hello_world_program___1.c -o hello-world
./hello-world
```

For `.cpp` files, use a C++ compiler such as `g++`. These are independent exercises, so compile each separately.

## Current limits

There is no shared build process or automated test suite. The DSA folder also includes precompiled Windows executables; do not treat them as evidence that the source is tested or safe. Future improvements should document expected input/output, add focused tests, and remove generated binaries after review.

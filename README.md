# Simple Stack Demo

A minimal C++ program that demonstrates how a **stack** works using a plain array and an index variable. Perfect for understanding the fundamentals of LIFO (Last In, First Out) data structures before moving on to `std::stack`.

## Preview
On top: Blue Plate
Removing top...
New top: Red Plate
## Concepts Covered
- **Push** — adding an item to the top of the stack
- **Peek** — viewing the top item without removing it
- **Pop** — removing the top item
- **Top index** — tracking the current top of the stack (`-1` = empty)

## How It Works
Think of it like a stack of plates:
- You can only add or remove from the **top**.
- The `top` variable acts as a marker pointing to the current top item.
- Popping doesn't actually erase data — it just moves the marker down.

## Requirements
- C++ compiler with C++11 support or later (g++, clang, MSVC)

## Build & Run

### Using g++
```bash
g++ -std=c++11 main.cpp -o stack_demo
./stack_demo
```

### Using clang
```bash
clang++ -std=c++11 main.cpp -o stack_demo
./stack_demo
```

### On Windows (MSVC)
```bash
cl main.cpp
main.exe
```

## Project Structure
.
├── main.cpp        # Source code
├── README.md       # Project documentation
└── .gitignore      # Ignored files
## Limitations
- Fixed size (3 elements) — adding more would cause overflow
- No bounds checking on push/pop
- Stores `string` only

## Possible Extensions
- Add overflow/underflow checks
- Wrap operations into `push()`, `pop()`, `peek()` functions
- Convert into a templated class for any data type
- Replace the array with `std::vector` for dynamic sizing

## License
MIT — free to use and modify.

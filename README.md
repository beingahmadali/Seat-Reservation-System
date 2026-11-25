# Seat Reservation System

A standard C++17 console-based application built for the **Programming Fundamentals** semester project (**Deadline: December 15, 2026**)[cite: 1, 2]. The system manages seat reservations, cancellations, seat availability display, fare calculations, file persistence, and activity logging using modular C++ code[cite: 2, 4, 5].

---

## Team Members & Responsibilities

- **Muhammad Ahmad Ali** _(Team Lead)_: `src/main.cpp`, `src/file_io.h`, `src/file_io.cpp` — menu loop, input validation, file loading/saving, append-mode logging, `try/catch` exception handling, dynamic memory (`new` / `delete []`), and module integration[cite: 2, 5, 22].
- **Muhammad Momin**: `src/booking.cpp` — seat booking, cancellation, fare & discount calculation, ticket search, and recursive counting.
- **Muhammad Mudassir**: `src/display_stats.cpp` — 2-D seat map display, row/column boundary checks, 1-D summary statistics, and summary reporting.

---

## Folder & File Structure

```text
seat-reservation-system/
├── src/
│   ├── types.h              # Shared constants, enum class types, and nested structs
│   ├── file_io.h            # Declarations for file I/O, logging, and input validation
│   ├── file_io.cpp          # File read/write, system.log append, exceptions, dynamic arrays
│   ├── booking.h            # Declarations for booking, fare, search, cancel, and recursion
│   ├── booking.cpp          # Booking and cancellation logic, fares, search, recursion
│   ├── display_stats.h      # Declarations for seat map rendering and statistics
│   ├── display_stats.cpp    # 2-D seat grid display, bounds validation, 1-D array statistics
│   └── main.cpp             # Main do-while + switch menu and program flow
├── data/
│   ├── seats.txt            # Initial seat layout / map file
│   ├── bookings.csv         # Saved reservation records
│   └── system.log           # Append-only activity and error log
├── .gitignore               # Ignores build artifacts (.exe, .o, temporary files)
└── README.md                # Project overview, team roles, structure, and technical stack
```

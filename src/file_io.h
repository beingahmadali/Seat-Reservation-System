/*
 * File: file_io.h
 * Project: Multi-Domain Seat Reservation System
 * Author: Muhammad Ahmad Ali (2601616)
 * Description: File loading, saving, logging, dynamic grid memory, and exception-safe I/O.
 */

#ifndef FILE_IO_H
#define FILE_IO_H
#include "types.h" // Importing custom types and structures from types.h file.
#include <string>
using namespace std;

// Allocation a 2-D Seat grid of size [rows][cols] and sets seats to Available ("A1", "A2", etc.)

Seat **allocateSearGrid(int rows, int cols);

// Frees a dynamically allocated 2-D Seat grid using delete[] (Array of pointers to arrays).
void freeSeatGrid(Seat **grid, int rows);

// Frees a dynamically grids for all load schedules using delete[] (Array of pointers to arrays).
void loadSchedules(const string &filePath, Schedule schedules[], int &scheduleCount);

// Loads existing bookings from bookings.csv and marks those seats as Booked
void loadBookings(const string &filePath, Booking bookings[], int &bookingCount, Schedule schedules[], int scheduleCount);

// Saves all active bookings to bookings.csv
void saveBookings(const string &filePath, const Booking bookings[], int bookingCount);

// Appends a single log line to system.log using ios::app
void logEvent(const string &logPath, const string &tag, const string &message);

#endif // FILE_IO_H (Simple header guard to prevent multiple inclusions of this header file)
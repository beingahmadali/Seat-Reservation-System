/*
 * File: types.h
 * Project: Multi-Domain Seat Reservation System (Bus, Train, Airline)
 * Author: Muhammad Ahmad Ali (2601616)
 * Description: Core constants, enum classes, and nested structs shared across all modules.
 */

#ifndef TYPES_H
#define TYPES_H

#include <string>
using namespace std;

const int MAX_SCHEDULES = 50; // Maximum number of schedules allowed
const int MAX_BOOKINGS = 500; // Maximum number of bookings allowed

// Supported transportation modes
enum class DomainType
{
    BUS,
    TRAIN,
    AIRLINE
};

// Available seat classes for each transportation mode
enum class SeatState
{
    Available,
    Booked,
    Reserved
};

// Travel Levels for different classes of service
enum class SeatTier
{
    Standard,    // Basic level of service (Bus, Train)
    Executive,   // Bus and Train
    Economy,     // Bus, Train, Aeroplane
    ACBusiness,  // Aeroplane Business Class
    Berth,       // Train Sleeper Class
    Sleeper,     // Train Sleeper Class
    EconomyPlus, // Aeroplane Economy Plus
    Business,    // Aeroplane Business Class
    FirstClass   // Premium level of service (Aeroplane)
};

/*
Nested Structs for Seat Position, Seat Details, and Schedule Information
*/

struct SeatPos
{
    int row;    // Row number of the seat
    int column; // Column number of the seat
};

/*
Represents a single seat inside a 2-D schedule grid
*/
struct Seat
{
    string seatCode;  // Unique identifier for the seat (e.g., "A1", "B2")
    SeatState state;  // Current state of the seat (Available, Booked, Reserved
    SeatTier tier;    // Tier of the seat (Standard, Executive, Economy, etc.)
    string bookingID; // ID of the booking associated with the seat (if any)
};

struct Schedule
{
    string scheduleID;                                 // Unique identifier for the schedule
    DomainType domain;                                 // Type of transportation (Bus, Train, Airline)
    string departureLocation;                          // Departure location
    string arrivalLocation;                            // Arrival location
    string departureTime;                              // Departure time (format: YYYY-MM-DD HH:MM)
    string arrivalTime;                                // Arrival time (format: YYYY-MM-DD HH:MM)
    int totalSeats;                                    // Total number of seats available
    SeatState seatStates[MAX_SCHEDULES][MAX_BOOKINGS]; // Seat states for each seat in the schedule
};

struct Booking
{
    string bookingID;        // Unique identifier for the booking
    string scheduleID;       // Associated schedule ID
    string passengerName;    // Name of the passenger
    string passengerContact; // Contact information of the passenger
    string cnicNumber;       // CNIC number of the passenger
    SeatPos position;        // Position of the booked seat
    SeatTier tier;           // Tier of the booked seat
    string bookingTime;      // Time when the booking was made (format: YYYY-MM-DD HH:MM)
    double amountPaid;       // Amount paid for the booking
    bool active;             // Indicates if the booking is active or canceled
};

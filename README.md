# Store Management System

A secure and user-friendly console-based inventory management application developed in C for managing stock and sales of essential goods such as rice, wheat, and sugar.

## Overview

This project simulates a small warehouse or godown management system where:

- a manager can monitor product stock and sales
- a user can place orders and view billing information
- inventory is tracked for multiple products in a simple menu-driven interface

The system is designed for educational purposes and small-scale business demonstration.

## Features

- Manager login and authentication
- User login and order placement
- Product categories:
  - Rice
  - Wheat
  - Sugar
- Stock status tracking
- Sales overview
- Upcoming stock information
- Billing calculation based on selected quantity
- Simple text-based interface

## Project Structure

- `main.c` – contains the complete application logic and menu-driven flow
- `README.md` – project documentation and setup instructions

## Tech Stack

- Language: C
- Compiler: GCC / any C compiler compatible with standard C
- Platform: Console application

## Prerequisites

Before running the project, make sure you have:

- a C compiler installed (such as GCC)
- a terminal or command prompt
- basic knowledge of compiling and running C programs

## Getting Started

1. Open a terminal in the project folder.
2. Compile the program:

```bash
gcc main.c -o store_management
```

3. Run the executable:

```bash
./store_management
```

## Usage

### Manager Login

Use the manager credentials hardcoded in the system:

- Username: `aravind`
- Password: `12345`

Once logged in, the manager can view:

- available stock
- sales information
- upcoming stock updates for each product

### User Login

The user enters a username and then can:

- select a product
- enter order quantity
- view the total bill
- continue ordering until choosing exit

## Example Workflow

1. Start the application.
2. Choose either Manager Login or User Login.
3. If Manager, select a product category and review stock details.
4. If User, choose a product, enter quantity, and receive the bill.
5. Exit the application when done.

## Notes

- This application uses in-memory variables and does not persist data to a file or database.
- It is best suited as a beginner-friendly C project and console simulation.

## License

This project is open for educational and learning purposes.

## Author

Developed as a small store and inventory management project in C.

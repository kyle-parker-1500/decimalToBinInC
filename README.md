# Decimal To Binary Converter
Converter written manually in C. Formula derived by me from scratch using no external resources.
Current language expertise in Java as of (2025-11-14)

## Limits
- Max #: 4095
  - To edit max # change size of arrays
- Not signed (no negative #'s)
- Doesn't use bit shifting, uses % (modulo) operator to determine if a number is 1 or 0
    - By returning its remainder

## User Input:
- Simple user interface
- User enters 1 to add another number to convert, 2 to quit
- Number isn't saved so it resets between inputs

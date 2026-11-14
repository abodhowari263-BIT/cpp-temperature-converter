# C++ Temperature Converter

A robust, command-line utility written in C++ designed to convert temperatures seamlessly between Celsius, Fahrenheit, and Kelvin with strict input validation.

## Key Features
* **Multi-Unit Support:** Handles bidirectional conversions across Celsius, Fahrenheit, and Kelvin.
* **Defensive Input Validation:** Features dedicated `while` loops to intercept invalid unit selections or choices, forcing users to re-enter valid inputs.
* **Case-Insensitive Design:** Fully accepts both uppercase and lowercase characters (`C`/`c`, `F`/`f`, `K`/`k`) to maximize user convenience.
* **Continuous Session Loop:** Utilizes a `do-while` control structure allowing multiple consecutive conversions within a single program run.

## Code Architecture & Logic Flow
* **Data Types:** Uses `double` precision variables (`temp_initial`, `temp_final`) for accurate floating-point mathematical computations, alongside `char` variables (`intial_temp_unit`, `final_temp_unit`, `choice`) for tracking user choices.
* **Initial Capture & Validation:** Prompts for the raw temperature value and starting unit, trapping unrecognized characters with a dedicated validation loop.
* **Nested Branching:** Evaluates conversion pathways using nested `if-else` decision blocks tailored to each base unit ($C$, $F$, or $K$).
* **Mathematical Precision:** Executes precise conversion formulas, including scaling factors ($1.8$) and absolute zero/Kelvin offsets ($273.15$ and $459.67$).
* **Session Control:** Concludes each conversion cycle by prompting the user to continue or exit, validating the response against `y`/`n` inputs.

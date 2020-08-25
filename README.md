# Topic: Modularity

## Divide into files

## Assignment Summary:
The 25-pair color code, is used to identify wires in telecommunications cables.
Different codes are used for wire leads on devices such as transformers or in building wiring.
For more details refer to [This Wiki](https://en.wikipedia.org/wiki/25-pair_color_code). 

There are 25 possible pairs of colors. 

- Each pair of colors maps to a corresponding number
- Such numbers translate to a pair of colors -
a major color and a minor color

### Exercise Details:

#### Modularity

The entire translation program is in a single file.
Before adding features and making it bigger,
split the file.
This exercise has a limit on the loc (lines of code)
per file. See the workflow for details.

#### New Feature Request

The color coding needs to be printed as a reference manual for the concerned telecom personnel.
Provide a ToString() function in the code that would return the mapping which can be printed as a manual.
Also resolve any coding guideline violations.

## Work Done:

Divided the main.cpp file into following:
  
   -telcolColorCode.h : This header file contains the namespace **TelCoColorCoder** and its functions
   -ColorCodeTests.h : This header file contains the **tests** functions
   used to verify the functions in namespace
   -main.cpp : This file contains only main function , a function that calls the tests and
   a function that prints the user manual

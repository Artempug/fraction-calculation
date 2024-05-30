# fraction-calculation
The code defines a Fraction class for handling fractions. It includes private fields for numerator and denominator, with public methods for setting values, printing the fraction, finding the greatest common divisor, and reducing the fraction to its simplest form.

This code defines the Fraction class, which contains two private fields: numerator and denominator. These fields can be accessed using public methods such as setNumerator, setDenominator, and print. In addition, the class contains two additional methods: greatest_common_divisor (greatest common divisor) and reduce (reduction of the fraction).

The constructor of the Drib class takes two arguments n and d, which are used to initialize the corresponding numerator and denominator fields.

The print method uses cout to output the fraction as "numerator / denominator" to the console.

The greatest_common_divisor method uses the recursive Euclidean algorithm to find the greatest common divisor of two numbers. It takes two arguments a and b, and returns the greatest common divisor.

The reduce method is used to reduce a fraction to its simplest form. It calls the greatest_common_divisor method to find the greatest common divisor of the numerator and denominator, and divides each by that divisor to get the reduced form of the fraction

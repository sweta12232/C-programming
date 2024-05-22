// when function called itself, it is called recursion
// There are two component of recursive function, base case and recursive case
// Base case is the condition under which our recursion ends and prevents the functions from calling itself indefinitely
// recursive case, is the part of the function where the function call itself to solve problem

#include <stdio.h>

// Function declaration
int sum(int n);

int main() {
    int result = sum(5); // FunctionCall 
    printf("Sum result: %d\n", result); 
    return 0;
}
// Recursive function to calculate sum
int sum(int n) {
    if (n <= 0) { // This is Base case: if n is less than or equal to 0
        return 0; 
    } else {
        int sumNum = sum(n - 1); // Recursive call: sum of numbers up to n-1
        int sumResult = sumNum + n; // Add n to the sum of numbers up to n-1
        return sumResult; // Return the result
    }
}

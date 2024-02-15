#include <iostream>

using namespace std;

// Function to perform basic arithmetic operations
double performOperation(double operand1, double operand2, char op) {
    // Switch statement to perform different operations based on the operator
    switch (op) {
        case '+':
            return operand1 + operand2; // Addition
        case '-':
            return operand1 - operand2; // Subtraction
        case '*':
            return operand1 * operand2; // Multiplication
        case '/':
            if (operand2 != 0) {
                return operand1 / operand2; // Division, check for division by zero
            } else {
                cout << "Error: Division by zero!" << endl; // Error message for division by zero
                exit(1); // Exit program with error code 1
            }
        default:
            cout << "Error: Invalid operator!" << endl; // Error message for invalid operator
            exit(1); // Exit program with error code 1
    }
}

// Function to evaluate the expression
double evaluateExpression(const string& expression) {
    double operand1 = 0, operand2 = 0; // Initialize operands to zero
    char op = '+'; // Initialize operator to addition
    double result = 0; // Initialize result to zero

    // Loop through each character in the expression
    for (char ch : expression) {
        if (isdigit(ch)) {
            operand2 = operand2 * 10 + (ch - '0'); // Convert character digit to integer and update operand2
        } else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            // Perform operation with the previous operand and operator
            result = performOperation(operand1, operand2, op);

            // Update operand1, operand2, and operator for the next iteration
            operand1 = result;
            operand2 = 0;
            op = ch;
        }
    }

    // Perform the final operation
    result = performOperation(operand1, operand2, op);

    return result; // Return the final result
}

int main() {
    string expression;
    
    // Get the expression input from the user
    cout << "Enter an expression in the format (operand1 operator operand2): ";
    getline(cin, expression);

    // Evaluate the expression and display the result
    double result = evaluateExpression(expression);

    cout << "Result: " << result << endl;

    return 0;
}

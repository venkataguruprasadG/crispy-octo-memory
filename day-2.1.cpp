/*
### Problem Statement: **Sum of Digits**

**Description:**
Write a C++ program that takes a positive integer as input and calculates the sum of its digits.

### Topics Required:
1. **Basic Input/Output:** Using `cin` and `cout`.
2. **Variables and Data Types:** Declaring and using integer variables.
3. **Loops:** Using a `while` loop to iterate through the digits of the number.
4. **Conditional Statements:** Using `if` to handle edge cases (optional).

### Syntax for the Required Topics:

1. **Declaring a Variable:**
   ```cpp
   int num, sum = 0;
   ```

2. **Taking Input:**
   ```cpp
   cin >> num;
   ```

3. **While Loop:**
   ```cpp
   while (condition) {
       // code to execute while condition is true
   }
   ```

4. **Modulus Operator:**
   - The modulus operator `%` returns the remainder of a division operation.
   - Example: `num % 10` will give the last digit of `num`.

5. **Division Operator:**
   - The division operator `/` performs integer division.
   - Example: `num / 10` will remove the last digit of `num`.

### Problem Solution Outline:
1. **Declare an integer variable** to store the user input and another to store the sum of the digits.
2. **Take an integer input** from the user.
3. **Use a while loop** to extract each digit from the number and add it to the sum.
4. **Print the sum** of the digits.

### Test Cases:

1. **Test Case 1:**
   - **Input:** `123`
   - **Expected Output:** `6` (1 + 2 + 3 = 6)

2. **Test Case 2:**
   - **Input:** `456`
   - **Expected Output:** `15` (4 + 5 + 6 = 15)

3. **Test Case 3:**
   - **Input:** `0`
   - **Expected Output:** `0`

4. **Test Case 4:**
   - **Input:** `9999`
   - **Expected Output:** `36` (9 + 9 + 9 + 9 = 36)

5. **Test Case 5:**
   - **Input:** `1001`
   - **Expected Output:** `2` (1 + 0 + 0 + 1 = 2)

### Explanation:
- **Extracting Digits:** Use the modulus operator `%` to get the last digit of the number (`num % 10`).
- **Removing Digits:** Use integer division `/` to remove the last digit from the number (`num / 10`).
- **Loop:** Continue this process in a `while` loop until the number becomes 0.

Feel free to try solving this problem, and let me know if you need any more help or explanations!
*/

#include<iostream>
using namespace std;

int main(){
    int num, sum = 0; // Initialize sum to 0
    cout << "Enter a number: "; // Prompt for input
    cin >> num; // Read input

    while(num != 0){
        sum += num % 10; // Add the last digit to sum
        num /= 10; // Remove the last digit
    }

    cout << "The sum of the digits is: " << sum << endl; // Print the sum
    return 0;
}

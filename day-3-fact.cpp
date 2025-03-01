
/*### Problem Statement: **Factorial of a Number**

**Description:**
Write a C++ program that takes a non-negative integer as input and calculates its factorial. The factorial of a non-negative integer \( n \) is denoted as \( n! \) and is the product of all positive integers less than or equal to \( n \). By convention, \( 0! = 1 \).

### Topics Required:
1. **Basic Input/Output:** Using `cin` and `cout`.
2. **Variables and Data Types:** Declaring and using integer variables.
3. **Loops:** Using a `for` loop to iterate through the numbers.
4. **Arithmetic Operations:** Multiplication.

### Syntax for the Required Topics:

1. **Declaring a Variable:**
   ```cpp
   int num, factorial = 1;
   ```

2. **Taking Input:**
   ```cpp
   cin >> num;
   ```

3. **For Loop:**
   ```cpp
   for (initialization; condition; increment) {
       // code to execute in each iteration
   }
   ```

4. **Arithmetic Operations:**
   - Multiplication: `*`
   - Example: `factorial *= i;` multiplies `factorial` by `i`.

### Problem Solution Outline:
1. **Declare an integer variable** to store the user input and another to store the factorial result.
2. **Take an integer input** from the user.
3. **Use a for loop** to calculate the factorial of the number.
4. **Print the factorial** of the number.

### Test Cases:

1. **Test Case 1:**
   - **Input:** `5`
   - **Expected Output:** `120` (5! = 5 * 4 * 3 * 2 * 1 = 120)

2. **Test Case 2:**
   - **Input:** `0`
   - **Expected Output:** `1` (0! = 1 by convention)

3. **Test Case 3:**
   - **Input:** `3`
   - **Expected Output:** `6` (3! = 3 * 2 * 1 = 6)

4. **Test Case 4:**
   - **Input:** `1`
   - **Expected Output:** `1` (1! = 1)

5. **Test Case 5:**
   - **Input:** `10`
   - **Expected Output:** `3628800` (10! = 10 * 9 * 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1 = 3628800)

### Explanation:
- **Factorial Calculation:** Use a `for` loop to iterate from 1 to the input number, multiplying the current value of the factorial by the loop variable in each iteration.
- **Edge Case:** Handle the case where the input is 0, which by convention has a factorial of 1.

Feel free to try solving this problem, and let me know if you need any more help or explanations!*/

#include<iostream>
using namespace std;

int main(){
    int num,factorial=0;
    cout<<"Enter a number:"
    cin>>num;

    if(num==0){
        cout<<"1";
    }
    for(int i=0;i<=num;i++){
        factorial=factorial*i;
        i--;
    }
    cout<<factorial<<endl;
    return 0;
}
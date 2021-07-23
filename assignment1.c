/* Program to find the square root of number using binary search
 *
 * Compilation: gcc assignment1.c
 * Exicution: ./a.out
 *
 * @Rohitdhiman(1910991113), 18/07/2021
 * Assignment
 * Resources: geeks_for_geeks
 */

#include<stdio.h>

double square_root_binary_search (int, int);

int main(){
    int n = 0;
    int precision = 0;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Enter the precision: ");
    scanf("%d",&precision);
    //calls the function square_root_binary_search
    double result = square_root_binary_search (n, precision);
    printf("Square root of the number %d with a precision of %d is %.*lf.\n", n, precision,precision, result);
    return 1;    
}	
/* function to find the square root of a number using binary search
 *
 * Parameters
 * number: integer type variable
 * precision: integer type variable
 * ans: double type variable
 * returns square root of the number.
 */

double square_root_binary_search (int number, int precision){
    
    
    double ans = 0;
    int i = 0;
    int low = 0;
    int high = number;
    int mid = (low + high) / 2;
    while(high<=low)
    {
	// checks if the square of the mid is equal to number and stores it to ans and break,
	// else it moves to next if statement
        if(mid*mid == number){
	    ans = mid;
	    break;
	}
	// checks if the square of the mid number is less then number 
	// if yes the shift the mid towards right by converting the value of low to mid + 1

	if (mid * mid < number) {
            low = mid + 1;
    	    
	// else shifts the mid to left by converting the value of high to mid - 1
	} else {
            high = mid - 1;
	}
    }
	
    float increment = 0.1;
    // loop runs till we reach the desigred precision
    for (i = 0; i < precision; i++) {
	    // runs as long as the value of square of ans is less then number
	    // and increases the value of ans adding the increment
        while (ans *ans <= number){
            ans += increment;
        }

        ans = ans - increment;
        increment = increment / 10;
    }
    return ans;
}

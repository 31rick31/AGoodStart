//
//  main.c
//  AGoodStart
//
//  Created by Ricky Memije on 6/23/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //MARK: Comment And printf() Examples
    
    // Print the beginning of the novel -- example of a single-line comment
    printf("It was the best of times.\n"); // example of print function
    printf("It was the worst of times. \n");
    /*Is that actually any good? Maybe it needs a rewrite. */   // example of a multi-line comment
    
    //MARK: Variable Decleration Examples
    
    // Decared variable named 'weight' of type float
    float weight;
    
    // Assigning a value to weight
    weight = 14.2;
    
    /* Printing to the console the value of 'weight'. %f is used as a placeholder for float variables. \n is an escape sequence that stands for a newline character. */
    printf("the value of weight is %f.\n", weight);
    
    // Calculating the total price by multiplying the weight by 1.99 and assigning it to a new variable named totalPrice
    // the multiplied by operator is '*'
    float totalPrice = 1.9 * weight;
    
    //Printing to the console the value of 'totalPrice'.
    printf("The total price is %f.\n", totalPrice);
    
    // Practice section
    
    float stateTax = .0087;
    float hamburgerPrice = 2.99;
    float friesPrice = 1.50;
    
    float mealTotalPrice = ((hamburgerPrice + friesPrice) * stateTax) + hamburgerPrice + friesPrice;
    
    printf("The price of a hamburger is %f.\nThe price of fries is %f.\nThe meal total is %f.\n", hamburgerPrice, friesPrice, mealTotalPrice);
    
    return 0;
}

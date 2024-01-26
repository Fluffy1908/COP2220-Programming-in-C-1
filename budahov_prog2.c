/*
 * Tymur Budahov
 * Date: 01/25/2024
 * This C program calculates and displays the original and discounted prices of item along with the sales tax and total cost. It gets user input, their initials, the items price, discount percentage and sales tax rate.
 */

#define _CRT_SECURE_NO_WARNINGS //for Visual Studio compiler
#pragma warning(disable:6031) //ignore scanf warnings
#include<stdio.h> //for printf and scanf
int main() {
    char firstInitial, lastInitial;
    double price, discountPercentage, salesTax, discountedPrice, originalPriceTax, discountedPriceTax, totalWithTaxOriginal, totalWithTaxDiscounted;

    printf("Enter your first initial: "); // user first initials
    scanf(" %c", &firstInitial);
    printf("Enter your last initial: "); //user last initials
    scanf(" %c", &lastInitial);

    printf("Enter the price of the item: "); //get item price from user
    scanf("%lf", &price);

    printf("Enter the discount percentage (as a decimal): "); // discount percentage user input
    scanf("%lf", &discountPercentage); // save to discountPercentage variable

    discountedPrice = price * (1 - discountPercentage); // calc discounted price
    printf("The original price is $%.2lf and the discount price is $%.2lf\n", price, discountedPrice); // price var for first and discountedPrice for second %.2lf

    printf("Enter the sales tax rate as a decimal: "); // sales tax user input
    scanf("%lf", &salesTax);

    originalPriceTax = price * salesTax; // calc original price tax 
    discountedPriceTax = discountedPrice * salesTax; // calc discounted price tax
    printf("The original price tax is $%.2lf and the discount price tax is $%.2lf\n", originalPriceTax, discountedPriceTax);

    // calculate total price with tax
    totalWithTaxOriginal = price + originalPriceTax;
    totalWithTaxDiscounted = discountedPrice + discountedPriceTax;
    
    //final console output
    printf("%c.%c., if you buy the item without the discount the total with tax will be $%.2lf\n", firstInitial, lastInitial, totalWithTaxOriginal);
    printf("%c.%c., if you buy the item with %.2lf discount the total with tax will be $%.2lf\n", firstInitial, lastInitial, discountPercentage, totalWithTaxDiscounted);

    return 0;
}
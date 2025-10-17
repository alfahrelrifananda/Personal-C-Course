#include <stdio.h>
#include <stdbool.h>

int main(){
    
    // ! 1.
    // ? My First C Program
    // * comments and printf
    // This is a comment
    
    /*
    This
    is
    a
    multiline
    comment
    */
   
    /*
    printf("I like C\n");
    printf("Its a great language");
    */
   
    // ! 2.
    // ? Variables = variables are like containers that hold data
    // * int = its a integer (take 1 byte)
    // * float = its a floating point number (take 4 bytes)
    // * double = its a double precision floating point number (take 8 bytes)
    // * char = its a character (take 1 byte)
    // * char[] = its an array of characters (take 1 byte per character)
    // * bool = its a boolean (take 1 byte)
    
    
    // * 1. integer
    /*
    int age = 20;
    int year = 2025;
    int salary = 100000;
    
    printf("age = %d\n", age);
    printf("year = %d\n", year);
    printf("salary = %d\n", salary);
    
    // * 2. float
    float gpa = 1.5;
    float height = 1.75;
    float temperature = 35.0;
    
    printf("your gpa is = %f\n", gpa);
    printf("your height is = %f\n", height);
    printf("the temperature is = %f Celcius\n", temperature);
    
    // * 3. double
    double pi = 3.14159265358979323846;
    double e = 2.71828182845904523536;
    double phi = 1.61803398874989484820;
    
    printf("pi = %f\n", pi);
    printf("e = %f\n", e);
    printf("phi = %f\n", phi);
    
    // * 4. char
    char grade = 'C';
    char initial = 'F';
    char Currency = '$';
    
    printf("grade = %c\n", grade);
    printf("initial = %c\n", initial);
    printf("Currency = %c\n", Currency);
    
    // * 5. char[]
    char name[] = "Fahrel";
    char lastname[] = "Rifananda";
    char country[] = "Indonesia";
    
    printf("name = %s\n", name);
    printf("lastname = %s\n", lastname);
    printf("country = %s\n", country);
    
    // * 6. bool = you need to #include <stdbool.h>
    bool isStudent = true;
    bool isTeacher = false;
    bool isDeveloper = true;
    
    if (isStudent)
    {
        printf("You are a student\n");
    }
    else {
        printf("You are not a student\n");
    }
    
    if (isTeacher)
    {
        printf("You are a teacher\n");
    }
    else {
        printf("You are not a teacher\n");
    }
    
    if (isDeveloper)
    {
        printf("You are a developer\n");
    }
    else {
        printf("You are not a developer\n");
    }
    */
   
    // ! 3.
    // ? Format Specifiers & Optional Specifiers = Format specifiers are used to print data in a specific format
    
    // * Format Specifiers
    /*
    int age = 20;
    float gpa = 1.5;
    double pi = 3.14159265358979323846;
    char grade = 'C';
    char name[] = "Fahrel";
    
    printf("%d\n", age);
    printf("%f\n", gpa);
    printf("%lf\n", pi);
    printf("%c\n", grade);
    printf("%s\n", name);
    */
   
    // * Optional Specifiers
    // width, precision, and value
    // width = the minimum number of characters to print
    // precision = the number of digits to print after the decimal point
    // value = the value to print
    
    // Set width
    /*
    int num1 = 1;
    int num2 = 12;
    int num3 = -123;
    
    // It will add a space before the number
    printf("%5d \n", num1);
    printf("%5d \n", num2);
    printf("%5d \n", num3);
    
    // It will add a zero before the number
    printf("%05d \n", num1);
    printf("%05d \n", num2);
    printf("%05d \n", num3);
    
    // It will add a plus sign before the number if it is positive
    printf("%+d \n", num1);
    printf("%+d \n", num2);
    printf("%+d \n", num3);
    */
   
    // Set precision
    float num1 = 1.2345;
    float num2 = 1.23456;
    float num3 = 1.23456789;
    
    // It will print the number with 2 decimal places
    printf("%.2f \n", num1);
    printf("%.2f \n", num2);
    printf("%.2f \n", num3);
    
    // It will print the number with 3 decimal places
    printf("%.3f \n", num1);
    printf("%.3f \n", num2);
    printf("%.3f \n", num3);
    
    return 0;
}
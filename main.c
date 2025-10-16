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
    
    
    return 0;
}
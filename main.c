#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <time.h> // srand
#include <unistd.h>
#include <ctype.h>

// int result = 3; // * GLOBAL SCOPE VARIABLE (hard to debug)

void happyBirthday(char name[], int age) {
    printf("Happy birthday to you \n");
    printf("Happy birthday to you \n");
    printf("Happy birthday dear %s \n", name);
    printf("Happy birthday to you \n");
    printf("You are %d years old \n", age);
}

int square(int num) {
    int result = num * num;
    return result;
}

int add(int x, int y) {
    int result = x + y;
    return result;
}

// * Function prototype
void hello(char name[], int age);
bool ageCheck(int age);

int userChoice();
int computerChoice();
void checkWinner(int userChoice, int computerChoice);

float checkBalance(float balance);
float deposit();
float withdraw(float balance);

// * typedef
typedef int Number;
typedef char String[100];
typedef char initial[10];


// * enum
enum Day {
    MONDAY = 1,
    TUESDAY = 2,
    WEDNESDAY = 3,
    THURSDAY = 4,
    FRIDAY = 5,
    SATURDAY = 6,
    SUNDAY = 7
};

// * Struct
struct Student{
    char name[50];
    int age;
    double gpa;
    bool isFullTime;
};

// * Function prototype for struct
void printStudent(struct Student student);

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
    printf("the temperature is = %f Celsius\n", temperature);

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
    */

    // ! 4.
    // ? Arithmetic operators
    /*
    int x = 10;
    int y = 5;
    int z = 0;

    z = x + y;
    z = x - y;
    z = x * y;
    z = x / y;
    z = x % y;

    // * Shortcut
    x+=y;
    x-=y;
    x*=y;
    x/=y;
    x%=y;

    printf("%d\n", z);
    */

    // ! 5.
    // ? User Input = scanf
    /*
    int age = 0; // * To prevent undefined behaviour
    float gpa = 0.0; // * To prevent undefined behaviour
    char grade = '\0'; // * To prevent undefined behaviour
    char name[33] = ""; // * To prevent undefined behaviour

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your gpa: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    // * The whitespace before optional specifier is to remove the new line character
    scanf(" %c", &grade);

    // * It have new line character, to remove it we need
    getchar();
    printf("Enter your name: ");

    // * it will not take a character after whitespace
    // scanf("%s", name);
    // * this is the alternative
    // fgets(name, 33, stdin);
    // * that 33 is a number of character to read, to make it dynamic here it is
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0'; // * To remove the new line character
    // * If you move the name after scanf it will take a new line character
    printf("%s \n", name);
    printf("%d \n", age);
    printf("%.2f \n", gpa);
    printf("%c \n", grade);
    */

    // ! 6.
    // ? SHOPPING CART PROGRAM
    /*
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    float total = 0.0f;
    char currency = '$';

    printf("What item would you like to buy? : ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("How much the item cost each? : ");
    scanf("%f", &price);

    printf("How many of the item you want to buy? : ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("You have bought %d %s/s \n", quantity, item);
    printf("The total amount is %.2f %c \n", total, currency);
    // printf("The total amount is %.2f %s", total, currency); // ! It create seg fault
    */

    // ! 7.
    // ? MAD LIBS GAME
    /*
    char noun[50] = "";
    char verb[50] = "";
    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] = "";


    printf("Enter an adjective 1 (description): ");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strlen(adjective1) - 1] = '\0';

    printf("Enter a noun (person / animal): ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0';

    printf("Enter an adjective 2 (description): ");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strlen(adjective2) - 1] = '\0';

    printf("Enter a verb (-ing): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0';

    printf("Enter an adjective 3 (description): ");
    fgets(adjective3, sizeof(adjective3), stdin);
    adjective3[strlen(adjective3) - 1] = '\0';

    printf("Today i went to the %s zoo.\n", adjective1);
    printf("I saw a %s %s.\n", adjective2, noun);
    printf("It was so %s that i %s.\n", adjective3, verb);
    */

    // ! 8.
    // ? Math Functions = #include <math.h> and need to use -lm after gcc
    /*
    float x = 3.3;
    int y = -3;

    // * it will return the square root of x
    x = sqrt(x);

    // * it will return the cube root of x
    x = pow(x, 2);

    // * it will return the round of x
    x = round(x);

    // * it will return the ceil of x
    x = ceil(x);

    // * it will return the floor of x
    x = floor(x);

    // * it will return the natural logarithm of x
    x = log(x);

    // * it will return the sine of x
    x = sin(x);

    // * it will return the cosine of x
    x = cos(x);

    // * it will return the tangent of x
    x = tan(x);

    // * it will return the absolute value of x
    y = abs(y); // = #include <stdlib.h>

    printf("%f \n", x);
    printf("%d \n", y);
    */

    // ! 9.
    // ? CIRCLE CALCULATOR PROGRAM
    /*
    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.0;
    // * if you use CONST make sure the name is in capital
    const double PI = 3.14;

    printf("Enter the radius : ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    surfaceArea = 4 * PI * pow(radius, 2);
    volume = PI * pow(radius, 3);

    printf("The area = %.2f \n", area);
    printf("The surface area = %.2f \n", surfaceArea);
    printf("The volume =  %.2f \n", volume);
    */

    // ! 10.
    // ? COMPOUND INTEREST CALCULATOR
    /*
    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesCompounded = 0;
    double total = 0.0;

    printf("==================\n");
    printf("COMPOUND INTEREST\n");
    printf("==================\n");
    printf("Enter the principal (P) : ");
    scanf("%lf", &principal);

    printf("Enter the rate (r) : ");
    scanf("%lf", &rate);
    rate = rate / 100;

    printf("Enter the number of years (t) : ");
    scanf("%d", &years);

    printf("Enter the times compounded (n) : ");
    scanf("%d", &timesCompounded);

    total = principal * pow(1 + rate / timesCompounded, timesCompounded * years);

    printf("After %d years, the total is $%.2f\n", years, total);
    */

    // ! 11.
    // ? If statement
    /*
    char name[50] = "";

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    // * Check empty string
    if (strlen(name) == 0) {
        printf("You DID NOT enter your name\n");
    } else {
        printf("Hello %s \n", name);
    }
    */

    // ! 12.
    // ? WEIGHT CONVERSION PROGRAM
    /*
    int choice = 0;
    float pounds = 0.0f;
    float kilograms = 0.0f;

    printf("=========================\n");
    printf("WEIGHT CONVERSION PROGRAM \n");
    printf("=========================\n");
    printf("1 - Pounds to Kilograms\n");
    printf("2 - Kilograms to Pounds\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter the weight in pounds: ");
        scanf("%f", &pounds);
        kilograms = pounds * 2.20462;
        printf("%.2f pounds is equal to %.2f kilograms \n", pounds, kilograms);
    } else if (choice == 2) {
        printf("Enter the weight in kilograms: ");
        scanf("%f", &kilograms);
        pounds = kilograms / 2.20462;
        printf("%.2f kilograms is equal to %.2f pounds \n", kilograms, pounds);
    } else {
        printf("Invalid choice please enter 1 or 2 \n");
    }
    */
    // ? HEIGHT CONVERSION PROGRAM
    /*
    int choice2 = 0;
    float feet = 0.0f;
    float centimeters = 0.0f;

    printf("=========================\n");
    printf("HEIGHT CONVERSION PROGRAM \n");
    printf("=========================\n");
    printf("1 - Feet to Centimeters\n");
    printf("2 - Centimeters to Feet\n");
    printf("Enter your choice: ");
    scanf("%d", &choice2);

    if (choice2 == 1) {
        printf("Enter the height in feet: ");
        scanf("%f", &feet);
        centimeters = feet * 30.48;
        printf("%.2f feet is equal to %.2f centimeters \n", feet, centimeters);
    } else if (choice2 == 2) {
        printf("Enter the height in centimeters: ");
        scanf("%f", &centimeters);
        feet = centimeters / 30.48;
        printf("%.2f centimeters is equal to %.2f feet \n", centimeters, feet);
    } else {
        printf("Invalid choice please enter 1 or 2 \n");
    }
    */

    // ! 13.
    // ? TEMPERATURE CONVERSION PROGRAM
    /*
    char choice = '\0';
    float fahrenheit = 0.0f;
    float celsius = 0.0f;

    printf("==============================\n");
    printf("TEMPERATURE CONVERSION PROGRAM \n");
    printf("==============================\n");
    printf("F - Fahrenheit to Celsius\n");
    printf("C - Celsius to Fahrenheit\n");
    printf("Enter your choice is it F or C: ");
    scanf("%c", &choice);

    if (choice == 'F') {
        printf("Enter the temperature in fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5.0 / 9.0;
        printf("%.2f fahrenheit is equal to %.2f celsius \n", fahrenheit, celsius);
    } else if (choice == 'C') {
        printf("Enter the temperature in celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9.0 / 5.0) + 32;
        printf("%.2f celsius is equal to %.2f fahrenheit \n", celsius, fahrenheit);
    } else {
        printf("Invalid choice please enter C or F \n");
    }
    */

    // ! 14.
    // ? Switch Statement
    /*
    int dayOfTheWeek = 0;

    printf("Enter the day of the week (1-7): ");
    scanf("%d", &dayOfTheWeek);

    switch (dayOfTheWeek) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day! Please enter a number between 1 and 7\n");
            break;
    }
    */

    // ! 15.
    // ? Nested if statement
    /*
    float price = 30.0;
    bool isStudent = false;
    bool isSenior = true;

    if (isStudent) {
        if(isSenior) {
            printf("You got a student discount of $5.00 \n");
            printf("You got a senior discount of $10.00 \n");
            price -= 15.0;
        } else {
            printf("You got a student discount of $5.00 \n");
            price -= 5.0;
        }
    } else if (isSenior) {
        printf("You got a senior discount of $10.00 \n");
        price -= 10.0;
    }

    printf("The price is $%.2f \n", price);
    */

    // ! 16.
    // ? CALCULATOR PROGRAM USING SWITCH STATEMENT
    /*
    char operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

    printf("Enter the operator ( + - * / ) : ", num1);
    scanf("%c", &operator);

    printf("Enter the first number : ");
    scanf("%lf", &num1);

    printf("Enter the second number : ");
    scanf("%lf", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0)
            {
                printf("You cannot divide by zero \n");
            } else {
                result = num1 / num2;
            }
            break;
        default:
            printf("Invalid operator please enter + - * / \n");
            break;
    }

    printf("The result is %.2f \n", result);
    */

    // ! 17.
    // ? Logical Operators
    /*
    // * &&
    int temp = 35;

    if (temp > 0 && temp < 33) {
        printf("The weather is GOOD \n");
    } else {
        printf("The weather is BAD \n");
    }

    // * ||
    int age = 20;

    if (age >= 10 || age <= 20) {
        printf("You are a TEENAGER \n");
    } else {
        printf("You are not a TEENAGER \n");
    }

    // * !
    bool isSunny = false;

    if (!isSunny) {
        printf("It is RAINING outside \n");
    } else {
        printf("It is SUNNY outside \n");
    }
    */

    // ! 18.
    // ? Functions = in C you need to declare it before Main()
    /*
    char name[50] = "";
    int age = 0;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Enter your age: ");
    scanf("%d", &age);

    happyBirthday(name, age);
    */

    // ! 19.
    // ? Return keyword = return a value from a function
    /*
    printf("The square of 3 is %d \n", square(3));
    printf("The square of 4 is %d \n", square(4));
    printf("The square of 5 is %d \n", square(5));
    */

    // ! 20.
    // ? Variable scope
    /*
    // GLOBAL SCOPE
    // printf("%d", result);

    // LOCAL SCOPE
    int result = add(3, 4);
    printf("%d", result);
    */
   
    // ! 21.
    // ? Function prototype = declare first define later(after main)
    /*
    hello("Spongebob", 30);
    
    if (ageCheck(30))
    {
        printf("You are old enough to work at the Krusty Krab \n");
    }
    else {
        printf("You are NOT old enough to work at the Krusty Krab \n");
    }
    */
   
    // ! 22.
    // ? While loops
    /*
    char name[50] = "";
    
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    
    while (strlen(name) == 0) {
        printf("You DID NOT enter your name\n");
        printf("Enter your name: ");
        fgets(name, sizeof(name), stdin);
        name[strlen(name) - 1] = '\0';
    }
    printf("Hello %s \n", name);
    */
    // * DO WHILE LOOP
    /*
    char name[50] = "";
    
    do {
        printf("Enter your name: ");
        fgets(name, sizeof(name), stdin);
        name[strlen(name) - 1] = '\0';
    } while (strlen(name) == 0);
    
    printf("Hello %s \n", name);
    */
   
    // ! 23.
    // ? For loop
    /*
    for (int i = 0; i < 10; i++) {
        printf("%d \n", i);
    }
    */
    
    // * Using Thread
    /*
    for (int i = 10; i > 0; i--) {
        sleep(1);
        printf("%d \n", i);
    }
    
    printf("Happy new year \n");
    */
   
    // ! 24.
    // ? Break and Continue
    /*
    for (int i = 1; i <= 10; i++)
    {
        if (i == 3)
        {
            continue; // * SKIP the loop
        }
        
        if (i == 7)
        {
            break; // * STOP the loop
        }
        
        printf("%d \n", i);
    }
    */
   
    // ! 25.
    // ? Nested Loops
    
    // * Instead of doing these
    /*
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    
    printf("\n");
    
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }

    printf("\n");
    
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    */
   
    // * Do this
    /*
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    */
   
    // * 1. Exercise
    /*
    int column = 0;
    int row = 0;
    char symbol = '\0';
    
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    
    printf("Enter the number of columns: ");
    scanf("%d", &column);
    
    printf("Enter the symbol: ");
    scanf(" %c", &symbol);
    
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= column; j++) {
            printf("%c ", symbol);
        }
        printf("\n");
    }
    */
   
    // * 2. Exercise
    /*
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%3d ", i * j);
        }
        printf("\n");
    }
    */
   
    // * 3. Exercise
    // Print * as a triangle
    /*
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    */
   
    // ! 26.
    // Random Number
    // * Its actually a pseudo random number = not real random
    // * Need #include <time.h> and #include <stdlib.h>
    // * this is the seed = it use the current time
    // * if not use the seed it will generate the same number
    /*
    srand(time(NULL));
    
    int min = 1;
    int max = 100;
    */
    // General formula to generate a random number
    /*
    int randomNumber1 = (rand() % (max - min + 1)) + min;
    int randomNumber2 = (rand() % (max - min + 1)) + min;
    int randomNumber3 = (rand() % (max - min + 1)) + min;
    
    printf("%d %d %d", randomNumber1, randomNumber2, randomNumber3);
    */
   
    // ! 27.
    // ? NUMBER GUESSING GAME
    /*
    srand(time(NULL));
    
    int guess = 0;
    int tries = 0;
    int min = 1;
    int max = 100;
    int answer = rand() % (max - min + 1) + min;
    printf("=========== NUMBER GUESSING GAME ============ \n");
    
    do {
        printf("Guess the number between %d and %d: ", min, max);
        scanf("%d", &guess);
        tries++;
        
        if (guess < answer) {
            printf("to LOW \n");
        } else if (guess > answer) {
            printf("to HIGH \n");
        } else {
            printf("CORRECT! \n");
            break;
        }
    } while (guess != answer);
    
    printf("The number was %d \n", answer);
    printf("It took you %d tries \n", tries);
    */
   
    // ! 28.
    // ? ROCK PAPER SCISSORS GAME
    /*
    srand(time(NULL));
    int userC = userChoice();
    int computerC = computerChoice();
    
   
    switch (userC) {
        case 1:
            printf("You chose rock \n");
            break;
        case 2:
            printf("You chose paper \n");
            break;
        case 3:
            printf("You chose scissors \n");
            break;
        default:
            printf("Invalid choice please enter 1 2 or 3 \n");
            break;
    }
    
    switch (computerC) {
        case 1:
            printf("Computer chose rock \n");
            break;
        case 2:
            printf("Computer chose paper \n");
            break;
        case 3:
            printf("Computer chose scissors \n");
            break;
        default:
            printf("Invalid choice please enter 1 2 or 3 \n");
            break;
    }
    
    checkWinner(userC, computerC);
    */
   
    // ! 29.
    // ? BANK PROGRAM
    /*
    float balance = 0.0f;
    int choice = 0;

    do {
        printf("=========== BANK PROGRAM ============ \n");
        printf("\n1. Check balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("\nEnter your choice (1-4): ");
        
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            balance = checkBalance(balance);
            break;
        case 2:
            balance += deposit();
            break;
        case 3:
            balance -= withdraw(balance);
            break;
        case 4:
            printf("=========== Thank you for using our bank program ============ \n");
            break;
        default:
            printf("Invalid choice please enter 1 2 3 or 4 \n");
            break;
        }   
    } while (choice != 4);
    */
   
    // ! 30.
    // ? Array
    /*
    int number[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char letter[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    char name[] = "Fahrel";
    
    // * Change the value
    number[0] = 100;
    number[1] = 200;
    number[2] = 300;
    number[3] = 400;
    
    printf("%d \n", number[0]);
    printf("%d \n", number[1]);
    printf("%d \n", number[2]);
    printf("%d \n", number[3]);
    
    // * Print array common way
    
    int sizeNumber = sizeof(number) / sizeof(number[0]);
    int sizeLetter = sizeof(letter) / sizeof(letter[0]);
    int sizeName = sizeof(name) / sizeof(name[0]);
    
    
    for (int i = 0; i < sizeNumber; i++) {
        printf("%d ", number[i]);
    }
    
    printf("\n");
    for (int i = 0; i < sizeLetter; i++) {
        printf("%c ", letter[i]);
    }
    printf("\n");
    for (int i = 0; i < sizeName; i++) {
        printf("%c ", name[i]);
    }
    */
   
    // ! 31.
    // ? Array and user input
    /*
    
    int scores[5] = {0};
    printf("Enter scores: ");
    scanf("%d", &scores[0]);
    
    printf("Enter scores: ");
    scanf("%d", &scores[1]);
    
    printf("Enter scores: ");
    scanf("%d", &scores[2]);
    
    printf("Enter scores: ");
    scanf("%d", &scores[3]);
    
    printf("Enter scores: ");
    scanf("%d", &scores[4]);
    
    */
   
    /*
    for (int i = 0; i < 5; i++) {
        printf("Enter scores : ");
        scanf("%d", &scores[i]);
    }
    
    for (int i = 0; i < 5; i++) {
        printf("%d ", scores[i]);
    }
    */
   
    // ! 32.
    // ? 2D Array
    // * This will error = we need to initialize the length of the column
    // int number[][] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    /*
    int number[][3] = {{1, 2, 3}, 
                       {4, 5, 6},
                       {7, 8, 9},
                       {10, 11, 12}};
                       
    
    /*
    printf("%d ", number[0][0]);
    printf("%d ", number[0][1]);
    printf("%d ", number[0][2]);
    printf("\n");
    printf("%d ", number[1][0]);
    printf("%d ", number[1][1]);
    printf("%d ", number[1][2]);
    printf("\n");
    printf("%d ", number[2][0]);
    printf("%d ", number[2][1]);
    printf("%d ", number[2][2]);
    printf("\n");
    */
   
    /*
    // * Best way to print 2D array
    for (int i = 0; i < 4; i++) { // * Row
        for (int j = 0; j < 3; j++) { // * Column
            printf("%d ", number[i][j]);
        }
        printf("\n");
    }
    
    // * Exercise
    char numPad[10][3] = {{'1', '2', '3'},
                          {'4', '5', '6'},
                          {'7', '8', '9'},
                          {'*', '0', '#'}};
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c ", numPad[i][j]);
        }
        printf("\n");
        
    }
    */
   
    // ! 33.
    // ? Array of strings
    /*
    char fruits[][10] = {"Apple", "Banana", "Orange", "Grapes", "Mango"};
    int sizeFruits = sizeof(fruits) / sizeof(fruits[0]);
    
    fruits[0][0] = 'e';
    fruits[0][4] = 'A';
    
    for (int i = 0; i < sizeFruits; i++) {
        printf("%s \n", fruits[i]);
    }
    */
   
    // Accepting user input
    /*
    char name[3][10] = {0};
    int sizeName = sizeof(name) / sizeof(name[0]);
    
    for (int i = 0; i <= sizeName; i++) {
        printf("Enter your name: ");
        fgets(name[i], sizeof(name[i]), stdin);
        name[i][strlen(name[i]) - 1] = '\0';
    }
    
    for (int i = 0; i <= sizeName; i++) {
        printf("Hello %s \n", name[i]);
    }
    */
   
    // ! 34.
    // ? QUIZ GAME
    /*
    char question[][100] = {"\nWhat is the largest planet in the solar system?", 
        "\nWhat is the smallest planet in the solar system?", 
        "\nWhat is the hottest planet in the solar system?", 
        "\nIs earth flat?",
        "\nWhat is the meaning of life?"};
    
    char options[][100] = {"\nA. Mercury\nB. Venus\nC. Mars\nD. Jupiter",              "\nA. Venus\nB. Earth\nC. Mercury\nD. Jupiter",
                           "\nA. Mars\nB. Venus\nC. Earth\nD. Jupiter",
                           "\nA. Yes\nB. No\nC. Maybe\nD. Sometimes",
                           "\nA. Boobs\nB. Titties\nC. Food\nD. God"};
    char answerKey[] = {'D', 'C', 'B', 'A', 'A'};
    
    int sizeQuestion = sizeof(question) / sizeof(question[0]);
    
    char guess = '\0';
    int score = 0;
    
    for (int i = 0; i < sizeQuestion; i++) {
        printf("%s \n", question[i]);
        printf("%s \n", options[i]);
        
        printf("\nENTER YOUR ANSWER: ");
        scanf(" %c", &guess);
        
        guess = toupper(guess); // #include <ctype.h>
        
        if (guess == answerKey[i]) {
            score++;
            printf("CORRECT \n");
        } else {
            printf("WRONG \n");
        }
    }
    
    printf("Your score is %d out of %d \n", score, sizeQuestion);
    */
   
    // ! 35.
    // ? Ternary Operator
    // ? (condition) ? value_if_true : value_if_false
    /*
    int a = 10;
    int b = 20;
    int max = (a > b) ? a : b;
    
    printf("%d \n", max);
    
    // Using boolean
    bool isOnline = true;
    printf("%s \n", (isOnline) ? "Online" : "Offline"); // It return string

    int number = 10;
    printf("%d is %s \n", number, (number % 2 == 0) ? "even" : "odd");
    
    int hour = 17;
    int minute = 26;
    char *meridian = (hour < 12) ? "AM" : "PM"; // It use pointer because it is a string
    
    printf("%d:%d %s \n", hour, minute, meridian);
    
    // Much better using meridian above
    // printf("%d:%d %s \n", hour, minute, (hour < 12) ? "AM" : "PM");
    */
    
    // ! 36.
    // ? Typedef = create a new type
    // ? typedef existing_type new_name;
    // ? rename data type to something else
    /*
    Number myNumber = 33;
    String name = "Fahrel";
    initial initialName = "F";
    
    printf("%d \n", myNumber);
    printf("%s \n", name);
    printf("%s \n", initialName);
    */
    
    // ! 37.
    // ? Enum = It replace number with a name
    // ? Monday = 0
    // ? Tuesday = 1
    // ? Wednesday = 2
    
    // ? But you can redeclare the number
    // ? Monday = 1;
    // ? Tuesday = 2;
    // ? Wednesday = 3;
    /*
    enum Day today = SATURDAY;
    
    if (today == SATURDAY || today == SUNDAY) {
        printf("Its the weekend \n");
    } else {
        printf("Its the workday \n");
    }
    */
    
    // ! 38.
    // ? Struct = Similar to class
    /*
    struct Student student1 = {"Spongebob", 30, 3.5, true};
    struct Student student2 = {"Patrick", 25, 3.0, false};
    struct Student student3 = {"Squidward", 20, 2.5, true};
    // * Declare a empty struct
    struct Student student4 = {};
    strcpy(student4.name, "Sandy");
    student4.age = 20;
    student4.gpa = 4.0;
    student4.isFullTime = false;
    
    /*    
    printf("%s \n", student1.name);
    printf("%d \n", student1.age);
    printf("%.2f \n", student1.gpa);
    printf("%s \n", (student1.isFullTime) ? "Yes" : "No");
    */

    // * Print all the struct using function
    /*
    printStudent(student1);
    printStudent(student2);
    printStudent(student3);
    printStudent(student4);
    */
    
    // ! 39.
    // ? Array of struct
    struct Student students[] = {{"Spongebob", 30, 3.5, true},
                                 {"Patrick", 25, 3.0, false},
                                 {"Squidward", 20, 2.5, true}};
    
    int sizeStudents = sizeof(students) / sizeof(students[0]);
    
    for (int i = 0; i < sizeStudents; i++) {
        printf("Name: %s \n", students[i].name);
        printf("Age: %d \n", students[i].age);
        printf("GPA: %.2f \n", students[i].gpa);
        printf("Is full time: %s \n", (students[i].isFullTime) ? "Yes" : "No");
        printf("\n");
    }
    return 0;
}

void printStudent(struct Student student) {
    printf("Name: %s \n", student.name);
    printf("Age: %d \n", student.age);
    printf("GPA: %.2f \n", student.gpa);
    printf("Is full time: %s \n", (student.isFullTime) ? "Yes" : "No");
    printf("\n");
}

float checkBalance(float balance) {
    printf("Your balance is Rp.%.2f \n", balance);
    return balance;
}
float deposit() {
    float amount = 0.0f;
    printf("Enter the amount to deposit: Rp.");
    scanf("%f", &amount);
    
    if (amount < 0) {
        printf("Invalid amount please enter a positive number \n");
        return 0.0;
    } else {
        printf("Successfully deposited Rp.%.2f \n", amount);
        return amount;
    }
}
float withdraw(float balance) {
    float amount = 0.0f;
    printf("Enter the amount to withdraw: Rp.");
    scanf("%f", &amount);
    
    if (amount < 0) {
        printf("Invalid amount please enter a positive number \n");
        return 0.0;
    } else if (amount > balance) {
        printf("Insufficient funds your balance is Rp. %.2f \n", balance);
        return 0.0;
    } else {
        printf("Successfully withdrawn Rp. %.2f \n", amount);
        return amount;
    }
}

int userChoice() {
    int choice = 0;
    do {
        printf("===== ROCK PAPER SCISSORS GAME ===== \n");
        printf("1. Rock\n");
        printf("2. Paper\n");
        printf("3. Scissors\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &choice);
    } while (choice < 1 || choice > 3);
    
    return choice;
}
int computerChoice() {
    srand(time(NULL));
    return rand() % 3 + 1;
}
void checkWinner(int userChoice, int computerChoice) {
    if (userChoice == computerChoice) {
        printf("It's a tie \n");
    } else if (userChoice == 1 && computerChoice == 2) {
        printf("You win \n");
    } else if (userChoice == 2 && computerChoice == 3) {
        printf("You win \n");
    } else if (userChoice == 3 && computerChoice == 1) {
        printf("You win \n");
    } else {
        printf("You lose \n");
    }
}

void hello(char name[], int age)
{
    printf("Hello %s \n", name);    
    printf("You are %d years old \n", age);
}

bool ageCheck(int age)
{
    return age >= 16;
}
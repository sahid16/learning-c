               //variables//
                 //rules//
//1.variable are case sansetive 
//example variable "a" and varible "A" both are difrent 

//2. 1st character is alphabet or (underscore '_')
//example 
// int A = 1; not use int  1A = 1; this give you error
// int _a = 2; not use int  -a = 2;  also this give suprise

//3. no comma/no blank space 
//example 
// int  fix,price = 100; this give you error
// int fix price = 110; and also this
// int fix_price = 135; use always underscore(_) for creating space

// 4. no other symbol than (underscore "_") can be use

/*#include <stdio.h>
    
    int main(){
       int price = 10;
          printf ("%d\n",price);
            return 0; }*/

              //data types//
// many types of data type exist in c but i write few ofthem,
//and the hold some memory some 5-10 and some 1-5
/* 
 #include <stdio.h>

int main() {

    int age = 22;      // integer datatype
    float pi = 3.14;   // float datatype
    char star = '*';   // character datatype

    printf("%d\n", age);  // Print integer
    printf("%f\n", pi);   // Print float
    printf("%c\n", star); // Print character

    return 0;
}
*/
              //constants
     //value that dont change(fixed)
              //types  
 //1. interger constans,1,2,3,0,-1,-2
 //2. real constans 1.0, 2.0, 3,14, -2.4,   
 //3. character constans  'a', 'B', 'c', '#', '%', note 'a' and 'A' are diffrent


                //keywords             
//reserved words that speacial meanind to compiler.
//32 keywords in c we cant not use for variable name,
/*
Reserved Keywords in C:

auto       break      case       char
const      continue   default    do
double     else       enum       extern
float      for        goto       if
int        long       register   return
short      signed     sizeof     static
struct     switch     typedef    union
unsigned   void       volatile   while
*/

             //program structure
 /*
Basic Structure of a C Program:

1. **Include Header Files**:
   - These are like libraries you include to use built-in functions.
   - Example: `#include <stdio.h>` allows you to use functions like `printf` for output and `scanf` for input.

2. **Main Function**:
   - The `main()` function is where the program starts running.
   - Whatever you write inside `main()` will get executed when you run the program.

3. **Logic of the Program**:
   - Inside `main()`, you write the steps or logic your program will follow.
   - This includes declaring variables, performing calculations, printing output, etc.

4. **Returning from `main()`**:
   - At the end of the program, you write `return 0;`. 
   - This tells the computer that the program finished successfully.
*/

/* Example Program: Printing "Hello, World!" 
#include <stdio.h>  // Library for input/output functions

int main() {  // This is the starting point of the program
    // Declare a message to print on the screen
    printf("Hello, World!\n");  // Display "Hello, World!" and move to a new line
    return 0;  // End the program successfully
}  */

                //comments
    /* we finish it in verry short (//) this
    is single line comment and (/* *./)this is multi line comment*/
    


                      
                       //input 
/*#include <stdio.h>  // Include library for input and output

int main() {
    int age;        // To store age
    float height;   // To store height
    char grade;     // To store grade

    // Ask the user to enter age
    printf("Enter your age: ");
    scanf("%d", &age);  // Store the age (an integer)

    // Ask the user to enter height
    printf("Enter your height (in meters): ");
    scanf("%f", &height);  // Store the height (a floating-point number)

    // Ask the user to enter grade
    printf("Enter your grade (A, B, C, etc.): ");
    scanf(" %c", &grade);  // Store the grade (a single character)

    // Print what the user entered
    printf("Your age is: %d\n", age);        // Print the age
    printf("Your height is: %.2f meters\n", height);  // Print the height with 2 decimal places
    printf("Your grade is: %c\n", grade);    // Print the grade

    return 0;  // End the program
}*/
          

                  //simple age input
/*#include <stdio.h>

int main(){
int age;
printf("enter your age");
scanf("%d",&age);
printf("age is : %d\n ", age);
return 0; 
} */


/*
#include <stdio.h>

int main() {
    int num_one, num_two, sum;  // Variables to store input and result

    // Ask the user to enter the first value
    printf("Enter the first number: ");
    scanf("%d", &num_one);  // Read the first number

    // Ask the user to enter the second value
    printf("Enter the second number: ");
    scanf("%d", &num_two);  // Read the second number

    // Perform addition
    sum = num_one + num_two;

    // Print the result
    printf("The sum of %d and %d is: %d\n", num_one, num_two, sum);

    return 0;  // End the program
}   */



              //wrinting area of the squre
/*
#include <stdio.h>
int main(){

float side;
printf("enter side");
scanf("%f",&side);

printf("area is : %f", side + side);
return 0; 
}
*/

                  // area of circle
 /*                 
#include <stdio.h>
int main (){

float radius;
printf("enter radius");
scanf("%f",&radius);

printf("area is: %f", 3.14 * radius * radius);
return 0;
} */



   
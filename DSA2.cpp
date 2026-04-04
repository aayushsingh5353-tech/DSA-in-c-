#include <iostream>
using namespace std;
int main() {
    cout << "Hello World!";
    return 0;
}


//DAta types in C++


#include <iostream>
using namespace std;
int main() {
  int age =25;
    cout << sizeof(age)<< endl;
    return 0;
}

#include <iostream>
using namespace std;
int main() {
  int age =25;     // this is in 4 bytes of memory and it can store a whole number and it can store a number from -2,147,483,648 to 2,147,483,647
    cout << sizeof(age)<< endl;
    return 0;
}



#include <iostream>
using namespace std;
int main() {
char a = 'A';     //this is in 1 byte of memory and it can store a single character and it is represented in ASCII code and the value of 'A' is 65 in ASCII code and the value of 'a' is 97 in ASCII code and the value of '0' is 48 in ASCII code
cout << a<< endl;  // char data type is used to store a single character and it takes 1 byte of memory
    return 0;
}



#include <iostream>
using namespace std;
int main() {           // this is in 4 bytes of memory
    float PI = 3.14f;  // we can also write 3.14 without f but it will be treated as double and it will take 8 bytes of memory and if we want to store it in float variable then we have to add f at the end of the number
    cout << PI<< endl;
    return 0;
}



#include <iostream>
using namespace std;
int main() {
    bool aayush = true;      //this is in 1 byte
    cout << aayush<< endl;     // true is represented as 1 and false is represented as 0 in C++
    return 0;
}




#include <iostream>
using namespace std;
int main() {
    double a = 3.14;     // this is in 8 bytes of memory and it can store a decimal number and it can store a number from 1.7E-308 to 1.7E+308
    cout << a<< endl;
    return 0;
}



//Type casting in C++


#include <iostream>
using namespace std;
    int main() {
        char grade = 'A';
        int value = grade;   // this is called implicit type casting and it is done automatically by the compiler and it is done when we assign a value of one data type to another data type and it is done when we assign a value of a smaller data type to a larger data type
        cout << value<< endl;  // the value of 'A' is 65 in

    return 0;
}



#include <iostream>
using namespace std;
int main() {
    double a = 3.14;
    int b = (int)a;   // this is called explicit type casting and it is done manually by the programmer and it is done when we want to convert a value of one data type to another data type and it is done when we want to convert a value of a larger data type to a smaller data type
    cout << b<< endl;  // the value of b will be 3 because when
    return 0;
} 


#include <iostream>
using namespace std;
int main() {
    int age;
    cout<<"enter your agr:";
    cin>>age;
    cout<<"your age is:"<<age;

    return 0;
}


//operators in C++

#include <iostream>
using namespace std;
int main() {
    int a = 10;
    int b = 05;
    cout<< a+b<< endl;  // this is called addition operator and it is used to add two numbers
    cout<< a-b<< endl;  // this is called subtraction operator and it is used
    cout<< a*b<< endl;  // this is called multiplication operator and it is used to multiply two numbers
    cout<< a/b<< endl;  // this is called division operator and it is used to divide two numbers
    cout<< a%b<< endl;  // this is called modulus operator and it is used to find the remainder when we divide two numbers
    cout<< a++<< endl;  // this is called post-increment operator and it is used to increment the value of a by 1 but it will return the original value of a before incrementing
    cout<< ++a<< endl;  // this is called pre-increment operator and it
    cout<< a--<< endl;  // this is called post-decrement operator and it is used to decrement the value of a by 1 but it will return the original value of a before decrementing
    cout<< --a<< endl;  // this is called pre-decrement operator and it
    cout<< a<< endl;    // this will print the current value of a after all the increment and decrement operations
    cout<< (a==b)<< endl;  // this is called equality operator and it is used to compare two values and it will return true if both values are equal and it will return false if both values are not equal
    cout<< (a!=b)<< endl;  // this is called inequality operator and it
    cout<< (a>b)<< endl;   // this is called greater than operator and it is used to compare two values and it will return true if the value of a is greater than the value of b and it will return false if the value of a is not greater than the value of b
    cout<< (a<b)<< endl;   // this is called less than operator and it
    cout<< (a>=b)<< endl;  // this is called greater than or equal to operator and it is used to compare two values and it will return true if the value of a is greater than or equal to the value of b and it will return false if the value of a is not greater than or equal to the value of b
    cout<< (a<=b)<< endl;  // this is called less than or equal
    cout<< (a&&b)<< endl;  // this is called logical AND operator and it is used to check if both conditions are true and it will return true if both conditions are true and it will return false if both conditions are not true
    cout<< (a||b)<< endl;  // this is called logical OR operator and
    cout<< (!a)<< endl;    // this is called logical NOT operator and it is used to check if the condition is false and it will return true if the condition is false and it will return false if the condition is true
    cout<< (a&b)<< endl;   // this is called bitwise AND operator and it is used to perform bitwise AND operation on two numbers and it will return a number that has a bit set to 1 only if both corresponding bits of the operands are 1
    cout<< (a|b)<< endl;   // this is called bitwise OR operator
    cout<< (a^b)<< endl;   // this is called bitwise XOR operator and it is used to perform bitwise XOR operation on two numbers and it will return a number that has a bit set to 1 only if the corresponding bits of the operands are different
    cout<< (a<<1)<< endl;  // this is called left shift operator and it is used to shift the bits of a number to the left by a specified number of positions and it will fill the vacant positions with 0
    cout<< (a>>1)<< endl;  // this is called right shift operator and
    cout<< (a+=b)<< endl;  // this is called addition assignment operator and it is used to add the value of b to a and assign the result to a
    cout<< (a-=b)<< endl;  // this is called subtraction assignment operator and
    cout<< (a*=b)<< endl;  // this is called multiplication assignment operator and it is used to multiply the value of a by b and assign the result to a
    cout<< (a/=b)<< endl;  // this is called division assignment operator and it is used to divide the value of a by b and assign the result to a
    cout<< (a%=b)<< endl;  // this is called modulus assignment operator and it is used to find the remainder when we divide a by b and assign the result to a
    cout<< (a&=b)<< endl;  // this is called bitwise AND assignment operator and it is used to perform bitwise AND operation on a and b and assign the result to a
    cout<< (a|=b)<< endl;  // this is called bitwise OR
    cout<< (a^=b)<< endl;  // this is called bitwise XOR assignment operator and it is used to perform bitwise XOR operation on a and b and assign the result to a
    cout<< (a<<=1)<< endl; // this is called left shift assignment operator
    cout<< (a>>=1)<< endl; // this is called right shift assignment operator and it is used to shift the bits of a to the right by a specified number of positions and assign the result to a
    cout<< (a==b ? "a is equal to b" : "a is not equal to b")<< endl;  // this is called ternary operator and it is used to evaluate a condition and return one of two values based on the result of the condition and it is a shorthand for if-else statement

 
    return 0;
}
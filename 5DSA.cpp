//1. Function Without Argument & Without Return Value

#include <iostream>
using namespace std;

void greet() {
    cout << "Hello";
}

int main() {
    greet();
    return 0;
}


//2. Function With Argument & Without Return Value

#include <iostream>
using namespace std;

void square(int n) {
    cout << n * n;
}

int main() {
    square(5);
    return 0;
}    

//3. Function With Argument & With Return Value

#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    cout << add(10, 20);
    return 0;
}


//4. Function Without Argument & With Return Value


#include <iostream>
using namespace std;

int getNum() {
    return 100;
}

int main() {
    cout << getNum();
    return 0;
}




//. Factorial Using Function


#include <iostream>
using namespace std;

int fact(int n) {
    int f = 1;
    for(int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main() {
    cout << fact(5);
    return 0;
}


//6. Prime Number Using Function



#include <iostream>
using namespace std;

bool prime(int n) {
    if(n < 2) return false;
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0) return false;
    return true;
}

int main() {
    cout << prime(7);
    return 0;
}



//7. Recursive Factorial

#include <iostream>
using namespace std;

int fact(int n) {
    if(n == 0) return 1;
    return n * fact(n - 1);
}

int main() {
    cout << fact(5);
    return 0;
}


//8. Recursive Fibonacci



#include <iostream>
using namespace std;

int fib(int n) {
    if(n <= 1) return n;
    return fib(n-1) + fib(n-2);
}

int main() {
    cout << fib(6);
    return 0;
}


//9. Call By Value

#include <iostream>
using namespace std;

void swapNum(int a, int b) {
    int t = a;
    a = b;
    b = t;
}

int main() {
    int x = 10, y = 20;
    swapNum(x, y);
    cout << x << " " << y;
}

//10. Call By Reference


#include <iostream>
using namespace std;

void swapnum(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}

int main() {
    int x = 10, y = 20;
    swapnum(x, y);
    cout << x << " " << y;
}

//11. Default Arguments

#include <iostream>
using namespace std;

void greet(string name = "Guest") {
    cout << "Hello, " << name;
}

int main() {
    greet("Alice");
    return 0;
}

//12. Function Overloading
#include <iostream>
using namespace std;

void print(int n) {
    cout << "Integer: " << n << endl;
}

void print(double n) {
    cout << "Double: " << n << endl;
}

int main() {
    print(5);
    print(3.14);
    return 0;
}

//13. Inline Function

#include <iostream>
using namespace std;

inline int squareInline(int n) {
    return n * n;
}

int main() {
    cout << squareInline(5);
    return 0;
}
//14. Lambda Function

#include <iostream>
using namespace std;
void greet() {
    auto sayHello = []() {
        cout << "Hello from Lambda!" << endl;
    };
    sayHello();
}

int main() {
    greet();
    return 0;
}


//15. Function Pointer

#include <iostream>
using namespace std;
void greet() {
    cout << "Hello from Function Pointer!" << endl;
}
int main() {
    void (*funcPtr)() = greet;
    funcPtr();
    return 0;
}


//16. Recursion with Function Pointer


#include <iostream>
using namespace std;

void (*funcPtr)(int);

void recursiveFunction(int n) {
    if(n <= 0) return;
    cout << n << " ";
    funcPtr(n - 1);
}

int main() {
    funcPtr = recursiveFunction;
    funcPtr(5);
    return 0;
}


//17. Function Returning Function Pointer

#include <iostream>
using namespace std;

int (*getFunction())(int) {
    return [](int n) { return n * n; };
}

int main() {
    int (*funcPtr)(int) = getFunction();
    cout << funcPtr(5);
    return 0;
}







#include <bits/stdc++.h>
using namespace std;

int main() {
	int n = 4;
	
	for(int i=0; i<n; i++){
	    for(int j=0; j<n-i-1; j++){
	    	cout<< " ";
	    }
	    for (int j=1; j<=i+1; j++ ){
	        cout<< j ;
	        
	    }
	        for(int j=i; j>=1; j--){
	            cout << j ;
	            
	        }
            cout << endl;

}
}















#include <iostream>
using namespace std;

int main() {
    int n=4;
    // Upper part
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++)
            cout << " ";

        cout << "*";

        if (i > 1) {
            for (int j = 1; j <= 2 * i - 3; j++)
                cout << " ";
            cout << "*";
        }

        cout << endl;
    }

    // Lower part
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++)
            cout << " ";

        cout << "*";

        if (i > 1) {
            for (int j = 1; j <= 2 * i - 3; j++)
                cout << " ";
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}










#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cout << "*";

        for (int j = 1; j <= 2 * (n - i); j++)
            cout << " ";

        for (int j = 1; j <= i; j++)
            cout << "*";

        cout << endl;
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++)
            cout << "*";

        for (int j = 1; j <= 2 * (n - i); j++)
            cout << " ";

        for (int j = 1; j <= i; j++)
            cout << "*";

        cout << endl;
    }

    return 0;
}
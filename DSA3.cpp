#include <iostream>
using namespace std;
int main() {
    int n = 40;
    if(n>=0){
        cout<<"the number is positive";
    }
    else{
        cout<<"the number is negative";
    }
    return 0;
}




#include <iostream>
using namespace std;
int main() {
    int age;
    cout<<"enter your age:";
    cin>>age;
    if(age>=18){
        cout<<"you are eligible to vote";
    }
    else{
        cout<<"you are not eligible to vote";
    }
}





#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter a number:";
    cin>>n;
    if(n%2==0){
        cout<<"the number is even";
    }
    else{
        cout<<"the number is odd";
    }
}





#include <iostream>
using namespace std;
int main() {
    int marks;
    cout<<"enter your marks:";
    cin>>marks;
    if(marks>=90){
        cout<<"You got A grade";
    }
    else if (marks>=80){
        cout<<"You got B grade";
    }
    else if (marks>=70){
        cout<<"You got C grade";
    }
    else if (marks>=60){
        cout<<"You got D grade";
    }
    else{
        cout<<"You got F grade";
    }
}


#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter a character:";
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"the character is a lowercase letter";
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"the character is an uppercase letter";
    }
    else if(ch>='0' && ch<='9'){
        cout<<"the character is a digit";
    }
    else{
        cout<<"the character is a special character";
    }
}



#include <iostream>
using namespace std;
int main() {
    char ch;
    cout<<"enter a character:";
    cin>>ch;
    if(ch>=65 && ch<=90){
        cout<<"the character is an uppercase letter";
    }
    else if(ch>=97 && ch<=122){
        cout<<"the character is a lowercase letter";
    }
    else if(ch>=48 && ch<=57){
        cout<<"the character is a digit";
    }
    else{
        cout<<"the character is a special character";
    }
}



//Ternary Statement in C++

#include <iostream>
using namespace std;
int main(){
    int n = -45;
    cout<<(n>=0? "the number is positive":"the number is negative");
}





//Loops in C++


#include <iostream>
using namespace std;
int main(){
    int count = 1;
    while (count<=3){
        cout<<count<<" ";
        count++;
    }
}




#include <iostream>
using namespace std;
int main(){
    int n = 5;
    int count = 1;
    while (count<=n){
        cout<<count<<" ";
        count++;
    }
}




#include <iostream>
using namespace std;
int main(){
    int n = 5;
    for(int i=1; i<=n; i++){
        cout<<i<<" ";
    }
    cout << endl;
    return 0;

}




#include <iostream>
using namespace std;
int main(){
    int n =5;
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    cout <<"Sum = "<< sum << endl;
    return 0;

}




#include <iostream>
using namespace std;
int main(){
    int n = 5;
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum +=i;
        if(i==5){
            break;
        }
    }
    cout << "Sum = " << sum << endl;
    return 0;

}





#include <iostream>
using namespace std;
int main(){
    int n = 5;
    int sum = 0;
    for(int i=1; i<=n; i=i+2){
        sum +=i;
      
    }
    cout << "Sum = " << sum << endl;
    return 0;

}



#include <iostream>
using namespace std;
int main(){
    int n = 5;
for (int i=1; i<=n; i++){
    if(i%2 !=0){
        cout<<i<<" ";
    }
}
    return 0;

}






#include <iostream>
using namespace std;
int main(){
    int n = 5;
    int oddSum = 0;
    for(int i=1; i<=n; i++){
        if(i%2 ==0){
            oddSum +=i;
        }
    }
    cout << "Sum of odd numbers = " << oddSum << endl;
    return 0;
}







#include <iostream>
using namespace std;
int main(){
    int i = 1;
    int sum=0;
    while (i<=5){
        if(i%2 ==0){
            sum+=1;
        }
        i++;
    }
    cout << "Sum of even numbers = " << sum << endl;
}




#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter a number:";
    cin>>n;
    for(int i=3; i<=n; i+=2){
        cout<<i<<" ";
    }
    return 0;

}





//do-while loop in C++



#include <iostream>
using namespace std;
int main(){
    while(3>5){
        cout<<"hello world";
    }
    do{
        cout<<"hello world";
} while(3>5);
}




#include <iostream>
using namespace std;
int main() {
    int n =10;
    int i = 1;
    do{
        cout<<i<<" ";
        i++;
    } while(i<=n);
    cout << endl;
    return 0;

}





#include <iostream>
using namespace std;
int main() {
    int n = 12;
    bool isPrime = true;
    for(int i=2; i<=n-1; i++){
        isPrime = false;
        break;
    }

    if(isPrime ==true){
        cout<<"the number is prime";
    }
    else{
        cout<<"the number is not prime";
    }
}




#include <iostream>
using namespace std;
int main() {
    int n = 12;
    bool isPrime = true;
    for(int i=2; i*i<=n; i++){
        isPrime = false;
        break;
    }

    if(isPrime ==true){
        cout<<"the number is prime";
    }
    else{
        cout<<"the number is not prime";
    }
}




#include <iostream>
using namespace std;
int main(){
    for(int i=1; i<=5; i++){
    int m= 5;
    for (int i=1; i<=m; i++){
        cout<<"*";
    }
    cout<< endl;
}
    return 0;
}


#include <iostream>
using namespace std;
int main(){
    int n=10;
    for(int i=1; i<=n; i++){
    int m= 10;
    for (int i=1; i<=m; i++){
        cout<<"*";
    }
    cout<< endl;
}
    return 0;
}


//// pattern lines


//#include <iostream>
// using namespace std;
// int main(){
//    int n = 26;
//   for(int i=0; i<n; i++){
//     char ch = 'A';
//     for(int j=0; j<n; j++){
//         cout<<ch<<" ";
//         ch++;                                    //print characters in pattern
//     }
//     cout << endl;
     
// }
//     return 0;
// }




// #include <iostream>
// using namespace std;
// int main(){
//     int n =5;                    
//     int num=3;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){             //print numbers in pattern

//             cout<<num<<" ";
//             num++;
//         }
//         cout << endl;
//     }
// }



// #include <iostream>
// using namespace std;

// int main() {
//     char ch = 'A';
                                                     
//     for(int i = 0; i < 3; i++) {       // rows      print characters in pattern
//         for(int j = 0; j < 3; j++) {   // columns
//             cout << ch << " ";
//             ch++;
//         }
//         cout<< endl;
//     }

//     return 0;
// }




// #include <iostream>
// using namespace std;
// int main(){
//     cout<<"*"<<endl;
//     cout<<"**"<<endl;
//     cout<<"***"<<endl;
//     cout<<"****"<<endl;
// }





// #include <iostream>
// using namespace std;
// int main(){
//     int n=6;                          //print stars in pattern
//     for(int i=0; i<n; i++){
//         for (int j=0; j<i+1; j++){
//             cout<<"*";
//         }
//         cout<< endl;
//     }
// }




// #include <iostream>
// using namespace std;
// int main(){
//     int n=10;                              //print stars in pattern
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     } 
// }




// #include <iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=0; i<n; i++){               //print numbers in pattern
//         for(int j=0; j<i+1; j++){
//             cout<<(i+1)<<" " ;
//         }
//         cout<<endl;
//     } 
// }




// #include <iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=0; i<n; i++){                  //print characters in pattern
//         for(int j=0; j<i+1; j++){
//             cout<<char('A'+i)<<" " ;
//         }
//         cout<<endl;
//     } 
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int n=10;
//         for(int i=0; i<n; i++){
//           for(int j=0; j<=i+1; j++){
//           cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }




 
// #include <iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=0; i<n; i++){
//         for (int j=i+1; j>0; j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;   
//     }
// }
   


#include <iostream>
using namespace std;

int main() {
    int n = 11;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            // Middle finger (vertical)
            if (j == n/2 && i < n-3)

            // Palm (bottom block)
            cout << "* ";
            
            else if (i >= n-3 && j >= n/2 - 3 && j <= n/2 + 3)
                cout << "* ";

            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}


#include <iostream>
using namespace std;

int main(){
    // if else positive or negative checker 
    // int n;
    // cin>> n;
    // if(n>0){
    //     cout << "N is positive and the value of n is : " << n << endl;
    // }

    // else{
    //     cout << "N is negative and the value of n is : " << n << endl;
    // }


    // we can take two inputs with the help of cin 

    // int a , b ;
    // cin >> a >> b;
    // cout << "value of a : " << a   <<endl << "value of b : " << b << endl;

    // this type of cin does not read space , enter and tab so that you can put two values 

    // to read space , enter , tab we usedcin.get 

    // int a ; 
    // a= cin.get(); 

    // cout << "a : " << a <<endl;

// so that it onvert the integer in character and show its ASCII value as well as it will onvert enter and tab 


// Greater b/w two number 

// int a , b ; 
// cout << "Enter the value of a : " << endl;
// cin >> a;
// cout << "Enter the value of b : " <<endl;
// cin >> b;
// if(a>b){
//     cout<< "A is greater than B" << endl;

// }

// if(b>a){
//     cout << "B is greater than A" << endl; 
// }

// if(a==b){
//     cout << "A and B are equal" << endl;
// }

// weather the number is zero +ve and -ve 

// int a ; 
// cout << "Enter the number inside a : " << endl;
// cin >> a ;

// if(a > 0 ){
//     cout << "A is positive" << endl;
// }

// else if(a < 0){
//     cout << "A is negative" << endl;
// }

// else{
//     cout << "A is zero" << endl;
// }


// h/w check weather the cahracter ch is upper/lower/digit

// char ch ;
// cout << "Please enter only one character : " << endl;
// cin>> ch;

// if(isupper(ch)){
//     cout << "The ch is in uppercase and the value is :" << ch << endl;
// }
// else if(islower(ch)){
//     cout << "The ch is in lowercase and the value is :" << ch << endl;

// }

// else if(isdigit(ch)){
//     cout << "The ch is in digit and the value is :" << ch << endl;
// }

// else {
//     cout << "The ch is not uppercase , lowercase and digit" << endl;
// }


// while loop ;

// int i = 1;
// int n ;
// cout << "Enter the value of n " << endl;
// cin >> n;

// while(i<=n){
//     cout << i << " ";
//     i++;
// }


// sum to n 

// int n ;
// int i=1;
// int sum = 0;
// cout << "Enter the Number where upto you find the sum " << endl;
// cin>> n;

// while(i<=n){
//     sum += i;
//     i++;
// }

// cout << "Sum is " << sum << endl;


// sum of all even no.

// int n;
// int i = 2 ;
// int sum = 0 ;
// cout << "Enter the Number where upto you find the sum " << endl;
// cin>> n;
// while(i<=n){
//     if(i%2==0){
//         sum+=i;
//     }
//     i++ ;
// }

// cout << "Sum of all the even number upto  " << n << " is = " << sum << endl;


// *****
// *****
// *****
// *****
// *****

// row and columns are same 

// int n ; 
// cout << "Enter how many row and column you want" << endl;
// cin >> n;
// int i = 1;


// while(i <= n){
   
//         int j = 1;

//     while(j<=n){
//         cout << "*";
//         j++;
//     }
//     cout << endl;
//     i++;
// }



// 1111
// 2222
// 3333
// 4444

int n;
cout << "Enter how many rows and columns you want" << endl;
cin>>n;
int i = 1;

while(i <=n){
    int j =1;
    while(j<=n){
        cout << i ;
        j++;
    }

    
    cout << endl;
    i++;
}



}
#include<bits/stdc++.h>
#include<iostream>
#include <ostream>
using namespace std;

// void print1(int n){

//         for (int i = 0;i<n;i++){
//         for (int j=0;j<n;j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// void print2(int n){

//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout << "* ";
//         }    
//         cout << endl;
//     }
// }

// void print3(int n){

//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout << j+1 << " ";
//         }    
//         cout << endl;
//     }
// }

// void print4(int n){

//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout << i+1 << " ";
//         }    
//         cout << endl;
//     }
// }

// void print5(int n){

//     for(int i=n;i>0;i--){
//         for(int j=0;j<i;j++){
//             cout << "* ";
//         }    
//         cout << endl;
//     }
// }

// void print6(int n){

//     for(int i=n;i>0;i--){
//         for(int j=0;j<i;j++){
//             cout << j+1 << " ";
//         }    
//         cout << endl;
//     }
// }

// void print7(int n){

//     for(int i = n;i>=0;i=i-2){
//         for(int j=1;j<i;j++){ // j=1 liya toh last line mein space se start nahi hota
//             cout << " ";
//         } 
//         for(int l=n;l>=i;l--){
//             cout << "* ";
//         }
//         cout << endl;
//     }

// }

// void print7(int n){

//     for (int i = 0;i<n;i++) {
//         //space
//         for(int j = 0;j<(n-i-1);j++){
//             cout << " ";
//         }
//         //star
//         for(int l=0;l<(2*i+1);l++){
//             cout << "*";
//         }
//         //space
//         for(int k = 0;k<(n-i-1);k++){
//             cout << " ";
//         }
//         cout << endl;
//     }
// }

// void print8(int n){

//     for(int i =0;i<n;i=i+2){
//         for(int j=1;j<=i;j++){
//             cout << " ";
//         }
//         for(int l=n;l>i;l--){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// void print9(int n){

//     for(int i = n;i>=0;i=i-2){
//         for(int j=1;j<i;j++){ // j=1 liya toh last line mein space se start nahi hota
//             cout << " ";
//         } 
//         for(int l=n;l>=i;l--){
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     for(int i =0;i<n;i=i+2){
//         for(int j=1;j<=i;j++){
//             cout << " ";
//         }
//         for(int l=n;l>i;l--){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// void print10(int n){

//     for(int i = 0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     for(int x = n-1;x>0;x--){
//         for(int v=0;v<x;v++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// void print11(int n){
//     int s = 1;
//     for(int i = 0;i<n;i++){
//         if (i%2 == 0) {
//         s = 1;
//         }
//         else {
//         s = 0;
//         }
//         for (int j = 0 ; j<=i;j++){
//             cout << s << " ";
//             s = 1-s;
//        }
//        cout << endl;
//     }        
// }

// void print12(int n){
//     for(int i = 0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout << j+1;
//         }
//         for(int k =1;k<=2*(n-(i+1));k++){
//             cout << "*";
//         }
//         for(int l=i+1;l>=1;l--){
//             cout << l;
//         }
//         cout << endl;
//     }
// }

// void print13(int n){
//     int num = 1;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout << num << " ";
//             num++; // changing value of num variable inside for loop actually changes
//             //  the value of each elemnet of pattern to change the valuee..
//         }
//         cout << endl;
        
//     }
// }

// void print14(int n){

//     for(int i =0;i<n;i++){
//         for (char ch ='A';ch<= 'A'+i;ch++){ // single paranthases on char
//             cout << ch << " ";
//         }
//         cout << endl;
//     }   
// }

// void print15(int n){

//     for(int i=n;i>0;i--){
//         for(char ch = 'A';ch < 'A'+i;ch++){
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }

// void print16(int n){

//     for(char ch = 'A';ch<'A'+ n;ch++){
//         for(char x = 'A'+0;x <= ch;x++){
//             cout << ch << " ";
//         }
//         cout<<endl;
//     }
// }

void print17(int n){
    for (char ch = 'A'+0;ch < 'A' + n;ch++){
        // space
        for(char s = 'A'+0;ch < n-ch-1;ch++){
            cout << " ";
        }
        // alpha
        for(char a = 'A'+0;a < 2*ch +1;a++ ){
            cout << a ;
        }

        // space
    }   
}


int main(){

    int n;
    cin >> n;
    // print1(n);
    // print2(n);
    // print3(n);
    // print4(n);
    // print5(n);
    // print6(n);
    // print14(n);
    // print8(n);
    // print9(n);
    // print10(n);
    print17(n);
    return 0;
}

#include<iostream>
using namespace std; // typing std before every function is annoying hence we write this line then we wont require to do so much efforts
#include<bits/stdc++.h> // includes all the libraries in c plus plus



int main(){

    // std:: cout << "Hello World_1 !!" << "\n" << "Line 2 "<< std::endl ; // can use std::endl instead  of \n but \n is used coz its faster.
    // std:: cout <<"HEllo World_1 !!" << std::endl;

    // cout << "HelloWorld_2 !!"<< "\n" << "Line 2" << endl;
    // cout << "HelloWorld_2 !!" << endl << "LastLine"<< endl;

    // int x,y;

    // cin >> x >> y;
    // cout << "X is: " << x  << "\nY is: "<< y;

    // // int long long long float double 
    // // string and getline

    // string s; // when u give multi word input it will only take 1ast response
    // cout << "\nString\n";
    // cin >> s;
    // cout << s << "\n";

    // string s1,s2;
    // cout << "\n2nd string\n";
    // cin >> s1 >> s2;
    // cout << s1 << " " << s2 << "\n";

    // // use getline to get the complete line under the variable

    // cout << "\ngetline\n";
    // string str;
    // getline(cin,str); // only one line is picked up not second
    // cout << str << "\n";

    // //char - all 256 character in english dictionary
    // char ch ='g';
    // cout << ch << "\n";

    // int age;
    // cout << "Your age: "<< "\n";
    // cin >> age;

    // if(age>=18){

    //     cout << "Adult\n";

    // }

    // else{

    //     cout << "not an adult\n";
    // } // not mandatory to have else statement

    // /*Multi line comment
    // line 1
    // line 2
    // */

    // int marks;
    // cout << "Enter your marks: " << "\n";
    // cin >> marks;

    // if (marks <25){

    //     cout << "F";

    // }
    // if (marks >= 25 && marks < 44){ // && to let both conditions be there

    //     cout <<"E";
    // }
    // else if (marks > 44 && marks <= 49){ // difference in if and else if is that every if is executed and is checked 
    // // whether the condotion is true or false in else if if the condition is true the next if or else if wont be 
    // // exectued to check.

    //     cout << "D";
    // }

    // int day;
    // cout << "day is: ";
    // cin >> day;

    // switch(day) { //switch is conditional statement as well
    //     case 1:
    //         cout << "monday";
    //         break;

    //     case 2:
    //         cout << "tuesday";
    //         break;

    //     case 3:
    //         cout << "wednesday";
    //         break;

    //     case 4:
    //         cout << "thursday";
    //         break;
        
    //     case 5:
    //         cout << "friday";
    //         break;

    //     case 6:
    //         cout << "saturday";
    //         break;

    //     case 7:
    //         cout << "sunday";
    //         break; // break breaks out of all the conditional statements that you have written 
    //     default:
    //         cout << "default"; // if none of the case is executed .. then the program falls back on default
    //         //no need of break coz automatically breaks out
    //         // if break is written here then the program breaks out ... of everything above it .. basically does not run 
                // anything

    // }

    //if one case is triggered every case after that case is triggered ... this is prevented by break


    // int arr[5]; // this array will only take int as a element
    // cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

    // arr[4] += 10;

    // cout << "number: " << arr[4] << "\n"; // array elements are stored in consecutive memory address .. 
    // // first element location cant be gussed

    // int arr[3][5];

    // cout << arr[1][2]; // this will give garbage value

    // string s = "surabhi"; // string stores aevery character in terms of indexes
    // cout << s[4] << endl;

    // int len = s.size();
    // cout << "length" << endl << s[len - 1] << endl;
    // s[len-1] = 'k';
    // cout << s[len-1];

    // for(int i = 1;i<=10;i++){

    //     cout << "Hey There" <<endl;

    // }

    // int i = 1; // initialization needs to take place prior to loop

    // while(i<=10){ // while loop and for loop have similar purpose just the syntax is different () in brackets
    //     // the condition is written and at the very end the execution part is written
    //     cout << "Hey There" <<endl;
    //     i++;
    // }

    // int i =2; // initiation for do while loop
    // do {
    //     cout << "Hey There" <<endl;
    //     i++;
    // }while(i<=2);

    // // difference in do while and while is that .. do while executes the program minimum once even if the condotion is false.

    //void function -- which does not retun anything .. its a void .. and its a non parameter .. wont require a parameter 
    // return 
    return 0;
}
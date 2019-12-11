#include <iostream>
#include <string>
using namespace std;
int main() {

int rows;
int cols;
int countrows;
int countcols;

int icr;
int icc;

cout<<"Enter number of rows: ";
cin>>rows;
cout<<rows<<endl;

cout<<"Enter number of cols: ";
cin>>cols;
cout<<cols<<endl;

countrows = 0;
while (countrows < rows) {
countrows++;

countcols = 0;
while (countcols < cols) {
countcols++;

//set 0 "X first"
if (countrows % 2 == 1) {
if (countcols % 2 == 1) {
if (countcols > 1){
cout<<" ";
}
cout<<"X";
cout<<" ";
cout<<"|";
}
if (countcols % 2 == 0) {
cout<<" ";
cout<<"O";
cout<<" ";
cout<<"|";
}
//
}
//set 1 "O first"
if (countrows %2 == 0) {

if (countcols % 2 == 1) {
if (countcols > 1){
cout<<" ";
}
cout<<"O";
cout<<" ";
cout<<"|";
}
if (countcols % 2 == 0) {
cout<<" ";
cout<<"X";
cout<<" ";
cout<<"|";
}

//

}
}

cout<<endl;
}

cout<<"INVERTED: "<<endl;

icr = 0;
while (icr < cols) { //column entry as rows for inversion
icr++;

icc = 0;
while (icc < rows) { //row entry for columns
icc++;

//set 0 "X first"
if (icr % 2 == 1) {
if (icc % 2 == 1) {
if (icc > 1) {
cout<<" ";
}
cout<<"X";
cout<<" ";
cout<<"|";
}
if (icc % 2 == 0) {
cout<<" ";
cout<<"O";
cout<<" ";
cout<<"|";
}
///
}
//set 1 "O first"
if (icr % 2 == 0) {
if (icc % 2 == 1) {
if (icc > 1) {
cout<<" ";
}
cout<<"O";
cout<<" ";
cout<<"|";
}
if (icc % 2 == 0) {
cout<<" ";
cout<<"X";
cout<<" ";
cout<<"|";
}
//
}
}
cout<<endl;
}
return 0;

}


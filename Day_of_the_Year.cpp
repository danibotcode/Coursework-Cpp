#include <iostream>
#include <string>
using namespace std;
int getDayOfMonth(int y) {

y = 1+(y % 365);
return y;

}

int getMonth (int day) {

if ((day >= 0) && (day <= 31)) {
return 1;
}
if ((day >=32) && (day <= 58)) {
return 2;
}
if ((day >=60) && (day <= 90)) {
return 3;
}
if ((day >=91) && (day <= 120)) {
return 4;
}
if ((day >=121) && (day <=151)) {
return 5;
}
if ((day >= 152) && (day <=181)) {
return 6;
}
if ((day >= 182) && (day <=212)) {
return 7;
}
if ((day >= 213) && (day <=243)) {
return 8;
}
if ((day >= 244) && (day <=273)) {
return 9;
}
if ((day >= 274) && (day <=304)) {
return 10;
}
if ((day >= 305) && (day <= 334)) {
return 11;
}
if ((day >= 335) && (day <= 366)) {
return 12;
}

}
int getMonthDate (int day) {

if ((day >= 0) && (day <= 31)) {
return day - 0; //jan
}
if (( day>=32) && (day <= 58)) {
return day - 31; //feb
}
if ((day >=60) && (day <= 90)) {
return day - 59; //mar
}
if ((day >=91) && (day <= 120)) {
return day - 90; //apr
}
if ((day >=121) && (day <= 151)) {
return day - 120; //may
}
if ((day >= 152) && (day <= 181)) {
return day - 151; //jun
}
if ((day >= 182) && (day <= 212)) {
return day - 181; //jul
}
if ((day >= 213) && (day <= 243)) {
return day - 212; //aug
}
if ((day >= 244) && (day <= 273)) {
return day - 243; //sep
}
if ((day >= 274) && (day <= 304)) {
return day - 273; //oct
}
if ((day >= 305) && (day <= 334)) {
return day - 304; //nov
}
if ((day >= 335) && (day <= 366)) {
return day - 334; //dec
}
}
 

string getMonthName (int x) {

if (x == 1) {
return "jan";
}
if (x == 2) {
return "feb";
}
if (x == 3) {
return "mar";
}
if (x == 4) {
return "apr";
}
if (x == 5) {
return "may";
}
if (x == 6) {
return "jun";
}
if (x == 7) {
return "jul";
}
if (x == 8) {
return "aug";
}
if (x == 9) {
return "sep";
}
if (x == 10) {
return "oct";
}
if (x == 11) {
return "nov";
}
if (x == 12) {
return "dec";
}
}
 
int main() {

int year = 0;
int getDate = 1;
int day = 31;
string loop = "yes";

while (loop == "yes") {
cout << "Please enter a day of the year (0 to exit): ";
cin >> day;

cout<<day<<endl;
if (day == 0) {
loop = "no";
}

else {

//YOU ARE HERE

if (day > 365) {
year = day / 365;
if (year == 1) {
cout<< year << " year"<<endl;
}
else if (year > 1) {
cout<<year<<" years"<<endl;
}
//if (day > 365) && (day / 365 >= 2) {
// cout << (day / 365) << " years"<<endl;
// }
day = day % 365;
if (day == 0) {
day = 365;
}
//cout<<getMonthName(getMonth(day));

}

cout<<getMonthName(getMonth(day))<<" "<<getMonthDate(getDayOfMonth(day-1))<<endl;

/*
day = day - 1;
cout<<getMonthName(getMonth(day));
getDayOfMonth(day);//get day of year

//cout<<" "<<getMonthDate(getDayOfMonth(day))<<endl;

if (getMonth(day) == 1) { //January IF statement fix
getDate = getDayOfMonth(day) - 0;
if (getDate == 0) {
getDate = 1;
}
cout<<" "<<getDate<<endl;
}
// if (getMonth(day == 12) {
// getDate = getDayOfMonth(day) - 334;

*/
}

}

cout<<"Thanks for playing!";

return 0;

}


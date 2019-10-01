//Allyson Moore
//CMPS 1044-102
//October 1st, 2018
//Project 1
//This project will take an integer input and convert it to years and days

#include <iostream>
#include <fstream>

using namespace std;

int main(){
  int count; //to track loop iterations
  int min, totdays, days, years; //variables for use in while loop

  count = 1;

  //for printing to a file
  ofstream outfile;
  outfile.open("output.txt");
  
  outfile << "Allyson Moore \n";
  
  while(count <= 11){
    cout << "Please enter the number of minutes: \n";
    cin >> min;

    totdays = (min/60)/24; //60 minutes per hour, 24 hours per days
    //any excess minutes(totdays remainder) will not be counted as another day

    years = totdays/365; //calculates years
    days = totdays % 365; //mod operator gives the excess days 

    outfile << min << " minutes is approximately " << years << " years and " << days << " days. \n";

    count = count + 1;//iterates through loop
  }

  return 0;
}

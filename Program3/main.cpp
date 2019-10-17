/*Allyson Moore
*CMPS1044-102
*October 17, 2019
*Program 3
*This program reads client data from a file, processes data *into usable variables, and then runs through a series of *if/else statements to return client specific output
*/
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main() {
  //input and output variables
  string name;
  double time;
  int hours, min, length;
  //opens input and output files
  ifstream infile;
  ofstream outfile;
  infile.open("input.txt");
  outfile.open("output.txt");
  //sets significant digits to 2 for whole program
  outfile << fixed << setprecision(2);
  
  //prints student name to outfile
  outfile << "Allyson Moore \n\n";

  //Data header
  outfile << left << "Name        ";
  outfile << "Start Time       "; 
  outfile << "Length          ";
  outfile << "Charge \n";
  outfile << "-----------------------------------------------------\n";

  //runs loop until end of file flag
  while(!infile.eof()){
    //inputs name, time and length from input file, repeats until end of file
    infile >> name >> time >> length;

    //separates the double number from input file into hours and minutes
    hours = int(time);
    min = int((time - hours)*100);
    
    //sets name to the left and allots 14 spaces for the name
    outfile << left << setw(14) << name;
    
    /*formats hours and min portions for
    *appropriate output, places '0' infront of
    *numbers less that 10
    */
    if(hours < 10){
      outfile << '0' << hours << ':';
    }
    else{
      outfile << hours << ':';
    }

    if(min < 10){
      outfile << '0' << min << right << setw(14) << length;
    }
    else{
      outfile << min << right << setw(14) << length;
    }
    //if/else statements to test for errors before
    //calculating length
    if(hours > 23 || min > 59){
      outfile << "               ERROR" << '\n';
    }
    else{
      //if statements to calculate proper charge 
      if(hours < 7){
        outfile << "            $" << setw(7) << length * 0.12 << '\n';
        
      }
      else if(hours <= 19){
        outfile << "            $" << setw(7)<< length * 0.55 << '\n';
      }
      else{
        outfile << "            $" << setw(7)<< length * 0.35 << '\n';
      }

    }

  }
  //necessary return value for main
  return 0;
}

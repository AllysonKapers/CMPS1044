// Allyson Moore
// Computer Science I -Halverson
// Lab 4- Formatting Output
// 9-27-19
// This program formats the output into 
// structured tables

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
  ofstream outfile;
  outfile.open("output.txt");
  outfile << "Allyson Moore \n";
  outfile << "Computer Science I -Halverson \n";
  outfile << "Lab 4- Formatting Output \n";
  outfile << "This program formats the output into structured tables \n";
  outfile << '\n';


  int A = 5, B = 15, C = 25;
  
  outfile << setw(12) << "A" <<  setw(9) << "B" << setw(9) << "C"<<'\n';
  outfile <<"******************************" << '\n';
  outfile << left << "X1" << right << setw(10) << A  <<setw(9) << B << setw(9) << C << '\n';
  outfile << left << "X10" << right << setw(9) << A*10 << setw(9) << B*10 << setw(9) << C*10 << '\n';
  outfile << left << "X100" << right << setw(8) << A * 100 << setw(9) << B * 100 << setw(9) << C * 100 << '\n';



  double TotalColl = 26572.89087, Sales = 25068.7993, CountyTax = 501.76, StateTax = 1002.75212, TotalTax = 150.12890;

  outfile << '\n';
  outfile << "MONTH: March 2018" << '\n';
  outfile << "----------------------------------" << '\n';
  outfile << setw(15) << left << "Total Collected" << right << setw(9) << "$" << setw(10) << fixed << setprecision(2) << TotalColl << '\n';

  outfile << setw(15) << left << "Sales" << right <<setw(9) << "$" << setw(10) << fixed << setprecision(2) << Sales << '\n';

  outfile << setw(15) << left << "County Tax" << right << setw(9) << "$" << setw(10) << fixed << setprecision(2) << CountyTax << '\n';

  outfile << setw(15) << left << "State Tax" << right << setw(9) << "$" << setw(10) << fixed << setprecision(2) << StateTax << '\n';

  outfile << setw(15) << left << "Total Tax" << right << setw(9) << "$" << setw(10) << fixed << setprecision(2) << TotalTax << '\n'; 

}

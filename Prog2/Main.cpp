//Allyson Moore
//CMPS1044-102
//October 8th, 2019
//Progect 2
/*This program reads employee information in from a file to calculate gross pay, taxes, and net pay
*/
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {

  //proper variable declarations
  int IDnumber, count;
  double Hours, HourlyPay, GrossPay, NetPay;
  double incomeTaxRate = 0.15;
  double FICArate = 0.0825;
  double savingsRate = 0.05;
  double retirementRate = 0.05;
  double health = 50.00;
  double incomeTax, FICA, savings, retirement;
  count = 0;
  
  ifstream infile;
  ofstream outfile;

  //opens correct files
  infile.open("input.txt");
  outfile.open("output.txt");

  //Prints student name to file
  outfile << "Student Name: Allyson Moore \n";
  outfile << '\n';

  //limits output decimal places to 2
  outfile << fixed << setprecision(2);
  
  
  while(count < 10){
    //inputs file data to variables
    infile >> IDnumber >> Hours >> HourlyPay;

    /*the following are the equations 
    necessary for the program
    */
    GrossPay = Hours * HourlyPay;
    incomeTax = GrossPay * incomeTaxRate;
    FICA = GrossPay * FICArate;
    savings = GrossPay * savingsRate;
    retirement = GrossPay * retirementRate;
    NetPay = GrossPay - incomeTax - FICA - savings - retirement - health;

    /*following print to a file formatted uniformally
    */
    outfile << "Employee: " << IDnumber << '\n';
    outfile << "Gross Pay           $ " << setw(9) << GrossPay <<'\n';
    outfile << "Federal Income Tax  $ " << setw(9) << incomeTax <<'\n';
    outfile << "FICA                $ " << setw(9)<< FICA <<'\n';
    outfile << "Payroll Savings     $ " << setw(9)<< savings <<'\n';
    outfile << "Retirement          $ " << setw(9)<< retirement<<'\n';
    outfile << "Health Insurance    $ " << setw(9)<< health <<'\n';
    outfile << '\n';
    outfile << "Net Pay             $ " << setw(9) << NetPay << '\n';
    outfile << '\n' << '\n';

    //increments through the loop
    count++;
  }

  //closes the files
  infile.close();
  outfile.close();

  return 0;
}

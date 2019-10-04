//Allyson Moore
//Halverson - CMPS1044-102  
//October 4th, 2019
//Lab 5 - If-Else Statements
/*This program runs thtough a series of if-else statements to determine the correct discount for the purchase
*/ 
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {  
  //controls the loop
  int count = 1;
  //not assigned values because they'll change each iteration of the loop
  double price, discount;

  //opens file to store output
  ofstream outfile;
  outfile.open("output.txt");
  
  outfile << "Allyson Moore \n";
  //Sets decimal places to control formatting
  outfile << fixed << setprecision(2);

  //Loop iterates 6 times to handle the 6 test numbers
  while(count <=6){
    //prompts the user to input the price and 
    //stores the user input in variable price
    cout << "Please enter the price: \n";
    cin >> price;
    //tests price against discount restraints
    //else if statements aren't required to test to make sure price
    //is greater than the minimum restraint because they're 
    //all connected
    if(price < 100){
        discount = 0.1;
    }
    else if(price < 250){
      discount = 0.2;
    }
    else if(price < 500){
      discount = 0.3;
    }
    else if(price < 1000){
      discount = 0.4;
    }
    else{
      discount = 0.5;
    }
    //formats output 
    //(doesn't use left/right and setw because Prof. Halverson 
    // said it's not necessary in all cases)
    outfile << "Total Purchase    $ " << setw(7) << price << '\n';
    outfile << "Discount          $ " << setw(7) << price * discount << '\n'; 
    outfile << "---------------------------\n";
    outfile << "New Price         $ " << setw(7) << price * (1-discount) << '\n';
    outfile << '\n';

    //iterates through the loop
    count++;
  } 

  return 0;
}

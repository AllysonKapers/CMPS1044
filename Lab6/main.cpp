/*Allyson Moore
*Lab 6- Switch Statements
*1044-102 - Halverson
*October 11, 2019
*This program uses a switch statement to test different
*inputs against 4 different cases. If the input does
*match any of the cases, the default statement is
*returned to the user. The program prompts the user for
*input each iteration of the loop and the input variable,
*selection, is updated through each iteration of the loop
*/
#include <iostream>
#include <fstream>

using namespace std;

int main() {
  //opens the output file for printing
  ofstream outfile;
  outfile.open("output.txt");

  //count is used to iterate throughout the loop
  //must be outside the loop or the loop will never 
  //reach it's stopping point
  int count = 1;

  //Variable without a value because the variable is
  //dynamic and may change with every iteration of the
  //loop
  int selection;

  //prints header to output file
  outfile << "Allyson Moore \n";
  outfile << "Lab 6- Switch Statements\n";
  outfile << "1044-102 - Halverson \n";
  outfile << "October 11, 2019 \n\n";



  while(count <= 5){

    cout << "Which formula do you want to see? (Please input 1, 2, 3, or 4) \n\n";
    cout << "1. Area of a circle\n";
    cout << "2. Area of a rectangle\n";
    cout << "3. Volume of a cylinder\n";
    cout << "4. None of them!\n";

    cin >> selection;


    switch(selection)
    { //tests if selection == 1
      case 1:
        outfile << "Pi times radius squared (pi * (r^2))\n";
        break;
      //tests if selection == 2
      case 2:
        outfile << "Length times width (l * w)\n";
        break;
      //tests if selection == 3
      case 3:
        outfile << "Pi times radius squared times height (pi * (r^2) * h)\n";
        break;
      //tests if selection == 4
      case 4:
        outfile << "Well okay then... Goodbye!\n";
        break;
      //runs if selection isn't a valid answer
      default:
        outfile << "Not good with numbers, eh?\n";
        break;
    }

    //increments count to control loop iterations
    count++;
  }


  return 0;
}

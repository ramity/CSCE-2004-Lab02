// Include statements
#include <iostream>
#include <math.h>
using namespace std;

// Main function
int main ()
{
  // Input values
  double n1, n2, n3, n4;

  cout << "Enter four numbers:\n";

  cin >> n1 >> n2 >> n3 >> n4;

  // Calculate mean of 4 values
  double mean = (n1 + n2 + n3 + n4) / 4;

  // Calculate variance of 4 values
  double variance = (pow((n1 - mean),2) * pow((n2 - mean),2) * pow((n3 - mean),2) * pow((n4 - mean),2)) / 4;

  // Print the output
  cout << "mean = " << mean << endl;
  cout << "variance = " << variance << endl;
  return 0;
}


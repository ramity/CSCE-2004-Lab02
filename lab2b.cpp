// Include statements
#include <iostream>
using namespace std;

// Main function
int main ()
{
  // Constant declaration 
  double x = 100;

  // Get user input
  double y = 0;
  cout << "Enter value for y: " << endl;
  cin >> y;

  // Perform arithmetic operations
  double sum = x + y;
  double difference = x - y;
  double quotient = x / y;
  double remainder = int(x) % int(y);
  double product = x * y;

  // Print results 
  cout << "The sum (x + y) is: " << sum << endl;
  cout << "The difference (x - y) is: " << difference << endl;
  cout << "The quotient (x / y) is: " << quotient << endl;
  cout << "The remainder (x % y) is: " << remainder << endl;
  cout << "The product (x * y) is: " << product << endl;

  return 0;
}


/**
 * Example C++ program that prints the Fibonacci numbers.
 */

// Include standard C++ library header files.
// Similar to python's "import module".
#include <string>
#include <vector>
#include <iostream>

// Use the "namespace" std. Allows you to use standard C++
// objects and functions, without specifying what library they come from.
// Ex: cout << "I'm printing" << endl; instead of std::cout << "I'm printing" << std::endl;
// Ex: vector<int> numbers; instead of std::vector<int> numbers;
// Similar to python's "import module as ..."
using namespace std;

// The main function is what the compiled code executes.
int main(int argc, char** argv) {

  // Take the first command line argument and convert it to an integer.
  int upperIndex = stoi(argv[1]); // "string to integer"

  // upperIndex needs to be greater than 1.
  if (upperIndex <= 1) {
    cout << "Input must be an integer greater than 1." << endl;
    return -1;
  }

  // A vector (array) of integers, that we will fill with the Fibonacci numbers.
  vector<int> fibonacciNumbers;

  // First numbers in sequence are 0,1.
  fibonacciNumbers.push_back(0);
  fibonacciNumbers.push_back(1);

  // Compute the Fibonacci numbers and store them in the vector.
  for (unsigned int index=2; index < upperIndex; index++) {
    int prevNum1 = fibonacciNumbers[index-2];
    int prevNum2 = fibonacciNumbers[index-1];
    fibonacciNumbers.push_back(prevNum1 + prevNum2);
  }

  // Print the numbers.
  for (int indVec=0; indVec < fibonacciNumbers.size(); indVec++)
    cout << "Fibonacci number " << indVec+1 << " is " << fibonacciNumbers[indVec] << endl;

  return 0;
}

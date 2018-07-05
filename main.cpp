#include "header.hpp"

int main(){
  string input;
  cout << "Enter a number: ";
  cin >> input;
  string totallyUnintentional = gay::bar(input);
  cout << totallyUnintentional << endl;
  return 0;
}

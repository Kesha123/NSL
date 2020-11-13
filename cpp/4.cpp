#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
  int sum = 0;
  for (int i = 2; i <= 2020; i++){
    if (2021%i!=0){
      sum += i;
    }
  }


  std::cout << sum;
  return 0;
}

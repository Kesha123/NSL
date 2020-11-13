#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
  int min = 5019;
  int cnt = 0;
  for (int i=5019;i>=-2031; i-=7){
    if (i%2!=0 && i%3!=0){
      cnt += i;
      if (i <= min){
        min = i;
      }
    }
  }
  std::cout << min << ' ' << cnt;
  return 0;
}

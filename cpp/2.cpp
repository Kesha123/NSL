#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
  int max = 5883;
  int cnt = 0;
  for (int i = 5883; i <= 15906; i++) {
    if (((i%9==0) || (i%23==0)) && (i%13!=0) && (i%18!=0) && (i%19!=0) && (i%22!=0)){
      cnt++;
      if (i >= max){
        max = i;
      }
    }
  }


  std::cout << cnt << ' ' << max;
  return 0;
}

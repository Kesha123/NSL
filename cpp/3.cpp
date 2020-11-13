#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
  int max = 1;
  int cnt = 0;
  for (int i = 13; i <=2021; i+=13) {
    if (i%10!=9){
      cnt++;
      if (i >= max){
        max = i;
      }
    }
  }

  std::cout << cnt << ' ' << max;
  return 0;
}

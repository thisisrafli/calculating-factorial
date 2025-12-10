// CALCULATING FACTORIAL N

#include <iostream> 
using namespace std;

int count(int n) {
   int total = 1;
   for (int i = 1; i <= n; i++) {
      total *= i;
   }
   return total;
}

int main() {
   cout << count(5) << endl;
   return 0;
}
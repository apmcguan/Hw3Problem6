#include <iostream>
#include <cmath>
using namespace std;


int main() {
  int H, M ;
  cin >> H >> M ;
 
  H--;
  M+= 15;

  if (H < 0) {
    H+= 24;
    
  }
  if (M>=60) {
    M -= 60;
    H++;
    
  }
  
  
  
  
  

    
    
  }
 
    
  
}
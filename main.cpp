#include <iostream>
#include <cmath>
using namespace std;


int main() {
 /* int H, M ;
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
  cout<< H << " "<< M << endl; 
  */
  int H, M ;
  int AH, AM;
  cin >> H >> M ;

  if ( M < 45)
  {
    AM = M + 60 - 45;
    AH = H - 1;
    
  }
  else //min greater than equal to 45
  {
    AH = H;
    AM = M - 45;
  }
  if (AH == -1)
  {
    AH = 23;
    }
  cout<<AH<<" "<< AM;
  
  }


 
    
  

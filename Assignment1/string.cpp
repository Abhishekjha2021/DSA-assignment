#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
  string A;
  string B;
  cin>>A;
  cin>>B;
  
  cout<<A.size()<<" "<<B.size()<<endl;
  cout<<A+B<<endl;
  string x;
  x[0]=A[0];
  A[0]=B[0];
  B[0]=x[0];
  cout<<A<<" "<<B;
  
  
    return 0;
}

#include<iostream>
using namespace std;
int main(){
  /*
      E 
      D E 
      C D E 
      B C D E 
      A B C D E 
  */
  
 cout<<"enter the number"<<endl;
  int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int j=1;
    while(j<=i){
      cout<<(char)('A'+n-i+j-1)<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}

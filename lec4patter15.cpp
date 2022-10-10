#include<iostream>
using namespace std;
int main(){
  /*
      a b c d 
      b c d e 
      c d e f 
      d e f g
  */
  
 cout<<"enter the number"<<endl;
  int n;
  cin>>n;
  int i=1;
  int count=0;
  while(i<=n){
    int j=1;
    while(j<=n){
      cout<<(char)(96+i+j-1)<<" ";
      j++;
      count++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}
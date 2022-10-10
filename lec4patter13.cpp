#include<iostream>
using namespace std;
int main(){
  /*
      a b c d e 
      a b c d e 
      a b c d e 
      a b c d e 
      a b c d e
  */
  
 cout<<"enter the number"<<endl;
  int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int j=1;
    while(j<=n){
      cout<<(char)('a'+j-1)<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}
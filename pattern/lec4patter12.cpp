#include<iostream>
using namespace std;
int main(){
  /*
      a a a a a a 
      b b b b b b 
      c c c c c c 
      d d d d d d 
      e e e e e e 
      f f f f f f
  */
  
 cout<<"enter the number"<<endl;
  int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int j=1;
    while(j<=n){
      cout<<(char)('a'+i-1)<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}

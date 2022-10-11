#include<iostream>
using namespace std;
int main(){
  /*
      A 
      B C 
      D E F 
      G H I J 
      K L M N O
  */
  
 cout<<"enter the number"<<endl;
  int n;
  cin>>n;
  int i=1;
  int count=0;
  while(i<=n){
    int j=1;
    while(j<=i){
      cout<<(char)('A'+count)<<" ";
      j++;
      count++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}

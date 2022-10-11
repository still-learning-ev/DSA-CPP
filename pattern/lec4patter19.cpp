#include<iostream>
using namespace std;
int main(){
  /*
      A 
      B C 
      C D E 
      D E F G 
      E F G H I 
  */
  
 cout<<"enter the number"<<endl;
  int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int j=1;
    while(j<=i){
      cout<<(char)('A'+i+j-2)<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}

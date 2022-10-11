#include<iostream>
using namespace std;
int main(){
  /*
      a b c d e 
      f g h i j 
      k l m n o 
      p q r s t 
      u v w x y
  */
  
 cout<<"enter the number"<<endl;
  int n;
  cin>>n;
  int i=1;
  int count=0;
  while(i<=n){
    int j=1;
    while(j<=n){
      cout<<(char)('a'+count)<<" ";
      j++;
      count++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}

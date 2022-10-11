#include<iostream>
using namespace std;
int main(){
  /*
            1 
          2 3 
        4 5 6 
      7 8 9 10 
  */
  
 cout<<"enter the number"<<endl;
  int n;
  cin>>n;
  int i=1,count=1;
  while(i<=n){
    int j=1;
    while(j<=n){
      if(j<=n-i)
        cout<<"  ";
      else{
        cout<<count<<" ";
        count++;
      }
        
      j++;
    }

    cout<<endl;
    i++;
  }
  return 0;
}

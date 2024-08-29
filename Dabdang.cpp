#include<iostream>
using namespace std;
int main(){
    int row =1 ;
    int n;
    cout<<"Enter the Number"<<endl;
    cin>>n;
    while(row<=n){
      int col = 1;
      while(col<=n-row+1){
        cout<<col<<" ";
        col = col + 1;
        } col = 1;
        while(col<row){
            cout<<"*"<<" ";
            col = col + 1;

        } col = 1;
        while(col<row){
            cout<<"*"<<" ";
            col = col + 1;

        } col = n-row+1;
      while(col>=1){
        cout<<col<<" ";
        col = col - 1;
    }
    cout<<endl;
    row = row + 1;
    
    }

}

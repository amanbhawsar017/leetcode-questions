#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cin>>arr[row][col];  //row wise input lega
        }
    }

    cout<< "the 2D array is : "<<endl;

    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cout << arr[row][col]<< " ";
        }
        cout<<endl;
    }
}

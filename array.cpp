#include<iostream>
#include <climits>
using namespace std;
int main(){
    int nums[]={10,-5,32,41,56};
    int size=5,indexmax,indexmin;

    
int smallest = INT_MAX; //INT_MAX
int largest = INT_MIN; //INT_MIN

    for(int i=0;i<size;i++){
        if(nums[i]<smallest){    // int smallest= min(nums[i],smallest)
            smallest=nums[i];
            indexmin=i;         
        }
    }
    for(int i=0;i<size;i++){
        if(nums[i]>largest){
            largest=nums[i];
            indexmax=i;         // int largest max(nums[i],largest)
        }
    }
    cout<<"smallest number = "<<smallest<<endl;
    cout<<"index number = "<<indexmin<<endl;
    cout<<"largest number = "<<largest<<endl;
    cout<<"index number = "<<indexmax<<endl;
    return 0;
}
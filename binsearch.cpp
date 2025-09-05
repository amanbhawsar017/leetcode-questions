#include<iostream>
using namespace std;

//self written code of binary search 

int binarysearch(int nums[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid = start + (start-end)/2;
    while(start<=end)
    {
        if(key==nums[mid])
        {
          return mid;
        }
        else if(key<nums[mid])
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        mid = start + (start-end)/2;

    }
    return -1;
}

int main()
{
    int nums1[]={1,2,3,4,5};
    int nums2[]={1,2,3,4,5,6};
    int size1=5;
    int size2=6;
    int key1=5;
    int key2=7;
    cout<<"index of key"<<" ";
   cout<< binarysearch(nums2,size2,key2);
}
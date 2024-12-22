#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& arr,int low,int high,int x){
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] == x)
            return mid;
        else if(arr[mid] < x)
            low = mid+1;
        else    
            high = mid-1;
    }
    return -1;
}

int main(){
    vector<int> arr = { 2, 3, 4, 10, 40};
    int x = 10;
    int len = arr.size();
    int res = search(arr,0,len-1,x);
    if(res == -1) 
        cout << "Element not found";
    else
        cout << "Element found at index "<<res;
    return 0;
}

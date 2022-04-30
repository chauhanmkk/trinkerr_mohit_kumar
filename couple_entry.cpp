#include<iostream>
#include<algorithm>
#include<climits>
#include<unordered_map>

using namespace std;

int possibleWays(int arr[],int n){

    //map to store num and freq

    unordered_map<int,int> mp;
    int ans = 0;
    for(int i=0;i<n;i++){
        //check value exist in map or not
        if(mp.count(arr[i])){
            ans += mp[arr[i]];
            mp[arr[i]]++;
        }
        else{
            mp[arr[i]] = 1;
        }
    }
    return ans;
}

int main(){
    int arr[] = {1,2,1,2,1};
    int n =5;
    cout << possibleWays(arr,n);
}
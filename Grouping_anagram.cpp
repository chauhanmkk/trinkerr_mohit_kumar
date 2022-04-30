#include<iostream>
#include<algorithm>
#include<climits>
#include<string>
#include<unordered_map>
#include<vector>

using namespace std;
// 
 vector<vector<string> > anagram(vector<string> str,int n){
    vector<string> temp = str;
    unordered_map<string,int> mp;
    vector<vector<string> > ans;
  

    for(int i = 0; i<n;i++){
        // cout << str[i] << " ";
        sort(temp[i].begin(),temp[i].end());
        // cout << str[i] << " ";
    }


    for(int i = 0;i<n;i++){
        if(!mp.count(temp[i])){
            mp[temp[i]]  = i;
        }
        else{
            vector<string> temp2;
            temp2.push_back(str[mp[temp[i]]]);
            temp2.push_back(str[i]);
            ans.push_back(temp2);
        }
    }

    return ans;

}

int main(){
    int n;
    cin >> n;
    vector<string> s;
    for(int i =0 ;i<n;i++){
        string a;
        cin >> a;
        s.push_back(a);
    }
    vector<vector<string> > res = anagram(s,n);
}
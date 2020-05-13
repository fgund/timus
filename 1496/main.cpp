#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;

int main(){
    int N;
    unordered_map<string,int> accounts;
    
    cin >> N;
    string tmp;
    for(int i = 0;i < N;++i){
        cin >> tmp;
        accounts[tmp]++;
    }
    
    for(const auto& pair : accounts){
     if(pair.second > 1)
        cout<< pair.first << endl;
    }
    
    return 0;
}
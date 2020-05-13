#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(){
    int N;
    char first_char;
    vector <string> cont;
    
    cin >> N;
    string tmp;
    cont.reserve(N);
    for(int i = 0;i < N;++i){
        cin >> tmp;
        cont.emplace_back(tmp);
    }
    cin >> first_char;
    
    for(const auto& item : cont){
        if(item[0] == first_char)
            cout<< item << endl;
    }
    
    return 0;
}
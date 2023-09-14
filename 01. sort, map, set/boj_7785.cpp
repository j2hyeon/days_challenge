// set
#include <iostream>
#include <set>

using namespace std;

int main(){
    //입력
    int n;
    string name, state;
    set<string> ss;
    cin >>n;

    //연산
    for(int i=0;i<n;i++){
        cin >> name >> state;
        
        if(state == "enter"){ //입장 시 
            ss.insert(name);
        }
        else{  //퇴근 시 
            ss.erase(name);
        }
    }

    //출력
    for(auto iter=ss.rbegin();iter!=ss.rend();iter++){
        cout << *iter << '\n'; //endl-> 시간초과 '\n'-> 성공 
    }
    return 0;
}
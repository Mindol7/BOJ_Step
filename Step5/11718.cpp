#include <iostream>
#include <string>
using namespace std;

// 공백 포함, 여러 줄 문자열 입력받는 문제
// getline(char, line) 함수 이용
// cin.eof()로 입력 끝내기 (Mac/Linux -> Ctrl+D, Windows -> Ctrl+Z)

int main(){
    char * my_string = new char[104];
    while(true){    
        cin.getline(my_string, 104);
        if(cin.eof()){
            break;
        }
        cout<<my_string<<endl;
    }

    delete []my_string;
    return 0;
}
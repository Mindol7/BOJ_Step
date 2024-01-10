#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

// 진법을 10진법으로 바꿔주는 프로그램
// B : 진법, N : 숫자
// ex) ZZZZZ 36 -> 36진법으로 표현된 ZZZZZ를 10진법으로 출력

// 문제에서 배운점 -> cctype을 통해 알파벳인지를 확인하는 법을 배움
//                -> pow 함수는 부동소수점 연산을 진행하기 때문에 진법 문제는 pow를 안사용하는게 좋음 
class Convert{
    private:
        char * base_;
        int notation_, temp = 0;
        unsigned int result = 0;
        char tok;
    public:
        Convert(char * base, int notation):notation_(notation){
            base_ = new char[strlen(base)+1];
            strcpy(base_, base);
        }

        int Convert_(){
            for(int i = 0; i<strlen(base_); i++){
                tok = base_[i]; // 가져온 문자가 알파벳이면 아스키코드를 이용해 숫자로 바꾸고, 숫자면 stoi를 통해 정수로 바꿔줌
                if(isalpha(tok)){
                    temp = tok - 0;
                    temp -= 55; // 적절한 숫자로 바꿔줌
                    result = result * notation_ + temp;
                }
                else{
                    temp = tok - 0;
                    temp -= 48;
                    result = result * notation_ + temp;
                }
            }
            return result;
        }

        ~Convert(){
            delete []base_;
        }
};

int main(){
    int notation;
    char * base = new char[50];
    cin>>base>>notation;
    Convert convert(base, notation);

    cout<<convert.Convert_()<<endl;

    delete []base;
    return 0;
}
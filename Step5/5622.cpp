#include <iostream>
#include <cstring>
using namespace std;

// 숫자 1 -> 2초, 한칸 증가할때마다 1초씩 추가적으로 증가
// 단어 주어졌을 때 총 걸리는 시간 구하기

class Dial{
    private:
        int default_time;
        int total_time;
        char * alphabet;
        char * word;
    public:
        Dial(char * a, char * w):default_time(2), total_time(0){
            alphabet = new char[strlen(a)+1];
            strcpy(alphabet, a);
            word = new char[strlen(w)+1];
            strcpy(word, w);
        }

        int cal_time(){
            char token;
            // 아스키 코드 범위 65 ~ 90
            for(int i = 0; i<strlen(word); i++){
                token = word[i];
                switch(token){
                    case 'A':
                    case 'B':
                    case 'C':
                        total_time += default_time + 1;
                        break;
                    case 'D':
                    case 'E':
                    case 'F':
                        total_time += default_time + 2;
                        break;
                    case 'G':
                    case 'H':
                    case 'I':
                        total_time += default_time + 3;
                        break;
                    case 'J':
                    case 'K':
                    case 'L':
                        total_time += default_time + 4;
                        break;
                    case 'M':
                    case 'N':
                    case 'O':
                        total_time += default_time + 5;
                        break;
                    case 'P':
                    case 'Q':
                    case 'R':
                    case 'S':
                        total_time += default_time + 6;
                        break;
                    case 'T':
                    case 'U':
                    case 'V':
                        total_time += default_time + 7;
                        break;
                    case 'W':
                    case 'X':
                    case 'Y':
                    case 'Z':
                        total_time += default_time + 8;
                        break;
                }
            }
            return total_time;
        }

        ~Dial(){
            delete []alphabet;
            delete []word;
        }
};

int main(){
    // 알파벳 세트 만들기
    char * alpha_set = new char[26];
    char * my_word = new char[17];
    for(int i = 0; i<26; i++){
        alpha_set[i] = 65 + i;
    }

    cin>>my_word;
    Dial dial(alpha_set, my_word);
    cout<<dial.cal_time()<<endl;
    
    delete []alpha_set;
    delete []my_word;
    return 0;
}
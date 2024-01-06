#include <iostream>
#include <cstring>
using namespace std;

class GroupWord{
    private:
        char * word;
        char tok;
        bool flag;
        int count = 0, set;
    public:
        GroupWord(){
            cin>>set;
        }

        int CheckGroupWord(){
            for(int i = 0; i<set; i++){
                word = new char[102];
                cin>>word;
                flag = true;
                for(int j = 0; j<strlen(word); j++){
                    for(int k = 0; k<j; k++){
                        if(j>=1){
                            if(word[j-1] != word[j] && word[k] == word[j]){
                                flag = false; // 이 부분을 해줘야함, flag가 false로 바뀌는 순간 그룹단어 아니라고 판정
                                break;        // 만약 true가 계속 유지된다면 그룹 단어 !!
                            }
                        }
                    }
                }
                if(flag){
                    count++;
                }
            }
            return count;
        }

        ~GroupWord(){
            delete word;
        }
};

int main(){
    GroupWord groupword;
    cout<<groupword.CheckGroupWord()<<endl;
    return 0;
}
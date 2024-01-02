#include <iostream>
#include <cstring>
using namespace std;

// 가장 많이 사용되는 단어를 출력하는 문제 (대문자로 출력)
// 반복문을 통해 검사하는 작업 필요


int main(){
    char * my_word = new char[1000025];
    cin>>my_word;
    int word_len = strlen(my_word);
    int cnt = 0;
    int * word_cnt = new int[26];
    int idx = 0;
    for(int i = 0; i<word_len; i++){
        int n = my_word[i];
        // n-65, n-97 을 함으로써 알파벳 순서대로 배열에 저장되게 함
        if(n < 97){
            word_cnt[n-65]++;
        }
        else{
            word_cnt[n-97]++;
        }
    }
    // 최대 최소 비교하는 부분 필요
    int temp = word_cnt[0];
    for(int i = 0; i<26; i++){
        if(temp < word_cnt[i]){
            temp = word_cnt[i];
            idx = i;
        } 
    }

    // 최대 빈도가 2개 이상되면 ? 출력
    for(int i = 0; i<26; i++){
        if(temp == word_cnt[i]){
            cnt++;
            if(cnt >= 2){
                cout<<"?"<<endl;
                return 0;
            }
        }
    }

    // 지정 인덱스에 65를 더함으로써 알파벳 순서에 대문자로 바꿔서 출력
    cout<<(char)(idx+65)<<endl;

    delete []my_word;
    delete []word_cnt;
    return 0;
}
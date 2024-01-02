#include <iostream>
#include <cstring>
using namespace std;

// 앞으로 읽고 거꾸로 읽은게 똑같은 단어인지 판단하는 프로그램
// 단어가 홀수인지 짝수인지 판단
// 소문자만 받으므로 대문자인지를 검증하는 부분 필요

int main(){
    char * my_word = new char[200];
    cin>>my_word;
    int word_len = strlen(my_word);
    int cnt = 0;
    
    for(int i = 0; i<word_len; i++){
        if(my_word[i] == my_word[word_len - 1 - i]){
            cnt++;
        }
    }

    if(cnt == word_len){
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
    }

    delete my_word;
    return 0;
}
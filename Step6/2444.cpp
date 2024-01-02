#include <iostream>
using namespace std;

// 별 출력 하는 문제
// 수식 -> 2n-1
// 중앙에서 퍼지고 좁혀지는 느낌 느낌

int main(){
    int my_line;
    cin>>my_line;
    int total_line = 2*my_line-1;

    for(int i = 0; i<my_line;i++){
        for(int k = 0; k<my_line-1-i; k++){
            cout<<" ";
        }
        for(int j = 0; j<2*i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i = my_line-1; i>0;i--){
        for(int k = 0; k<my_line - i; k++){
            cout<<" ";
        }
        for(int j = 0; j<2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
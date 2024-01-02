#include <iostream>
using namespace std;

// 갯수를 맞춰주는 프로그램
// 입력 -> 현재 얼마만큼 있는지 각 갯수 입력
// 출력 = 기준 - 입력 으로 결과 출력

int main(){
    int chess_set[6] = {1, 1, 2, 2, 2, 8};
    int * my_chess_set = new int[6];
    int * result_chess_set = new int[6];
    int tmp = 0;

    for(int i = 0; i<6; i++){
        cin>>my_chess_set[i];
    }

    // 연산 진행

    for(int i = 0; i<6; i++){
        tmp = chess_set[i] - my_chess_set[i];
        result_chess_set[i] = tmp;
    }

    // 결과 출력

    for(int i = 0; i<6; i++){
        cout<<result_chess_set[i]<<" ";
    }

    delete my_chess_set;
    delete result_chess_set;
    
    return 0;
}
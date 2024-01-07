#include <iostream>
#include <string>
using namespace std;

// 전공 평점을 계산해주는 프로그램
// 입력 -> 과목명, 학점, 성적 (2차원 배열)

float Cal_Grade(string ** sub_info){
    float sum_credit = 0.0, sum_cg = 0.0, credit = 0.0, grade = 0.0, result = 0.0;
    string tok;

    for(int i = 0; i<20; i++){
        for(int j = 0; j<3; j++){
            if(j == 1 && sub_info[i][j+1] != "P"){
                sum_credit += stof(sub_info[i][1]); // 학점 누적
                tok = sub_info[i][2];
                
                if(tok == "A+"){
                    grade = 4.5;
                    credit = stof(sub_info[i][1]);
                    sum_cg += grade * credit;
                }
                else if(tok == "A0"){
                    grade = 4.0;
                    credit = stof(sub_info[i][1]);
                    sum_cg += grade * credit;
                }
                else if(tok == "B+"){
                    grade = 3.5;
                    credit = stof(sub_info[i][1]);
                    sum_cg += grade * credit;
                }
                else if(tok == "B0"){
                    grade = 3.0;
                    credit = stof(sub_info[i][1]);
                    sum_cg += grade * credit;
                }
                else if(tok == "C+"){
                    grade = 2.5;
                    credit = stof(sub_info[i][1]);
                    sum_cg += grade * credit;
                }
                else if(tok == "C0"){
                    grade = 2.0;
                    credit = stof(sub_info[i][1]);
                    sum_cg += grade * credit;
                }
                else if(tok == "D+"){
                    grade = 1.5;
                    credit = stof(sub_info[i][1]);
                    sum_cg += grade * credit;
                }
                else if(tok == "D0"){
                    grade = 1.0;
                    credit = stof(sub_info[i][1]);
                    sum_cg += grade * credit;
                }
                else{
                    grade = 0.0;
                    credit = stof(sub_info[i][1]);
                    sum_cg += grade * credit;
                }
            }
        }
    }
    result = (sum_cg) / sum_credit;
    return result;
}

int main(){
    string ** subject_pptr = new string*[20];
    // 초기화
    for(int i = 0; i<20; i++){
        subject_pptr[i] = new string[3];
        // 입력 받는 부분
        for(int j = 0; j<3; j++){
            cin>>subject_pptr[i][j];
        }
    }

    // 전공평점 = (학점 * 성적)의 합 / 학점의 총합
    float result = Cal_Grade(subject_pptr);

    cout<<result<<endl;
    return 0;
}
#include <iostream>
#include <cstring>
using namespace std;

// 행렬을 초기화한 후, 위에서 아래로 읽는 문제
// 위에서 아래로 읽는 방향을 잘 코딩하면 될 듯
// 어떻게 입력받을까 생각 -> 띄어쓰기 안하고 어떻게 각각을 입력받을까

class Matrix{
    private:
        char ** matrix;
        int row = 5;
    public:
        Matrix(){
            matrix = new char*[row];
        }

        void Init_Matrix(){
            for(int i = 0; i<row; i++){
                matrix[i] = new char[16]; // 요소 하나하나 입력받는게 아닌 한 row에서 입력받기
                cin>>matrix[i];
            }
        }

        void Show_Matrix(){
            for(int i = 0; i<15; ++i){
                for(int j = 0; j<row; j++){
                    if(matrix[j][i] != '\0'){
                     cout<<matrix[j][i]; // column은 유지시키고 row만 변하도록 함   
                    }                    
                }
            }
            cout<<endl;
        }

        ~Matrix(){
            for(int i = 0; i<row; i++){
                delete []matrix[i];
            }
            delete[] matrix;
        }
};

int main(){
    Matrix * matrix = new Matrix();
    matrix->Init_Matrix();
    matrix->Show_Matrix();

    delete matrix;
    return 0;
}
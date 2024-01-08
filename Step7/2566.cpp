#include <iostream>
using namespace std;

// 행렬에서 최댓값을 찾고, 위치를 출력하는 문제

class Matrix{
    private:
        int ** matrix;
        int row_, column_, temp = 0, idx_r = 0, idx_c = 0;
    public:
        Matrix():row_(9), column_(9){
            matrix = new int*[row_];
        }

        void Init_Matrix(){
            for(int i = 0; i<row_; i++){
                matrix[i] = new int[column_];
                for(int j = 0; j<column_; j++){
                    cin>>matrix[i][j];
                }
            }
        }

        void Find_Max(){
            for(int i = 0; i<row_; i++){
                for(int j = 0; j<column_; j++){
                    if(temp <= matrix[i][j]){
                        temp = matrix[i][j];
                        idx_r = i+1; idx_c = j+1;
                    }
                }
            }
        }

        void Show_Max(){
            cout<<temp<<endl;
            cout<<idx_r<<" "<<idx_c<<endl;
        }

        ~Matrix(){
            for(int i = 0; i<row_; i++){
                delete []matrix[i];
            }
            delete []matrix;
        }
};

int main(){
    Matrix * matrix = new Matrix();
    matrix->Init_Matrix();
    matrix->Find_Max();
    matrix->Show_Max();

    delete matrix;
    return 0;
}
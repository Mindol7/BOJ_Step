#include <iostream>
using namespace std;

// 행렬 덧셈 문제

class Matrix{
    private:
        int ** matrix_1;
        int ** matrix_2;
        int ** result_matrix;
        int row_, column_;

    public:
        Matrix(int a, int b):row_(a), column_(b){
            matrix_1 = new int*[row_];
            matrix_2 = new int*[row_];
            result_matrix = new int*[row_];
        }
        void Init_Matrix(){
            for(int i = 0; i < row_; i++){
                matrix_1[i] = new int[column_];
                matrix_2[i] = new int[column_];
                result_matrix[i] = new int[column_];
                for(int j = 0; j<column_; j++){
                    cin>>matrix_1[i][j];
                }
            }
            for(int i = 0; i < row_; i++){
                for(int k = 0; k<column_; k++){
                    cin>>matrix_2[i][k];
                } 
            }
        }

        void Add_Matrix(){
            for(int i = 0; i < row_; i++){
                for(int j = 0; j < column_; j++){
                    result_matrix[i][j] = matrix_1[i][j] + matrix_2[i][j];
                }
            }
        }

        void ShowMatrix(){
            for(int i = 0; i < row_; i++){
                for(int j = 0; j < column_; j++){
                    cout<<result_matrix[i][j]<<" ";
                }
                cout<<endl;
            }
        }

        ~Matrix(){
            for(int i = 0; i < row_; i++){
                delete []matrix_1[i];
                delete []matrix_2[i];
                delete []result_matrix[i];
            }

            delete []matrix_1;
            delete []matrix_2;
            delete []result_matrix;
        }
};

int main(){
    int numRows, numColumns;
    cin>>numRows>>numColumns;

    Matrix * matrix = new Matrix(numRows, numColumns);
    matrix->Init_Matrix();
    matrix->Add_Matrix();
    matrix->ShowMatrix();

    delete matrix;
    return 0;
}
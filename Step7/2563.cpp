#include <iostream>
using namespace std;

class Matrix{
    private:
        int ** matrix, set;
        int result;
    public:
        Matrix(int s):set(s), result(0){
            matrix = new int*[100];
        }

        void Init_Matrix(){
            for(int i = 0; i<100; i++){
                matrix[i] = new int[100];
                for(int j = 0; j<100; j++){
                    matrix[i][j] = 0;
                }
            }
        }

        void Cal_Area(){
            int x, y;
            cin>>x>>y; 
            for(int i = y; i <y+10; i++){ // 계산이 아닌, 색칠한다는 개념으로 접근
                for(int j = x; j< x+10; j++){
                    if(matrix[i][j] != 1){
                        matrix[i][j] = 1;
                        result++;
                    }
                }
            }
        }

        void Show_Matrix() const{
            cout<<result<<endl;
        }

        ~Matrix(){
            for(int i = 0; i<100; i++){
                delete []matrix[i];
            }

            delete []matrix;
        }
};

int main(){
    int set;
    cin>>set;
    Matrix * matrix = new Matrix(set);
    matrix->Init_Matrix();
    while(set--){
        matrix->Cal_Area();
    }
    matrix->Show_Matrix();

    delete matrix;
    return 0;
}
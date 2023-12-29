#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class ReverseNum{
    private:
        int * num1;
        int * num2;
        int real_num1;
        int real_num2;
    public:
        ReverseNum(char * n1, char * n2):real_num1(0), real_num2(0){
            num1 = new int[strlen(n1)+1];
            num2 = new int[strlen(n2)+1];
            
            for(int i = 0; i<3; i++){
                num1[i] = n1[2-i] - '0';
                num2[i] = n2[2-i] - '0';
            }
        }

        int CompareTwoNumbers(){
            for(int i = 0; i<3; i++){
                if(i == 0){
                    real_num1 += num1[i] * 100;
                    real_num2 += num2[i] * 100;
                }
                else if(i == 1){
                    real_num1 += num1[i] * 10;
                    real_num2 += num2[i] * 10;
                }
                else{
                    real_num1 += num1[i];
                    real_num2 += num2[i]; 
                }
            }

            if(real_num1 > real_num2){
                return real_num1;
            }else{
                return real_num2;
            }
        }
        
};

int main(){
    char * s1 = new char[3];
    char * s2 = new char[3];
    cin>>s1>>s2;

    ReverseNum r(s1, s2);
    cout<<r.CompareTwoNumbers()<<endl;
    return 0;
}
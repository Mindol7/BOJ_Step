#include <iostream>
#include <cstring>
using namespace std;

class CountWord{
    private:
        char * my_str;
        int count;
    public:
        CountWord(char * s):count(0){
            my_str = new char[strlen(s)+1];
            strcpy(my_str, s);
        }

        int Count(){
            if(my_str[0]==' ' && my_str[1] != '\0'){
                count = 1; 
            }
            else if(my_str[0]!=' '){
                count = 1; 
            }

            for(int i = 0; i<strlen(my_str)+1; i++){
                if(isspace(my_str[i]) && my_str[i+1] != '\0'){
                    count++;
                    if(i == 0){   
                        count--;
                    }
                }
            }
            return count;
        }
        ~CountWord(){
            delete []my_str;
        }
};

int main(){
    char * str = new char[1000005];
    cin.getline(str, 1000005, '\n'); // getline 함수에 대한 정보를 배움
    CountWord c(str);
    cout<<c.Count()<<endl;

    delete []str;
    return 0;
}
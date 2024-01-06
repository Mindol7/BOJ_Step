#include <iostream>
#include <cstring>
using namespace std;

class Croatia{
    private:
        char * word;
        char tok;
        int count = 0;
    public:
        Croatia(char * str){
            word = new char[strlen(str)];
            strcpy(word, str);
        }

        int Count_Word(){
            for(int i = 0; i < strlen(word); i++){
                tok = word[i];
                switch(tok){
                    case 'c':
                        if(word[i+1] == '=' || word[i+1] == '-'){
                            count++;
                            i += 1;
                        }
                        else{
                            count++;
                        }
                        break;

                    case 'd':
                        if(word[i+1] == 'z' && word[i+2] == '='){
                            count++;
                            i += 2;
                            break;
                        }
                        else if(word[i+1] == '-'){
                            count++;
                            i += 1;
                            break;
                        }
                        else{
                            count++;
                            break;
                        }

                    case 'l':
                    case 'n':
                        if(word[i+1] == 'j'){
                            count++;
                            i += 1;
                        }
                        else{
                            count++;
                        }
                        break;

                    case 's':
                    case 'z':
                        if(word[i+1] == '='){
                            count++;
                            i += 1;
                        }
                        else{
                            count++;
                        }
                        break;
                    default:
                        count++;
                        break;
                }
            }
            return count;
        }
        ~Croatia(){
            delete word;
        }
};

int main(){
    char * my_word = new char[102];
    cin>>my_word;
    
    Croatia croatia(my_word);
    cout<<croatia.Count_Word()<<endl;
    delete my_word;
    return 0;
}
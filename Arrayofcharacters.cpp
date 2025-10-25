#include <iostream>
using namespace std;
int main(){
    char message1[5] {'h','e','l','l','o'};
    cout << "message1 is : " ;
    for(char i{0}; i<5; ++i){
        cout << message1[i] ;
    } 




    //changing the characters in array
    cout << endl;
    message1[2] = 'p';

    cout << "message1 is : " ;
    for(char i{0}; i<5; ++i){
        cout << message1[i] ;
    }
    cout << endl;
    
    cout << message1 << endl;



    //if the character array is null terminated, its called as C-string
    char message2[] {'k','h','u','u','t'};
    cout << message2 << endl;  


    
    
    
    // C-string
    char shit[] {'q','w','e','r','t','y','u','i','o','p','\0'};
    cout << "message : ";
    for(char f : shit){
        cout << f;
    } 
    cout << endl;



    cout << shit << endl;
    cout << "sizeofshit : " << sizeof(shit) << endl;



    char shit2[] {'q','w','e','r','t','y','u','i','o','p'};
    cout << shit2 << endl;
    cout << "sizeofshit2 : " << sizeof(shit2) << endl;






    //string literals
    char message3[] {"hello world, how are you doing"};
    cout << "message3 : " << message3 << endl;
    cout << "sizeofmessage3 : " << sizeof(message3) << endl;








    //we cannot print direct numbers like characters
    int numbers[] {1, 2, 3, 4, 5};
    cout << "numbers : " << numbers << endl;
    


}
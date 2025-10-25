#include <iostream>
using namespace std;
int main(){

    int scores[] {1,2,3,4,5,6,7,8,9,10};
    
    cout << "size of scores : " << sizeof(scores) << " bytes" << endl;
    cout << "size of scores[0] : " << sizeof(scores[0]) << " bytes" << endl;

    size_t count = sizeof(scores) / sizeof(scores[0]); // this method is for version lower than c++17

    for(size_t i{0}; i<count; ++i){
        cout << "scores [" << i << "] : " << scores[i] << endl;
    }



    //simplier and easier method(range based for loop)
    cout << endl;
    for (size_t i : scores){
        cout << "value : " << i << endl; 
    }

}
 
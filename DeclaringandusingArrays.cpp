#include <iostream>
#include <array>
using namespace std;
int main() {

    int scores[10];

    //no entry in array

    cout << endl;
    cout << "reading out scores values" << endl;
    cout << "scores[0]: " << scores[0] << endl;
    cout << "scores[1]: " << scores[1] << endl;
    cout << "scores[2]: " << scores[2] << endl;
    cout << "scores[3]: " << scores[3] << endl;
    cout << "scores[4]: " << scores[4] << endl;
    cout << "scores[5]: " << scores[5] << endl;
    cout << "scores[6]: " << scores[6] << endl;
    cout << "scores[7]: " << scores[7] << endl;
    cout << "scores[8]: " << scores[8] << endl;
    cout << "scores[9]: " << scores[9] << endl;
    cout << endl;







    for(size_t i{0} ; i<10 ; ++i){
        cout << "scores [" << i << "] : "<< scores[i] << endl;
    }



//entering some datas in the array

cout << endl;
scores[0] = 12;
scores[1] = 13;
scores[2] = 14;
scores[3];
scores[4];
scores[5];
scores[6];
scores[7];
scores[8];
scores[9];


cout << "reading out scores values" << endl;
cout << "scores[0]: " << scores[0] << endl;
cout << "scores[1]: " << scores[1] << endl;
cout << "scores[2]: " << scores[2] << endl;
cout << "scores[3]: " << scores[3] << endl;
cout << "scores[4]: " << scores[4] << endl;
cout << "scores[5]: " << scores[5] << endl;
cout << "scores[6]: " << scores[6] << endl;
cout << "scores[7]: " << scores[7] << endl;
cout << "scores[8]: " << scores[8] << endl;
cout << "scores[9]: " << scores[9] << endl;
cout << endl;


for (int i{0}; i<10; ++i){
    cout << "scores[" << i << "] : " <<scores[i] << endl;
}




//entering complete data in array
 for (size_t i{0}; i<10; ++i){
    scores[i] = i*20;
 }

 for (size_t i{0}; i<10; ++i){
    cout << "scores[" << i << "] : " <<scores[i] << endl;
 }




 //declare and initialize at the same time

float salaries[10] {12.7, 29.7, 57.9, 21.5, 18.4, 44.6, 49.6, 11.1, 44, 54.2};

size_t i{0};
while(i<10){
    cout << "salaries[" << i << "] : " << salaries[i] << endl;
    ++i;
}




//if we do not initialize all the elements
int families[5] {12,45,78}; 
for(size_t i{0}; i<5; ++i){
cout << "families[" << i <<"] : " << families[i] << endl;
}




//Omit the size of array at declaration
cout << endl;
int class_sizes[] {10,23,54,76,23,97,34,745,467,};
 for(auto value : class_sizes){
    cout << "value : " << value << endl;
 }




//sum up scores array, store result in sum

cout << endl;
int sum_scores[] {2,4,7,54,8,3,9};
int sum{0};

for(int elements : sum_scores){
  sum += elements;
}
cout << "score sum : " << sum << endl;

}
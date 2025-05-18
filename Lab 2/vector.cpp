#include <iostream>
#include <vector>

using namespace std;

void printMemVec(const vector<int>& vec, int SIZE){
    printf("Vector - Each int is worth %lu byte\n", sizeof(vec[0]));
    for (int i =0 ; i < SIZE; i++){
        printf("Value :%i at Memory Location: %p\n", vec[i], &vec[i]);
    }
}

void incVecBy10(vector<int>& vec, int SIZE){
    for (int i= 0; i < SIZE; i++){
        vec[i] +=10;
    }
}

int main(){
    const int SIZE = 5;
    vector<int> vec;
    for(int i = 0; i<5; i++){
        vec.push_back(i + 100);

    }

    
    printf("Before------\n");
    printMemVec(vec, SIZE);
    incVecBy10(vec, SIZE);
    printf("After------\n");
    printMemVec(vec, SIZE);

}
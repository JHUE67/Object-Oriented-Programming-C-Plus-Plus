#include <iostream>
#include <vector>

using namespace std;

void printMemVec(const vector<int>& vec, int size){
    printf("Vector - Each int is worth %lu byte\n", sizeof(vec[0]));
    for (int i =0 ; i < size; i++){
        printf("Value :%i at Memory Location: %p\n", vec[i], &vec[i]);
    }
}

void incVecBy10(vector<int>& vec, int size){
    for (int i= 0; i < size; i++){
        vec[i] +=10;
    }
}

int main(){
    int SIZE = 5;
    vector<int> vec;
    for(int i = 0; i<5; i++){
        vec.push_back(i + 100);

    }

    
    printf("Before Increment------\n");
    printMemVec(vec, SIZE);
    incVecBy10(vec, SIZE);
    printf("After Increment------\n");
    printMemVec(vec, SIZE);
    vec.pop_back();
    SIZE--;
    printf("After Pop-------\n");
    printMemVec(vec, SIZE);
    vec.push_back(102);
    vec.push_back(103);
    SIZE+=2;
    printf("After Push------\n");
    printMemVec(vec, SIZE);

}
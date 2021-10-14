#include <stdio.h>
#define MAX_ARRAY_SIZE 128

void fill_array(int* arr, int size, char* str){
    int i = 0;
    while(str[i] != '\0'){
        arr[str[i]] += 1;
        i += 1;
    }
}

void print_arr(int* arr,int size){
    int i = 0;
    while(i < size){
        if(arr[i] > 0){
            printf(" %c : %d\n", i, arr[i]);
        }
            i += 1;
    }
}
int main(int ac, char ** av){
    int i = 1;
    int array[MAX_ARRAY_SIZE] = {0};
    while(i < ac){
        fill_array(&array[0], MAX_ARRAY_SIZE, av[i]);
        i += 1;
    }
    print_arr(&array[0], MAX_ARRAY_SIZE);
    return 0;

}
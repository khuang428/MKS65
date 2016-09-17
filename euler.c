#include <stdio.h>

int mult35(){
  int x = 999,sum = 0;
  while(x){
    if(x % 3 == 0 || x % 5 == 0){
      sum += x;
    }
    x--;
  }
  return sum;
}

int evenfib(){
  int sum = 0,first = 1,second = 2;
  while(second < 4000000){
    if(first % 2 == 0){
      sum += first;
    }
    if(second % 2 == 0){
      sum += second;
    }
    int new = first + second;
    first = second;
    second = new;
  }
  return sum;
}

void main(){
  printf("1)%d\n",mult35());
  printf("2)%d\n",evenfib());
}

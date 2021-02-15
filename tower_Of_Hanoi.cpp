 #include<bits/stdc++.h>
 using namespace std;
void Toh(int n,char beg,char aux,char endd){
    if(n>=1){
        Toh(n-1,beg,endd,aux);
        printf("%d disk move %c to %c \n",n,beg,endd);
        Toh(n-1,aux,beg,endd);
    }
}

int main(){
  int disk;
  printf("Enter number of disk: \n");
  scanf("%d",&disk);
  Toh(disk,'A','B','C');
}

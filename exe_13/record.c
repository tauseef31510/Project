#include<stdio.h>
#include<string.h>

#define MAX 5
typedef struct 
{
    char keyword[10];
    int other_data;
}Record;

int main(){
    Record obj[MAX];
    int i,j,tmp_I;
    char tmp_C[MAX];
    for(i=0; i<MAX; i++){
        fgets(Obj[i].keyword,10,stdin);
        scanf("%d",&Obj[i].other_data);
    }
    for(i=0; i<MAX-1;i++){
        for(j=0; j<MAX-i-1; i++){
            if(Obj[j].keyword[0]>Obj[j+1].keyword[0]){
                strcpy(tmp_C,Obj[j].keyword);
                strcpy(Obj[j].keyword,Obj[j+1].keyword);
                strcpy(Obj[j+1].keyword,tmp_C);
                tmp_I=Obj[j].other_data;
                Obj[j].other_data=Obj[j+1].other_data;
                Obj[j+1].other_data=tmp_I;
            }
        }
    }
    for (i = 0; i < MAX; i++)
    {
        printf("Keyword: %s Other_data: %d\n",Obj[i].keyword,Obj[i].other_data);
    }
    
}

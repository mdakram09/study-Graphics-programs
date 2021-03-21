#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
void reflection(int[3][2], double[3][3], int , int);
int main(){
    int point[3][2], i, j, m, n;
    double tra[3][3];
    int gdriver = DETECT, gmode;
    printf("\nEnter the number of rows and columns in point[][]: ");
    scanf("%d %d", &m, &n);
    printf("\nEnter the points in point[][]: ");
    for(i = 0; i < m; i++){    // points
        for(j = 0; j < n; j++){
            scanf("%d", &point[i][j]);
        }
    }
    if(m != 3)
        printf("Matrix with entered orders can't be multiplied\n");
    else{
        printf("\nEnter the elements of tra[][]: ");
        for(i = 0; i < 3; i++){   // transformation matrix
            for(j = 0; j < 3; j++){
                scanf("%lf", &tra[i][j]);
            }
        }
    }
    initgraph(&gdriver, &gmode, " ");
    rectangle(point[0][0], point[1][0], point[0][1], point[1][1]);
    delay(1000);
    reflection(point, tra, 3, 2);
    closegraph();
}
void reflection(int point[3][2], double tra[3][3], int m, int n){
    double NewPoint[3][3];
    int i, j, k;
    double sum = 0.0;

    for(i = 0; i < 3; i++){
        for(j = 0; j < n; j++){
            for(k = 0; k<m; k++){
                sum = sum + tra[i][k] * point[k][j];
            }
            NewPoint[i][j] = sum;
            sum = 0;
        }
    }

    for(i = 0; i < m; i++){
        for(j = 0; j < 2; j++){
            printf("%lf\t", NewPoint[i][j]);
        }
        printf("\n");
    }
    setcolor(YELLOW);
    rectangle(NewPoint[0][0], NewPoint[1][0], NewPoint[0][1], NewPoint[1][1]);
    getch();
}

#include <stdio.h>
#include <stdlib.h> //malloc関数、free関数の使用に必要なため追加
#include <math.h>   // sqrt関数の使用に必要なため追加

double myRoot(double x) // x の平方根を返す関数。x >= 0 ではないときエラー表示を行い exit(1) とする。
{                       // 返す値がdouble型であるため、int型からdouble型に修正する。
    double y;           // sqrt関数で返ってくる値はdouble型であるため修正
    if (x < 0)          //(x <= 0)だと0が含まれるため修正
    {
        printf("エラー：0以上の値ではありません in myRoot()\n");
        exit(1);
    }
    y = sqrt(x);
    return y;
}

int main(void)
{
    int i = 0;                                          // 変数iを初期化
    double *x = (double *)malloc(sizeof(double) * 101); // 0~100のため101回mallocする必要がある

    while (i <= 100)
    {
        x[i] = myRoot((double)i);
        i++;
    }

    // これ以降は確認用コードなので、修正しないこと
    printf("x[0]=%f\n", x[0]);
    printf("x[1]=%f\n", x[1]);
    printf("x[2]=%f\n", x[2]);
    printf("x[3]=%f\n", x[3]);
    printf("x[4]=%f\n", x[4]);
    printf("x[99]=%f\n", x[99]);
    printf("x[100]=%f\n", x[100]);
    // myRoot()の動作確認
    printf("myRoot(0.0 / 0.0)=%f\n", myRoot(0.0 / 0.0));

    free(x);
    return 0;
}

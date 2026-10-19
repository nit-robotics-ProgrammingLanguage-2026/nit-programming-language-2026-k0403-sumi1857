#include <stdio.h>

int main(void) {
    int x;
    double result;
    
    printf("整数を入力してください:");
    scanf("%d",&x);
    
    result = x * 1.08;
    
    printf("%d\n",(int)result);/* 課題0403: 入力されたintのデータを1.08倍した結果を整数(int)として表示するプログラムを書け．intへの変換には「キャスト演算(前回スライドを参照のこと)」を使用せよ */
    
    return 0;
}

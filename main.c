#include <stdio.h>

int main(void) {
     /* 課題0403: 入力されたintのデータを1.08倍した結果を整数(int)として表示するプログラムを書け．intへの変換には「キャスト演算(前回スライドを参照のこと)」を使用せよ */
   
    int i;
    int result;
    
    scanf("%d",&i);
    
    result =(int)( i * 1.08);
    
    printf("%d\n",(int)result);
    
    return 0;
}

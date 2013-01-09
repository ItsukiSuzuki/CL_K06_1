/* 作成者：1T4(7)　鈴木斎幹		*/
/* 課題名：課題06_1 2012.11.19	*/

#include <stdio.h>
int sigma(int x);		/* プロトタイプ宣言 */

void main(void) {		/* main関数 */
	int input, answer;
	printf("合計を求めたい数を入力してください：");
	scanf("%d", &input);
	answer = sigma(input);
	printf("1から%dまでの合計は%dです\n", input, answer);
}

int sigma(int x) {
	int i;			/* 変数i(添え字用)を宣言 */
	int sum = 0;		/* sumを初期化 */

	if (x > 0) {		/* 1以上のときは加算処理をして合計を求める */
		for (i = 1; i <= x; i ++) {
		sum += i;		/* 加算処理 */
		}
	}
	return sum;			/* 合計をmain関数に返却する*/
}
/* 作成者：1T4(7)　鈴木斎幹		*/
/* 課題名：課題06_1 2012.11.19	*/

#include <stdio.h>
int sigma(int x);		/* プロトタイプ宣言 */

void main(void) {		/* main関数 */
	int x, ans;
	printf("合計を求めたい数を入力してください：");
	scanf("%d", &x);
	ans = sigma(x);
	printf("1から%dまでの合計は%dです\n", x, ans);
}

int sigma(int x) {
	int i;
	int sum = 0;		/* sumを初期化 */

	if (x > 0) {		/* 1以上のときは加算処理をして合計を求める */
		for (i = 1; i <= x; i ++) {
		sum += i;
		}
	}
	return sum;			/* 合計をmain関数に返却する*/
}
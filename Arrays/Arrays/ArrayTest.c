#include <stdio.h>
#define MAX_LEN 4

int main()
{
	//배열 요소 저장 및 삭제
	int scores[MAX_LEN]; //배열의 크기는 상수만 사용!
	int idxofscores = 0; //배열의 인덱스를 저장할 변수

	//요소 추가
	if (idxofscores < MAX_LEN)
	scores[idxofscores++] = 80; //scores[0]
	if (idxofscores < MAX_LEN)
	scores[idxofscores++] = 70; //scores[1]
	if (idxofscores < MAX_LEN)
	scores[idxofscores++] = 95; //scores[2]
	if (idxofscores < MAX_LEN)
	scores[idxofscores++] = 80; //scores[3]
	if (idxofscores < MAX_LEN)   //if문으로 오류 처리
	scores[idxofscores++] = 100; //scores[4] //범위 초과로 오류 발생

	//요소 삭제
	if (idxofscores > 0)idxofscores--;
	if (idxofscores > 0)idxofscores--;
	if (idxofscores > 0)idxofscores--;
	if (idxofscores > 0)idxofscores--;
	if (idxofscores > 0)idxofscores--;
	if (idxofscores > 0)idxofscores--;
	


	//전체 출력
	//삭제 시 오류 처리
	printf("현재 배열 상태\n");
	if (idxofscores == 0) {
		printf("(비어있음)\n");
	}
	printf("남은 요소 수: %d\n", idxofscores);
	for (int i = 0; i < idxofscores;i++)
	{
		printf("%d\n", scores[i]);
	}














	return 0;
}
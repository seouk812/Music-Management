#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
#include <conio.h>

int ONELENGTH_CHARACTER(char * String)
{
	char TEMP[30];
	int i, NUM = 0;
	strcpy(TEMP, String);
	for (i = 0; i < strlen(TEMP); i++)
	{
		if (((TEMP[i] >= 97 || TEMP[i] <= 122) || (TEMP[i] >= 65 || TEMP[i] <= 90)) || (TEMP[i] == ' '))
			NUM++;
	}
	return NUM;
}

void List(char **TITLE, char **ARTIST, char **ALBUM_TT, char **LYRICS, int NUM)
{
	printf(" ┌────────────────────────────────────┐\n");
	printf(" │ NUMBER │       TITLE       │     ARTIST     │       ALBUM TITLE     │\n");
	printf(" ├────────────────────────────────────┤\n");
	for (int temp = 0; temp < NUM; temp++)
	{
		char temp_s[30];
		int n;
		printf(" │    %d    \b", temp + 1); //번호 표시
		if (temp >= 9) printf("\b");
		if (temp >= 99) printf("\b");

		if (strlen(TITLE[temp]) < 18)			//타이틀 표시
		{
			strcpy(temp_s, TITLE[temp]);
			for (n = strlen(temp_s); n < 19; n++)
			{
				temp_s[n] = ' ';
			}
			temp_s[n]='\0';
			printf("│%s", temp_s);
		}
		else
		{
			if ((ONELENGTH_CHARACTER(TITLE[temp]) % 2) == 0) //1바이트 글자수가 짝수인 경우
			{
				strncpy(temp_s, TITLE[temp], 16);
				*(temp_s + 16) = '\0';
				printf("│%s …", temp_s);
			}
			else									//1바이트 글자수가 홀수인 경우
			{
				strncpy(temp_s, TITLE[temp], 17);
				*(temp_s + 17) = '\0';
				printf("│%s…", temp_s);
			}
		}

		if (strlen(ARTIST[temp]) < 15)			//아티스트 표시
		{
			strcpy(temp_s, ARTIST[temp]);
			for (n = strlen(temp_s); n < 16; n++)
			{
				temp_s[n] = ' ';
			}
			temp_s[n] = '\0';
			printf("│%s", temp_s);
		}
		else
		{
			if ((ONELENGTH_CHARACTER(ARTIST[temp]) % 2) == 0) //1바이트 글자수가 짝수인 경우
			{
				strncpy(temp_s, ARTIST[temp], 14);
				*(temp_s + 14) = '\0';
				printf("│%s…", temp_s);
			}
			else									//1바이트 글자수가 홀수인 경우
			{
				strncpy(temp_s, ARTIST[temp], 13);
				*(temp_s + 13) = '\0';
				printf("│%s …", temp_s);
			}
		}

		if (strlen(ALBUM_TT[temp]) < 22)			//앨범타이틀 표시
		{
			strcpy(temp_s, ALBUM_TT[temp]);
			for (n = strlen(temp_s); n < 23; n++)
			{
				temp_s[n] = ' ';
			}
			temp_s[n] = '\0';
			printf("│%s", temp_s);
		}
		else
		{
			if ((ONELENGTH_CHARACTER(ALBUM_TT[temp]) % 2) == 0) //1바이트 글자수가 짝수인 경우
			{
				strncpy(temp_s, ALBUM_TT[temp], 20);
				*(temp_s + 20) = '\0';
				printf("│%s …", temp_s);
			}
			else									//1바이트 글자수가 홀수인 경우
			{
				strncpy(temp_s, ALBUM_TT[temp], 21);
				*(temp_s + 21) = '\0';
				printf("│%s…", temp_s);
			}
		}

		printf("│\n");
	}
	printf(" └────────────────────────────────────┘\n");
}

void List_SRCH(char **TITLE, char **ARTIST, char **ALBUM_TT, char **LYRICS, int NUM, int *SRCH_NUM)
{
	printf(" ┌────────────────────────────────────┐\n");
	printf(" │ NUMBER │       TITLE       │     ARTIST     │       ALBUM TITLE     │\n");
	printf(" ├────────────────────────────────────┤\n");
	for (int temp = 0; temp < NUM; temp++)
	{
		char temp_s[30];
		int n;
		printf(" │    %d    \b", SRCH_NUM[temp]); //번호 표시
		if (temp >= 9) printf("\b");
		if (temp >= 99) printf("\b");

		if (strlen(TITLE[temp]) < 18)			//타이틀 표시
		{
			strcpy(temp_s, TITLE[temp]);
			for (n = strlen(temp_s); n < 19; n++)
			{
				temp_s[n] = ' ';
			}
			temp_s[n] = '\0';
			printf("│%s", temp_s);
		}
		else
		{
			if ((ONELENGTH_CHARACTER(TITLE[temp]) % 2) == 0) //1바이트 글자수가 짝수인 경우
			{
				strncpy(temp_s, TITLE[temp], 16);
				*(temp_s + 16) = '\0';
				printf("│%s …", temp_s);
			}
			else									//1바이트 글자수가 홀수인 경우
			{
				strncpy(temp_s, TITLE[temp], 17);
				*(temp_s + 17) = '\0';
				printf("│%s…", temp_s);
			}
		}

		if (strlen(ARTIST[temp]) < 15)			//아티스트 표시
		{
			strcpy(temp_s, ARTIST[temp]);
			for (n = strlen(temp_s); n < 16; n++)
			{
				temp_s[n] = ' ';
			}
			temp_s[n] = '\0';
			printf("│%s", temp_s);
		}
		else
		{
			if ((ONELENGTH_CHARACTER(ARTIST[temp]) % 2) == 0) //1바이트 글자수가 짝수인 경우
			{
				strncpy(temp_s, ARTIST[temp], 14);
				*(temp_s + 14) = '\0';
				printf("│%s…", temp_s);
			}
			else									//1바이트 글자수가 홀수인 경우
			{
				strncpy(temp_s, ARTIST[temp], 13);
				*(temp_s + 13) = '\0';
				printf("│%s …", temp_s);
			}
		}

		if (strlen(ALBUM_TT[temp]) < 22)			//앨범타이틀 표시
		{
			strcpy(temp_s, ALBUM_TT[temp]);
			for (n = strlen(temp_s); n < 23; n++)
			{
				temp_s[n] = ' ';
			}
			temp_s[n] = '\0';
			printf("│%s", temp_s);
		}
		else
		{
			if ((ONELENGTH_CHARACTER(ALBUM_TT[temp]) % 2) == 0) //1바이트 글자수가 짝수인 경우
			{
				strncpy(temp_s, ALBUM_TT[temp], 20);
				*(temp_s + 20) = '\0';
				printf("│%s …", temp_s);
			}
			else									//1바이트 글자수가 홀수인 경우
			{
				strncpy(temp_s, ALBUM_TT[temp], 21);
				*(temp_s + 21) = '\0';
				printf("│%s…", temp_s);
			}
		}

		printf("│\n");
	}
	printf(" └────────────────────────────────────┘\n");
}

void ADD(char **TITLE, char **ARTIST, char **ALBUM_TT, char **LYRICS, const int NUM)
{
	char * temp1, * temp2, * temp3, * temp4;
	temp1 = (char *)malloc(sizeof(char) * 300);
	temp2 = (char *)malloc(sizeof(char) * 300);
	temp3 = (char *)malloc(sizeof(char) * 300); 
	temp4 = (char *)malloc(sizeof(char) * 10000);
	fflush(stdin); //버퍼 비우기
	printf("  Title : ");
	scanf("%[^\n]s", temp1);  //엔터를 제외한 모든 문자를 입력받는다. (스페이스바를 입력받기 위함임)
	TITLE[NUM] = temp1;		//임시 포인터변수에 문자열을 입력받고 각 TITLE, ARTIST … [NUM] 에다가 복사해주고 있다
	fflush(stdin);
	printf("  Artist : ");
	scanf("%[^\n]s", temp2);
	ARTIST[NUM] = temp2;
	fflush(stdin);
	printf("  Album Title : ");
	scanf("%[^\n]s", temp3);
	ALBUM_TT[NUM] = temp3;
	fflush(stdin);
	printf("  Lyrics (끝에 '/'삽입)\n   : ");
	scanf("%[^'/']s", temp4);
	LYRICS[NUM] = temp4;
	fflush(stdin);
	printf("\n  음악 추가 완료!\n\n");
	
}

void DEL(char ** TITLE, char ** ARTIST, char ** ALBUM_TT, char ** LYRICS, int * NUM)
{
	int SCAN;

	if ((*NUM) == 0)				//음악이 존재하지 않을 때
	{
		printf("  삭제할 음악조차 존재하지 않습니다:(\n\n"); 
		return;
	}

	while (1)
	{
		printf("  삭제할 음악 번호 : ");
		scanf("%d", &SCAN);
		if (SCAN < 1 || SCAN > *NUM)
		{
			printf("  없는 번호입니다.\n\n");	  //일치하는 음악번호가 없을 때
			continue;
		}
		SCAN--;
		
		for (int i = SCAN; i < (*NUM); i++)  //각 포인터배열 [i+1]에 있는 문자열을 [i]로 복사하여 덮어 씌우고 있다
		{
			
			strcpy(TITLE[i], TITLE[i + 1]);
			strcpy(ARTIST[i], ARTIST[i + 1]);
			strcpy(ALBUM_TT[i], ALBUM_TT[i + 1]);
			strcpy(LYRICS[i], LYRICS[i + 1]);
		}
		(*NUM)--;	//음악 개수 감소
		printf("\n  %d번 음악 삭제 완료!\n\n",++SCAN);
		break;
	}
}

void FIX(char ** TITLE, char ** ARTIST, char ** ALBUM_TT, char ** LYRICS, int  NUM)
{
	int SCAN;
	char * temp1, *temp2, *temp3, *temp4;
	temp1 = (char *)malloc(sizeof(char) * 300);
	temp2 = (char *)malloc(sizeof(char) * 300);
	temp3 = (char *)malloc(sizeof(char) * 300);
	temp4 = (char *)malloc(sizeof(char) * 10000);

	if (NUM == 0)				//음악이 존재하지 않을 때
	{
		printf("  수정할 음악조차 존재하지 않습니다:(\n\n"); 
		return;
	}

	while (1)
	{
		printf("  수정할 음악 번호 : ");
		scanf("%d", &SCAN);
		if (SCAN < 1 || SCAN > NUM)		//일치하는 음악번호가 없을 때
		{
			printf("  없는 번호입니다.\n\n");
			continue;
		}
		SCAN--;
		fflush(stdin); //버퍼 비우기
		printf("  Title : ");
		scanf("%[^\n]s", temp1);
		TITLE[SCAN] = temp1;    //문자열을 새로 입력받아 포인터배열[N}에 값을 덮어씌우고 있다
		fflush(stdin);
		printf("  Artist : ");
		scanf("%[^\n]s", temp2);
		ARTIST[SCAN] = temp2;
		fflush(stdin);
		printf("  Album Title : ");
		scanf("%[^\n]s", temp3);
		ALBUM_TT[SCAN] = temp3;
		fflush(stdin);
		printf("  Lyrics (끝에 '/'삽입)\n   : ");
		scanf("%[^'/']s", temp4);
		LYRICS[SCAN] = temp4;
		fflush(stdin);

		strcpy(TITLE[SCAN], temp1);
		strcpy(ARTIST[SCAN], temp2);
		strcpy(ALBUM_TT[SCAN], temp3);
		strcpy(LYRICS[SCAN], temp4);
		printf("\n  %d번 음악 수정 완료!\n\n", ++SCAN);
		break;
	}
}

int SRCH(char ** TITLE, char ** ARTIST, char ** ALBUM_TT, char ** LYRICS, int NUM, char ** TEMP1, char ** TEMP2, char ** TEMP3, char ** TEMP4, int *SRCH_NUM)
{
	int SCAN, i, j;
	char * String = (char *)malloc(sizeof(char) * 10000);
	puts("  1. 타이틀 검색");
	puts("  2. 아티스트 검색");
	puts("  3. 앨범 타이틀 검색");
	puts("  4. 가사 검색");
	while (1)
	{
		printf("  입력 : ");
		scanf("%d", &SCAN);
		fflush(stdin);
		if (SCAN == 1)
		{
			j = 0;
			printf("\n  타이틀 검색 : ");
			scanf("%[^\n]s", String);
			for (i = 0; i < NUM; i++)
			{
				
				if (strstr(TITLE[i], String) != NULL) 		//입력받은 문자열이 포인터배열[i]에 포함되는 경우
				{
					TEMP1[j] = TITLE[i];
					TEMP2[j] = ARTIST[i];
					TEMP3[j] = ALBUM_TT[i];
					TEMP4[j] = LYRICS[i];
					SRCH_NUM[j] = (i + 1);
					j++;
				}
			}
			break;
		}
		else if (SCAN == 2)
		{
			j = 0;
			printf("\n  아티스트 검색 : ");
			scanf("%[^\n]s", String);
			for (i = 0; i < NUM; i++)
			{
				if (strstr(ARTIST[i], String) != NULL) 		//입력받은 문자열이 포인터배열[i]에 포함되는 경우
				{
					TEMP1[j] = TITLE[i];
					TEMP2[j] = ARTIST[i];
					TEMP3[j] = ALBUM_TT[i];
					TEMP4[j] = LYRICS[i];
					SRCH_NUM[j] = (i + 1);
					j++;
				}
			}
			break;
		}
		else if (SCAN == 3)
		{
			j = 0;
			printf("\n  앨범 타이틀 검색 : ");
			scanf("%[^\n]s", String);
			for (i = 0; i < NUM; i++)
			{
				if (strstr(ALBUM_TT[i], String) != NULL) 		//입력받은 문자열이 포인터배열[i]에 포함되는 경우
				{
					TEMP1[j] = TITLE[i];
					TEMP2[j] = ARTIST[i];
					TEMP3[j] = ALBUM_TT[i];
					TEMP4[j] = LYRICS[i];
					SRCH_NUM[j] = (i + 1);
					j++;
				}
			}
			break;
		}
		else if (SCAN == 4)
		{
			j = 0;
			printf("\n  가사 검색 (끝에 '/'삽입)\n   : ");
			scanf("%[^'/']s", String);
			for (i = 0; i < NUM; i++)
			{
				if (strstr(LYRICS[i], String) != NULL) 		//입력받은 문자열이 포인터배열[i]에 포함되는 경우
				{
					TEMP1[j] = TITLE[i];
					TEMP2[j] = ARTIST[i];
					TEMP3[j] = ALBUM_TT[i];
					TEMP4[j] = LYRICS[i];
					SRCH_NUM[j] = (i + 1);
					j++;
				}
			}
			break;
		}
		else
		{
			printf("\n  다시 aa입력해주세요\n");
			continue;
		}
	}
	return j;
}

void main()
{
	char * TITLE[999];
	char * ARTIST[999];
	char * ALBUM_TT[999];
	char * LYRICS[999];
	char * TEMP1[999];  //검색을 통한 리스트를 만들기 위한 새로운 포인터 배열
	char * TEMP2[999];
	char * TEMP3[999];
	char * TEMP4[999];
	int SRCH_NUM[999];
	char ch;
	int NUMBER = 0, SCAN, TEMP_SRCH;
	while (1)
	{
		system("cls");
		TITLE[NUMBER + 1] = "";  
		ARTIST[NUMBER + 1] = "";
		ALBUM_TT[NUMBER + 1] = "";
		LYRICS[NUMBER + 1] = "";
		List(TITLE, ARTIST, ALBUM_TT, LYRICS, NUMBER);
		printf("  1. 음악 추가\n");
		printf("  2. 음악 삭제\n");
		printf("  3. 음악 수정\n");
		printf("  4. 음악 검색\n");
		printf("  5. 가사 보기\n");
		printf("  6. 프로그램 종료\n");
		printf("\n  입력 : ");
		scanf("%d", &SCAN);
		system("cls");
		List(TITLE, ARTIST, ALBUM_TT, LYRICS, NUMBER);
		
		if (SCAN == 1)
			ADD(TITLE, ARTIST, ALBUM_TT, LYRICS, NUMBER++);
		else if (SCAN == 2)
			DEL(TITLE, ARTIST, ALBUM_TT, LYRICS, &NUMBER);
		else if (SCAN == 3)
			FIX(TITLE, ARTIST, ALBUM_TT, LYRICS, NUMBER);
		else if (SCAN == 4)
		{
			if (NUMBER == 0)				//음악이 존재하지 않을 때
			{
				printf("  검색할 음악조차 존재하지 않습니다:(\n\n");
				goto END;
			}
			TEMP_SRCH = SRCH(TITLE, ARTIST, ALBUM_TT, LYRICS, NUMBER, TEMP1, TEMP2, TEMP3, TEMP4, SRCH_NUM);
			system("cls");
			List_SRCH(TEMP1, TEMP2, TEMP3, TEMP4, TEMP_SRCH, SRCH_NUM);
			printf("\n  검색 완료\n");
		}
		else if (SCAN == 5)
		{
			int scan;
			system("cls"); 
			List(TITLE, ARTIST, ALBUM_TT, LYRICS, NUMBER);
			if (NUMBER == 0)				//음악이 존재하지 않을 때
			{
				printf("  음악이 존재하지 않습니다:(\n\n");
				goto END;
			}
			while (1)
			{
				printf("\n  가사를 표시할 음악 번호 : ");
				scanf("%d", &scan);

				if (scan < 1 || scan > NUMBER)		//일치하는 음악번호가 없을 때
				{
					printf("  없는 번호입니다.\n");
					continue;
				}
				scan--;
				printf("\n%s\n\n", LYRICS[scan]);
				break;
			}
		}
		else if (SCAN == 6)
		{
			printf("\n  프로그램이 종료됩니다...\n\n");
			return;
		}
		else
			continue;
		END:
		printf("  아무 키나 누르세요...");
		ch = getch();
		fflush(stdin);
	}
	
}
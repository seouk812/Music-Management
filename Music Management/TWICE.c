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
	printf(" ����������������������������������������������������������������������������\n");
	printf(" �� NUMBER ��       TITLE       ��     ARTIST     ��       ALBUM TITLE     ��\n");
	printf(" ����������������������������������������������������������������������������\n");
	for (int temp = 0; temp < NUM; temp++)
	{
		char temp_s[30];
		int n;
		printf(" ��    %d    \b", temp + 1); //��ȣ ǥ��
		if (temp >= 9) printf("\b");
		if (temp >= 99) printf("\b");

		if (strlen(TITLE[temp]) < 18)			//Ÿ��Ʋ ǥ��
		{
			strcpy(temp_s, TITLE[temp]);
			for (n = strlen(temp_s); n < 19; n++)
			{
				temp_s[n] = ' ';
			}
			temp_s[n]='\0';
			printf("��%s", temp_s);
		}
		else
		{
			if ((ONELENGTH_CHARACTER(TITLE[temp]) % 2) == 0) //1����Ʈ ���ڼ��� ¦���� ���
			{
				strncpy(temp_s, TITLE[temp], 16);
				*(temp_s + 16) = '\0';
				printf("��%s ��", temp_s);
			}
			else									//1����Ʈ ���ڼ��� Ȧ���� ���
			{
				strncpy(temp_s, TITLE[temp], 17);
				*(temp_s + 17) = '\0';
				printf("��%s��", temp_s);
			}
		}

		if (strlen(ARTIST[temp]) < 15)			//��Ƽ��Ʈ ǥ��
		{
			strcpy(temp_s, ARTIST[temp]);
			for (n = strlen(temp_s); n < 16; n++)
			{
				temp_s[n] = ' ';
			}
			temp_s[n] = '\0';
			printf("��%s", temp_s);
		}
		else
		{
			if ((ONELENGTH_CHARACTER(ARTIST[temp]) % 2) == 0) //1����Ʈ ���ڼ��� ¦���� ���
			{
				strncpy(temp_s, ARTIST[temp], 14);
				*(temp_s + 14) = '\0';
				printf("��%s��", temp_s);
			}
			else									//1����Ʈ ���ڼ��� Ȧ���� ���
			{
				strncpy(temp_s, ARTIST[temp], 13);
				*(temp_s + 13) = '\0';
				printf("��%s ��", temp_s);
			}
		}

		if (strlen(ALBUM_TT[temp]) < 22)			//�ٹ�Ÿ��Ʋ ǥ��
		{
			strcpy(temp_s, ALBUM_TT[temp]);
			for (n = strlen(temp_s); n < 23; n++)
			{
				temp_s[n] = ' ';
			}
			temp_s[n] = '\0';
			printf("��%s", temp_s);
		}
		else
		{
			if ((ONELENGTH_CHARACTER(ALBUM_TT[temp]) % 2) == 0) //1����Ʈ ���ڼ��� ¦���� ���
			{
				strncpy(temp_s, ALBUM_TT[temp], 20);
				*(temp_s + 20) = '\0';
				printf("��%s ��", temp_s);
			}
			else									//1����Ʈ ���ڼ��� Ȧ���� ���
			{
				strncpy(temp_s, ALBUM_TT[temp], 21);
				*(temp_s + 21) = '\0';
				printf("��%s��", temp_s);
			}
		}

		printf("��\n");
	}
	printf(" ����������������������������������������������������������������������������\n");
}

void List_SRCH(char **TITLE, char **ARTIST, char **ALBUM_TT, char **LYRICS, int NUM, int *SRCH_NUM)
{
	printf(" ����������������������������������������������������������������������������\n");
	printf(" �� NUMBER ��       TITLE       ��     ARTIST     ��       ALBUM TITLE     ��\n");
	printf(" ����������������������������������������������������������������������������\n");
	for (int temp = 0; temp < NUM; temp++)
	{
		char temp_s[30];
		int n;
		printf(" ��    %d    \b", SRCH_NUM[temp]); //��ȣ ǥ��
		if (temp >= 9) printf("\b");
		if (temp >= 99) printf("\b");

		if (strlen(TITLE[temp]) < 18)			//Ÿ��Ʋ ǥ��
		{
			strcpy(temp_s, TITLE[temp]);
			for (n = strlen(temp_s); n < 19; n++)
			{
				temp_s[n] = ' ';
			}
			temp_s[n] = '\0';
			printf("��%s", temp_s);
		}
		else
		{
			if ((ONELENGTH_CHARACTER(TITLE[temp]) % 2) == 0) //1����Ʈ ���ڼ��� ¦���� ���
			{
				strncpy(temp_s, TITLE[temp], 16);
				*(temp_s + 16) = '\0';
				printf("��%s ��", temp_s);
			}
			else									//1����Ʈ ���ڼ��� Ȧ���� ���
			{
				strncpy(temp_s, TITLE[temp], 17);
				*(temp_s + 17) = '\0';
				printf("��%s��", temp_s);
			}
		}

		if (strlen(ARTIST[temp]) < 15)			//��Ƽ��Ʈ ǥ��
		{
			strcpy(temp_s, ARTIST[temp]);
			for (n = strlen(temp_s); n < 16; n++)
			{
				temp_s[n] = ' ';
			}
			temp_s[n] = '\0';
			printf("��%s", temp_s);
		}
		else
		{
			if ((ONELENGTH_CHARACTER(ARTIST[temp]) % 2) == 0) //1����Ʈ ���ڼ��� ¦���� ���
			{
				strncpy(temp_s, ARTIST[temp], 14);
				*(temp_s + 14) = '\0';
				printf("��%s��", temp_s);
			}
			else									//1����Ʈ ���ڼ��� Ȧ���� ���
			{
				strncpy(temp_s, ARTIST[temp], 13);
				*(temp_s + 13) = '\0';
				printf("��%s ��", temp_s);
			}
		}

		if (strlen(ALBUM_TT[temp]) < 22)			//�ٹ�Ÿ��Ʋ ǥ��
		{
			strcpy(temp_s, ALBUM_TT[temp]);
			for (n = strlen(temp_s); n < 23; n++)
			{
				temp_s[n] = ' ';
			}
			temp_s[n] = '\0';
			printf("��%s", temp_s);
		}
		else
		{
			if ((ONELENGTH_CHARACTER(ALBUM_TT[temp]) % 2) == 0) //1����Ʈ ���ڼ��� ¦���� ���
			{
				strncpy(temp_s, ALBUM_TT[temp], 20);
				*(temp_s + 20) = '\0';
				printf("��%s ��", temp_s);
			}
			else									//1����Ʈ ���ڼ��� Ȧ���� ���
			{
				strncpy(temp_s, ALBUM_TT[temp], 21);
				*(temp_s + 21) = '\0';
				printf("��%s��", temp_s);
			}
		}

		printf("��\n");
	}
	printf(" ����������������������������������������������������������������������������\n");
}

void ADD(char **TITLE, char **ARTIST, char **ALBUM_TT, char **LYRICS, const int NUM)
{
	char * temp1, * temp2, * temp3, * temp4;
	temp1 = (char *)malloc(sizeof(char) * 300);
	temp2 = (char *)malloc(sizeof(char) * 300);
	temp3 = (char *)malloc(sizeof(char) * 300); 
	temp4 = (char *)malloc(sizeof(char) * 10000);
	fflush(stdin); //���� ����
	printf("  Title : ");
	scanf("%[^\n]s", temp1);  //���͸� ������ ��� ���ڸ� �Է¹޴´�. (�����̽��ٸ� �Է¹ޱ� ������)
	TITLE[NUM] = temp1;		//�ӽ� �����ͺ����� ���ڿ��� �Է¹ް� �� TITLE, ARTIST �� [NUM] ���ٰ� �������ְ� �ִ�
	fflush(stdin);
	printf("  Artist : ");
	scanf("%[^\n]s", temp2);
	ARTIST[NUM] = temp2;
	fflush(stdin);
	printf("  Album Title : ");
	scanf("%[^\n]s", temp3);
	ALBUM_TT[NUM] = temp3;
	fflush(stdin);
	printf("  Lyrics (���� '/'����)\n   : ");
	scanf("%[^'/']s", temp4);
	LYRICS[NUM] = temp4;
	fflush(stdin);
	printf("\n  ���� �߰� �Ϸ�!\n\n");
	
}

void DEL(char ** TITLE, char ** ARTIST, char ** ALBUM_TT, char ** LYRICS, int * NUM)
{
	int SCAN;

	if ((*NUM) == 0)				//������ �������� ���� ��
	{
		printf("  ������ �������� �������� �ʽ��ϴ�:(\n\n"); 
		return;
	}

	while (1)
	{
		printf("  ������ ���� ��ȣ : ");
		scanf("%d", &SCAN);
		if (SCAN < 1 || SCAN > *NUM)
		{
			printf("  ���� ��ȣ�Դϴ�.\n\n");	  //��ġ�ϴ� ���ǹ�ȣ�� ���� ��
			continue;
		}
		SCAN--;
		
		for (int i = SCAN; i < (*NUM); i++)  //�� �����͹迭 [i+1]�� �ִ� ���ڿ��� [i]�� �����Ͽ� ���� ����� �ִ�
		{
			
			strcpy(TITLE[i], TITLE[i + 1]);
			strcpy(ARTIST[i], ARTIST[i + 1]);
			strcpy(ALBUM_TT[i], ALBUM_TT[i + 1]);
			strcpy(LYRICS[i], LYRICS[i + 1]);
		}
		(*NUM)--;	//���� ���� ����
		printf("\n  %d�� ���� ���� �Ϸ�!\n\n",++SCAN);
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

	if (NUM == 0)				//������ �������� ���� ��
	{
		printf("  ������ �������� �������� �ʽ��ϴ�:(\n\n"); 
		return;
	}

	while (1)
	{
		printf("  ������ ���� ��ȣ : ");
		scanf("%d", &SCAN);
		if (SCAN < 1 || SCAN > NUM)		//��ġ�ϴ� ���ǹ�ȣ�� ���� ��
		{
			printf("  ���� ��ȣ�Դϴ�.\n\n");
			continue;
		}
		SCAN--;
		fflush(stdin); //���� ����
		printf("  Title : ");
		scanf("%[^\n]s", temp1);
		TITLE[SCAN] = temp1;    //���ڿ��� ���� �Է¹޾� �����͹迭[N}�� ���� ������ �ִ�
		fflush(stdin);
		printf("  Artist : ");
		scanf("%[^\n]s", temp2);
		ARTIST[SCAN] = temp2;
		fflush(stdin);
		printf("  Album Title : ");
		scanf("%[^\n]s", temp3);
		ALBUM_TT[SCAN] = temp3;
		fflush(stdin);
		printf("  Lyrics (���� '/'����)\n   : ");
		scanf("%[^'/']s", temp4);
		LYRICS[SCAN] = temp4;
		fflush(stdin);

		strcpy(TITLE[SCAN], temp1);
		strcpy(ARTIST[SCAN], temp2);
		strcpy(ALBUM_TT[SCAN], temp3);
		strcpy(LYRICS[SCAN], temp4);
		printf("\n  %d�� ���� ���� �Ϸ�!\n\n", ++SCAN);
		break;
	}
}

int SRCH(char ** TITLE, char ** ARTIST, char ** ALBUM_TT, char ** LYRICS, int NUM, char ** TEMP1, char ** TEMP2, char ** TEMP3, char ** TEMP4, int *SRCH_NUM)
{
	int SCAN, i, j;
	char * String = (char *)malloc(sizeof(char) * 10000);
	puts("  1. Ÿ��Ʋ �˻�");
	puts("  2. ��Ƽ��Ʈ �˻�");
	puts("  3. �ٹ� Ÿ��Ʋ �˻�");
	puts("  4. ���� �˻�");
	while (1)
	{
		printf("  �Է� : ");
		scanf("%d", &SCAN);
		fflush(stdin);
		if (SCAN == 1)
		{
			j = 0;
			printf("\n  Ÿ��Ʋ �˻� : ");
			scanf("%[^\n]s", String);
			for (i = 0; i < NUM; i++)
			{
				
				if (strstr(TITLE[i], String) != NULL) 		//�Է¹��� ���ڿ��� �����͹迭[i]�� ���ԵǴ� ���
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
			printf("\n  ��Ƽ��Ʈ �˻� : ");
			scanf("%[^\n]s", String);
			for (i = 0; i < NUM; i++)
			{
				if (strstr(ARTIST[i], String) != NULL) 		//�Է¹��� ���ڿ��� �����͹迭[i]�� ���ԵǴ� ���
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
			printf("\n  �ٹ� Ÿ��Ʋ �˻� : ");
			scanf("%[^\n]s", String);
			for (i = 0; i < NUM; i++)
			{
				if (strstr(ALBUM_TT[i], String) != NULL) 		//�Է¹��� ���ڿ��� �����͹迭[i]�� ���ԵǴ� ���
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
			printf("\n  ���� �˻� (���� '/'����)\n   : ");
			scanf("%[^'/']s", String);
			for (i = 0; i < NUM; i++)
			{
				if (strstr(LYRICS[i], String) != NULL) 		//�Է¹��� ���ڿ��� �����͹迭[i]�� ���ԵǴ� ���
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
			printf("\n  �ٽ� aa�Է����ּ���\n");
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
	char * TEMP1[999];  //�˻��� ���� ����Ʈ�� ����� ���� ���ο� ������ �迭
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
		printf("  1. ���� �߰�\n");
		printf("  2. ���� ����\n");
		printf("  3. ���� ����\n");
		printf("  4. ���� �˻�\n");
		printf("  5. ���� ����\n");
		printf("  6. ���α׷� ����\n");
		printf("\n  �Է� : ");
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
			if (NUMBER == 0)				//������ �������� ���� ��
			{
				printf("  �˻��� �������� �������� �ʽ��ϴ�:(\n\n");
				goto END;
			}
			TEMP_SRCH = SRCH(TITLE, ARTIST, ALBUM_TT, LYRICS, NUMBER, TEMP1, TEMP2, TEMP3, TEMP4, SRCH_NUM);
			system("cls");
			List_SRCH(TEMP1, TEMP2, TEMP3, TEMP4, TEMP_SRCH, SRCH_NUM);
			printf("\n  �˻� �Ϸ�\n");
		}
		else if (SCAN == 5)
		{
			int scan;
			system("cls"); 
			List(TITLE, ARTIST, ALBUM_TT, LYRICS, NUMBER);
			if (NUMBER == 0)				//������ �������� ���� ��
			{
				printf("  ������ �������� �ʽ��ϴ�:(\n\n");
				goto END;
			}
			while (1)
			{
				printf("\n  ���縦 ǥ���� ���� ��ȣ : ");
				scanf("%d", &scan);

				if (scan < 1 || scan > NUMBER)		//��ġ�ϴ� ���ǹ�ȣ�� ���� ��
				{
					printf("  ���� ��ȣ�Դϴ�.\n");
					continue;
				}
				scan--;
				printf("\n%s\n\n", LYRICS[scan]);
				break;
			}
		}
		else if (SCAN == 6)
		{
			printf("\n  ���α׷��� ����˴ϴ�...\n\n");
			return;
		}
		else
			continue;
		END:
		printf("  �ƹ� Ű�� ��������...");
		ch = getch();
		fflush(stdin);
	}
	
}
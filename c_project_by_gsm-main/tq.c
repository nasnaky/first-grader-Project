//����� �Ѱ���

//�ð��� �ְ� ���߿� �ҽÿ� �̵�,���� 0

//�ݺ��� ��� �� �Է��Ҽ� �ִ��� Ȯ�� 0

//������ �� �� ���� ���� (������ �۾�)�ӵ� �� �۾� 0

//�� �ٿ� �Ѳ� ���� 0

//�Ѿ� �̵� 0

//�Ѱ� �忡�� �浹 �� 0

//����Ű �̵� ���� ���� ���� 0

//������ ���� �Ѱ� �幰�̵� ������0

//�浿 ���� ��� 0

//������Ʈ ���� �����0

//���� ���� ȭ�� ��� ����� 0

//�� ���� �ذ� 0

//���� �پ缺 3�� 0

//�浹 ���Ʒ� ���� �ذ� C

//��ֹ� �߰� 0

//���� �̵� 0

//��� �ӵ� ����
 
//		0000000000
//	  	   000
//0		 00000000
//000000000000000000
//0	     00000000--
//		
//printf("\t\t0000000000\n");
//printf("\t\t   000\n");
//printf("\t0	 00000000\n");
//printf("\t0000000000000000000\n");
//printf("\t0	 00000000��\n");


#include<stdio.h>
#include<Windows.h>
#include<time.h>
#include<process.h>
#include<stdlib.h>
#include<conio.h>

#define RIGHT 77  
#define UP 72  
#define DOWN 80 

int a[30][175];
int sum = 5000;
int bob = 100;
int rhks = 100;
int hart = 00;

unsigned _stdcall Thread_A(void* arg);

unsigned _stdcall boss_mod(void* arg);

void Gotxy(int x, int y);

unsigned _stdcall ��(void* arg);

unsigned _stdcall move_��ֹ�(void* arg);

unsigned _stdcall boss_mod1(void* arg);

void key_sel(void);

unsigned _stdcall ��2(void* arg);

unsigned _stdcall ��1(void* arg);

unsigned _stdcall s_move1(void* arg);

int main(void) {
	srand(time(NULL));
	int key;
	int on = 0;
	int dow = 0;
	int hekp = 0;
	int gun =62;

	key_sel();

	for (int i = 0; i < 30; i++) {
		for (int j = 0; j < 175; j++) {
			a[i][j] = 32;
		}
	}
	// ���� ���Ʒ��� ���
	for (int a1 = 0; a1 < 14; a1++) {
		a[10][17 - a1] = 48;
	}// ���� ���Ʒ��� ���
	for (int a1 = 0; a1 < 3; a1++) {
		a[11][12 - a1] = 48;
	}
	a[12][0] = 48;
	for (int a1 = 0; a1 < 6; a1++) {
		a[12][13 - a1] = 48;
	}
	for (int a1 = 0; a1 < 17; a1++) {
		a[13][0 + a1] = 48;
	}
	a[14][0] = 48;
	for (int a1 = 0; a1 < 6; a1++) {
		a[14][13 - a1] = 48;
	}
	a[14][14] = 45;
	a[14][15] = 45;

	system("cls");

	_beginthreadex(NULL, 0, Thread_A, 0, 0, NULL);//��� ����Ʈ 

	_beginthreadex(NULL, 0, ��, 0, 0, NULL);

	_beginthreadex(NULL, 0, boss_mod, 0, 0, NULL);

	_beginthreadex(NULL, 0, boss_mod1, 0, 0, NULL);

	_beginthreadex(NULL, 0, ��1, 0, 0, NULL);

	_beginthreadex(NULL, 0, ��2, 0, 0, NULL);

	_beginthreadex(NULL, 0, move_��ֹ�, 0, 0, NULL);

	_beginthreadex(NULL, 0, s_move1, 0, 0, NULL);

	while (1) {
		key = 0;//�ʱ�ȭ

		if (kbhit()) { 
			key = getch();
			if (key == 224) {
				do { key = getch(); } while (key == 224);
				if (key == UP) {//����
					on++;
					if (a[0][10] == 48) {//�̵�����
						on--;
						continue;
					}
					for (int a1 = 0; a1 < 14; a1++) {
						if (a[10 - on + dow - 1][17 - a1] == 63|| a[10 - on + dow - 1][17 - a1] == 64|| a[10 - on + dow - 1][17 - a1] == 92|| a[10 - on + dow - 1][17 - a1] == 68) {
							system("cls");
							Gotxy(20, 90);
							printf("GAME OVER");
							Gotxy(30, 175);
							printf("���� : %d", sum);
							Gotxy(40, 1);
							exit(0);
						}
					}
					for (int i = 0; i < 30; i++) {//�̵� ����
						for (int j = 0; j < 175; j++) {
							if (a[i][j] == 48 || a[i][j] == 45) {
								a[i][j] = 32;
							}
						}
					}
					for (int a1 = 0; a1 < 14; a1++) {//���� �ö�
						a[10 - on + dow][17 - a1] = 48;
					}
					for (int a1 = 0; a1 < 3; a1++) {
						a[11 - on + dow][12 - a1] = 48;
					}
					a[12 - on + dow][0] = 48;
					for (int a1 = 0; a1 < 6; a1++) {
						a[12 - on + dow][13 - a1] = 48;
					}
					for (int a1 = 0; a1 < 17; a1++) {
						a[13 - on + dow][0 + a1] = 48;
					}
					a[14 - on + dow][0] = 48;
					for (int a1 = 0; a1 < 6; a1++) {
						a[14 - on + dow][13 - a1] = 48;
					}
					a[14 - on + dow][14] = 45;
					a[14 - on + dow][15] = 45;
				}
				if (key == DOWN) {//�Ʒ���
					dow++;
					if (a[29][10] == 48) {//�̵� ���� ���� 
						dow--;
						continue;
					}
					for (int a1 = 0; a1 < 14; a1++) {
						if (a[14 - on + dow + 1][17 - a1] == 63 || a[10 - on + dow - 1][17 - a1] == 64 || a[10 - on + dow - 1][17 - a1] == 92) {
							system("cls");
							Gotxy(20, 90);
							printf("GAME OVER");
							Gotxy(30, 175);
							printf("���� : %d", sum);
							Gotxy(40, 1);
							exit(0);
						}
					}
					for (int i = 0; i < 30; i++) {//�̵� ����
						for (int j = 0; j < 175; j++) {
							if (a[i][j] == 48 || a[i][j] == 45) {
								a[i][j] = 32;
							}
						}
					}
					for (int a1 = 0; a1 < 14; a1++) {//�̵� ��
						a[10 - on + dow][17 - a1] = 48;
					}
					for (int a1 = 0; a1 < 3; a1++) {
						a[11 - on + dow][12 - a1] = 48;
					}
					a[12 - on + dow][0] = 48;
					for (int a1 = 0; a1 < 6; a1++) {
						a[12 - on + dow][13 - a1] = 48;
					}
					for (int a1 = 0; a1 < 17; a1++) {
						a[13 - on + dow][0 + a1] = 48;
					}
					a[14 - on + dow][0] = 48;
					for (int a1 = 0; a1 < 6; a1++) {
						a[14 - on + dow][13 - a1] = 48;
					}
					a[14 - on + dow][14] = 45;
					a[14 - on + dow][15] = 45;
				}
			}
			else if (key == 27) {
				system("cls");
				Gotxy(20, 80);
				printf("GAME OVER");
				Gotxy(30, 170);
				printf("���� : %d", sum);
				Gotxy(40, 1);
				exit(0);
				}
			else if (key == 122) {//����
				gun = 42;
			}
			else if (key == 120) {//����
				gun = 61;
			}
			else if (gun == 42) {
				if (bob == 0) {
					gun = 62;
				}
				else if (bob > 0) {
					bob -= 0.5;
				}
			}
			else if (gun == 61) {
				if (rhks == 0) {
					gun = 62;
				}
				else if (rhks > 0) {
					rhks -= 0.5;
				}
			}
			if (key == 32) {
				Sleep(200);
				hekp = 0;
				for (int i = 0; i < 30; i++) {
					for (int j = 0; j < 175; j++) {
						if (a[i][j] == 45) {
							hekp++;
							if (hekp == 2) {
								a[i][j + 3] = gun;
							}
						}
					}
				}
			}
		}
	}
}
unsigned _stdcall Thread_A(void* arg) {

	int temp = 0;
	int count = 0;
	while (1) {
		if (sum <= 15) {
			Sleep(700);
		}
		else if (sum > 15 && sum <= 50) {
			Sleep(500);
		}
		else if (sum > 51 && sum <= 100) {
			Sleep(300);
		}
		else if (sum > 100 && sum <= 200) {
			Sleep(200);
		}
		else if (sum > 200 && sum <= 250) {
			Sleep(200);
		}
		else if (sum > 250) {
			Sleep(100);
		}
		for (int i = 0; i < 30; i++) {
			for (int j = 0; j < 175; j++) {
				if (a[i][j] == 64 || a[i][j] == 63 || a[i][j] == 92) {
					temp = a[i][j];
					a[i][j] = a[i][j - 1];
					a[i][j - 1] = temp;
				}
			}
		}
	}
}
void Gotxy(int x, int y)//���ϴ� ��ġ�� ����ϴ� �ռ�
{
	COORD Pos = { y - 1,x - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
unsigned _stdcall ��2(void* arg) {
	while (1) {
		for (int i = 0; i < 30; i++) {//����
			for (int j = 0; j < 175; j++) {
				if (a[i][j] == 62 && a[i][j - 1] == 64 || a[i][j] == 62 && a[i][j - 2] == 64) {
					a[i][j] = 32;
					a[i][j - 1] = 32;
					a[i][j - 2] = 32;
					sum++;
				}
				if (a[i][j] == 62 && a[i][j + 1] == 64 || a[i][j] == 62 && a[i][j + 2] == 64) {
					a[i][j] = 32;
					a[i][j + 1] = 32;
					a[i][j + 2] = 32;
					sum++;
				}
				if (a[i][j] == 62 && a[i][j + 3] == 64 || a[i][j] == 62 && a[i][j + 4] == 64) {
					a[i][j] = 32;
					a[i][j + 3] = 32;
					a[i][j + 4] = 32;
					sum++;
				}
				if (a[i][j] == 62 && a[i][j + 5] == 64 || a[i][j] == 62 && a[i][j + 6] == 64) {
					a[i][j] = 32;
					a[i][j + 5] = 32;
					a[i][j + 6] = 32;
					sum++;
				}
				if (a[i][j] == 62 && a[i][j + 7] == 64 || a[i][j] == 62 && a[i][j + 8] == 64) {
					a[i][j] = 32;
					a[i][j + 7] = 32;
					a[i][j + 8] = 32;
					sum++;
				}
				if (a[i][j] == 62 && a[i][j - 1] == 63 || a[i][j] == 62 && a[i][j - 2] == 63) {
					a[i][j] = 32;
					a[i][j - 1] = 32;
					a[i][j - 2] = 32;
					sum++;
					rhks += 5;
				}
				if (a[i][j] == 62 && a[i][j + 1] == 63 || a[i][j] == 62 && a[i][j + 2] == 63) {
					a[i][j] = 32;
					a[i][j + 1] = 32;
					a[i][j + 2] = 32;
					sum++;
					rhks += 5;
				}
				if (a[i][j] == 62 && a[i][j + 3] == 63 || a[i][j] == 62 && a[i][j + 4] == 63) {
					a[i][j] = 32;
					a[i][j + 3] = 32;
					a[i][j + 4] = 32;
					sum++;
					rhks += 5;
				}
				if (a[i][j] == 62 && a[i][j + 5] == 63 || a[i][j] == 62 && a[i][j + 6] == 63) {
					a[i][j] = 32;
					a[i][j + 5] = 32;
					a[i][j + 6] = 32;
					sum++;
					rhks += 5;
				}
				if (a[i][j] == 62 && a[i][j + 7] == 63 || a[i][j] == 62 && a[i][j + 8] == 63) {
					a[i][j] = 32;
					a[i][j + 7] = 32;
					a[i][j + 8] = 32;
					sum++;
					rhks += 5;
				}
				if (a[i][j] == 62 && a[i][j - 1] == 92 || a[i][j] == 62 && a[i][j - 2] == 92) {
					a[i][j] = 32;
					a[i][j - 1] = 32;
					a[i][j - 2] = 32;
					sum++;
					bob += 5;
				}
				if (a[i][j] == 62 && a[i][j + 1] == 92 || a[i][j] == 62 && a[i][j + 2] == 92) {
					a[i][j] = 32;
					a[i][j + 1] = 32;
					a[i][j + 2] = 32;
					sum++;
					bob += 5;
				}
				if (a[i][j] == 62 && a[i][j + 3] == 92 || a[i][j] == 62 && a[i][j + 4] == 92) {
					a[i][j] = 32;
					a[i][j + 3] = 32;
					a[i][j + 4] = 32;
					sum++;
					bob += 5;
				}
				if (a[i][j] == 62 && a[i][j + 5] == 64 || a[i][j] == 62 && a[i][j + 6] == 64) {
					a[i][j] = 32;
					a[i][j + 5] = 32;
					a[i][j + 6] = 32;
					sum++;
					bob += 5;
				}
				if (a[i][j] == 62 && a[i][j + 7] == 92 || a[i][j] == 62 && a[i][j + 8] == 92) {
					a[i][j] = 32;
					a[i][j + 7] = 32;
					a[i][j + 8] = 32;
					sum++;
					bob += 5;
				}
			}
		}//�⺻
		for (int i = 0; i < 30; i++) {//���� 61
			for (int j = 0; j < 175; j++) {
				if (a[i][j] == 61 && a[i][j - 1] == 64 || a[i][j] == 61 && a[i][j - 2] == 64) {
					a[i][j - 1] = 32;
					a[i][j - 2] = 32;
					sum++;
				}
				if (a[i][j] == 61 && a[i][j + 1] == 64 || a[i][j] == 61 && a[i][j + 2] == 64) {
					a[i][j + 1] = 32;
					a[i][j + 2] = 32;
					sum++;
				}
				if (a[i][j] == 61 && a[i][j + 3] == 64 || a[i][j] == 61 && a[i][j + 4] == 64) {
					a[i][j + 3] = 32;
					a[i][j + 4] = 32;
					sum++;
				}
				if (a[i][j] == 61 && a[i][j + 5] == 64 || a[i][j] == 61 && a[i][j + 6] == 64) {
					a[i][j + 5] = 32;
					a[i][j + 6] = 32;
					sum++;
				}
				if (a[i][j] == 61 && a[i][j + 7] == 64 || a[i][j] == 61 && a[i][j + 8] == 64) {
					a[i][j + 7] = 32;
					a[i][j + 8] = 32;
					sum++;
				}
				if (a[i][j] == 61 && a[i][j - 1] == 63 || a[i][j] == 61 && a[i][j - 2] == 63) {
					a[i][j - 1] = 32;
					a[i][j - 2] = 32;
					sum++;
					rhks += 5;
				}
				if (a[i][j] == 61 && a[i][j + 1] == 63 || a[i][j] == 61 && a[i][j + 2] == 63) {
					a[i][j + 1] = 32;
					a[i][j + 2] = 32;
					sum++;
					rhks += 5;
				}
				if (a[i][j] == 61 && a[i][j + 3] == 63 || a[i][j] == 61 && a[i][j + 4] == 63) {
					a[i][j + 3] = 32;
					a[i][j + 4] = 32;
					sum++;
					rhks += 5;
				}
				if (a[i][j] == 61 && a[i][j + 5] == 63 || a[i][j] == 61 && a[i][j + 6] == 63) {
					a[i][j + 5] = 32;
					a[i][j + 6] = 32;
					sum++;
					rhks += 5;
				}
				if (a[i][j] == 61 && a[i][j + 7] == 63 || a[i][j] == 61 && a[i][j + 8] == 63) {
					a[i][j + 7] = 32;
					a[i][j + 8] = 32;
					sum++;
					rhks += 5;
				}
				if (a[i][j] == 61 && a[i][j - 1] == 92 || a[i][j] == 61 && a[i][j - 2] == 92) {
					a[i][j - 1] = 32;
					a[i][j - 2] = 32;
					sum++;
					bob += 5;
				}
				if (a[i][j] == 61 && a[i][j + 1] == 92 || a[i][j] == 61 && a[i][j + 2] == 92) {
					a[i][j + 1] = 32;
					a[i][j + 2] = 32;
					sum++;
					bob += 5;
				}
				if (a[i][j] == 61 && a[i][j + 3] == 92 || a[i][j] == 61 && a[i][j + 4] == 92) {
					a[i][j + 3] = 32;
					a[i][j + 4] = 32;
					sum++;
					bob += 5;
				}
				if (a[i][j] == 61 && a[i][j + 5] == 64 || a[i][j] == 61 && a[i][j + 6] == 64) {
					a[i][j + 5] = 32;
					a[i][j + 6] = 32;
					sum++;
					bob += 5;
				}
				if (a[i][j] == 61 && a[i][j + 7] == 92 || a[i][j] == 61 && a[i][j + 8] == 92) {
					a[i][j + 7] = 32;
					a[i][j + 8] = 32;
					sum++;
					bob += 5;
				}
			}
		}
		for (int i = 0; i < 30; i++) {//���� 42
			for (int j = 0; j < 175; j++) {
				if (a[i][j] == 42 && a[i][j - 1] == 64 || a[i][j] == 42 && a[i][j - 2] == 64) {
					a[i][j] = 32;
					a[i][j - 1] = 32;
					a[i][j - 2] = 32;
					a[i - 1][j - 1] = 32;
					a[i + 1][j - 2] = 32;
					a[i + 1][j] = 32;
					a[i - 1][j] = 32;

					sum++;
				}
				if (a[i][j] == 42 && a[i][j + 1] == 64 || a[i][j] == 42 && a[i][j + 2] == 64) {
					a[i][j] = 32;
					a[i][j + 1] = 32;
					a[i][j + 2] = 32;
					a[i - 1][j + 1] = 32;
					a[i + 1][j + 2] = 32;
					a[i + 1][j + 1] = 32;
					a[i - 1][j + 2] = 32;
					sum++;
				}
				if (a[i][j] == 42 && a[i][j + 3] == 64 || a[i][j] == 42 && a[i][j + 4] == 64) {
					a[i][j] = 32;
					a[i][j + 3] = 32;
					a[i][j + 4] = 32;
					a[i - 1][j + 3] = 32;
					a[i + 1][j + 4] = 32;
					a[i + 1][j + 3] = 32;
					a[i - 1][j + 4] = 32;
					sum++;
				}
				if (a[i][j] == 42 && a[i][j + 5] == 64 || a[i][j] == 42 && a[i][j + 6] == 64) {
					a[i][j] = 32;
					a[i][j + 5] = 32;
					a[i][j + 6] = 32;
					a[i - 1][j + 5] = 32;
					a[i + 1][j + 6] = 32;
					a[i + 1][j + 5] = 32;
					a[i - 1][j + 6] = 32;
					sum++;
				}
				if (a[i][j] == 42 && a[i][j + 7] == 64 || a[i][j] == 42 && a[i][j + 8] == 64) {
					a[i][j] = 32;
					a[i][j + 7] = 32;
					a[i][j + 8] = 32;
					a[i - 1][j + 7] = 32;
					a[i + 1][j - +8] = 32;
					a[i + 1][j + 7] = 32;
					a[i - 1][j + 8] = 32;
					sum++;
				}
				if (a[i][j] == 42 && a[i][j - 1] == 63 || a[i][j] == 42 && a[i][j - 2] == 63) {
					a[i][j] = 32;
					a[i][j - 1] = 32;
					a[i][j - 2] = 32;
					a[i - 1][j - 1] = 32;
					a[i + 1][j - 2] = 32;
					a[i + 1][j] = 32;
					a[i - 1][j] = 32;
					sum++;
					rhks += 5;
				}
				if (a[i][j] == 42 && a[i][j + 1] == 63 || a[i][j] == 42 && a[i][j + 2] == 63) {
					a[i][j] = 32;
					a[i][j + 1] = 32;
					a[i][j + 2] = 32;
					a[i - 1][j + 1] = 32;
					a[i + 1][j + 2] = 32;
					a[i + 1][j + 1] = 32;
					a[i - 1][j + 2] = 32;
					sum++;
					rhks += 5;
				}
				if (a[i][j] == 42 && a[i][j + 3] == 63 || a[i][j] == 42 && a[i][j + 4] == 63) {
					a[i][j] = 32;
					a[i][j + 3] = 32;
					a[i][j + 4] = 32;
					a[i - 1][j + 3] = 32;
					a[i + 1][j + 4] = 32;
					a[i + 1][j + 3] = 32;
					a[i - 1][j + 4] = 32;
					sum++;
					rhks += 5;
				}
				if (a[i][j] == 42 && a[i][j + 5] == 63 || a[i][j] == 42 && a[i][j + 6] == 63) {
					a[i][j] = 32;
					a[i][j + 5] = 32;
					a[i][j + 6] = 32;
					a[i - 1][j + 5] = 32;
					a[i + 1][j + 6] = 32;
					a[i + 1][j + 5] = 32;
					a[i - 1][j + 6] = 32;
					sum++;
					rhks += 5;
				}
				if (a[i][j] == 42 && a[i][j + 7] == 63 || a[i][j] == 42 && a[i][j + 8] == 63) {
					a[i][j] = 32;
					a[i][j + 7] = 32;
					a[i][j + 8] = 32;
					a[i - 1][j + 7] = 32;
					a[i + 1][j + 8] = 32;
					a[i + 1][j + 7] = 32;
					a[i - 1][j + 8] = 32;
					sum++;
					rhks += 5;
				}
				if (a[i][j] == 42 && a[i][j - 1] == 92 || a[i][j] == 42 && a[i][j - 2] == 92) {
					a[i][j] = 32;
					a[i][j - 1] = 32;
					a[i][j - 2] = 32;
					a[i - 1][j - 1] = 32;
					a[i + 1][j - 2] = 32;
					a[i + 1][j] = 32;
					a[i - 1][j] = 32;
					sum++;
					bob += 5;
				}
				if (a[i][j] == 42 && a[i][j + 1] == 92 || a[i][j] == 42 && a[i][j + 2] == 92) {
					a[i][j] = 32;
					a[i][j + 1] = 32;
					a[i][j + 2] = 32;
					a[i - 1][j + 1] = 32;
					a[i + 1][j + 2] = 32;
					a[i + 1][j + 1] = 32;
					a[i - 1][j + 2] = 32;
					sum++;
					bob += 5;
				}
				if (a[i][j] == 42 && a[i][j + 3] == 92 || a[i][j] == 42 && a[i][j + 4] == 92) {
					a[i][j] = 32;
					a[i][j + 3] = 32;
					a[i][j + 4] = 32;
					a[i - 1][j + 3] = 32;
					a[i + 1][j + 4] = 32;
					a[i + 1][j + 3] = 32;
					a[i - 1][j + 4] = 32;
					sum++;
					bob += 5;
				}
				if (a[i][j] == 42 && a[i][j + 5] == 64 || a[i][j] == 42 && a[i][j + 6] == 64) {
					a[i][j] = 32;
					a[i][j + 5] = 32;
					a[i][j + 6] = 32;
					a[i - 1][j + 5] = 32;
					a[i + 1][j + 6] = 32;
					a[i + 1][j + 5] = 32;
					a[i - 1][j + 6] = 32;
					sum++;
					bob += 5;
				}
				if (a[i][j] == 42 && a[i][j + 7] == 92 || a[i][j] == 42 && a[i][j + 8] == 92) {
					a[i][j] = 32;
					a[i][j + 7] = 32;
					a[i][j + 8] = 32;
					a[i - 1][j + 7] = 32;
					a[i + 1][j + 8] = 32;
					a[i + 1][j + 7] = 32;
					a[i - 1][j + 8] = 32;
					sum++;
					bob += 5;
				}
			}
		}
		for (int i = 0; i < 30; i++) {//����
			for (int j = 0; j < 175; j++) {
				if (a[i][j] == 81 && a[i][j - 1] == 62 || a[i][j] == 81 && a[i][j - 1] == 61) {
					hart--;
					a[i][j - 1] = 32;
				}
				else if (a[i][j] == 81 && a[i][j - 1] == 42) {
					hart -= 3;
					a[i][j - 1] = 32;
				}
			}
		}
	}
}
	unsigned _stdcall ��(void* arg){
	int z[10] = {"GAME OVER"};
	while (1) {
		Gotxy(1, 1);
		printf("���� : %d", sum);
		Gotxy(1, 100);
		printf("���� ü�� : %4d\t����ź : %4d\t����ź : %4d\n",hart,bob, rhks);
		for (int i = 0; i < 30; i++) {
			for (int j = 0; j < 174; j++) {
				printf("%c", a[0+i][j]);
			}
			printf("\n");
		}
		for (int i = 0; i < 30; i++) {//���ṳ
			for (int j = 0; j < 175; j++) {
				if (a[i][j] == 48 && a[i][j + 1] == 64 || a[i][j] == 48 && a[i][j + 1] == 63|| a[i][j] == 48&& a[i][j + 1] == 68 || a[i][j] == 48 && a[i][j + 1] == 92 || a[i][j] == 48 && a[i][j + 2] == 68) {
					for (int a12 = 0; a12 <= 5; a12++) {
						system("cls");
						Gotxy(20, 90);
						printf("GAME OVER");
						Gotxy(30, 175);
						printf("���� : %d", sum);
						Gotxy(40, 1);
						printf("%d�� �� ���� �˴ϴ�.", 5 - a12);
						Sleep(1000);
					}
					exit(0);
				}
			}
		}
		
	}
}
unsigned _stdcall s_move1(void* arg) {
	int temp;
	int aaa= 100;
	while (1) {
		aaa = aaa - sum / 10;
		if (aaa < 20) {
			aaa = 20;
		}
		Sleep(aaa);
		for (int i = 0; i < 30; i++) {
			for (int j = 0; j <= 175; j++) {
				if (a[i][j+1] == 68 && a[i][j] == 48) {
					system("cls");
					Gotxy(20, 90);
					printf("GAME OVER");
					Gotxy(30, 175);
					printf("���� : %d", sum);
					Gotxy(40, 1);
					exit(0);
				}
				else if (a[i][j] == 68) {
					a[i][j-1] = 32;
					a[i][j - 1] = 68;
					a[i][j] = 32;
				}
			}
		}
		
	}
}
unsigned _stdcall ��1(void* arg) {//�Ѿ�
	int aa;
	int wkd = rand() % 30;
	int ae;
	int wet;
	int boss;
	int a546 = 0;
	int a645 = 0;
	while (1) {
		if (hart == 0) {
			ae = 1000 - sum;
			if (ae < 100) {
				ae = 100;
			}
			Sleep(ae);
		re:
			wkd = rand() % 30;//��ֹ� ����
			if (wkd <= 4) {//��ֹ� ��ġ ����
				goto re;
			}
			aa = rand() % 30;
			if (aa == 1) {//����
				a[wkd][174] = 92;
			}
			else if (aa >= 2 && aa <= 5) {//����
				a[wkd][174] = 63;
			}
			else {//�⺻, �, ū �⺻ 
				wet = rand() % 50;
				if (wet >= 0 && wet <= 2) {
					a[wkd][150] = 68;
				}
				else if (wet > 5 && wet <= 10) {
					a[wkd][172] = 64;
					a[wkd][173] = 64;
					a[wkd][174] = 64;
					a[wkd + 1][172] = 64;
					a[wkd + 1][173] = 64;
					a[wkd + 1][174] = 64;
					a[wkd - 1][172] = 64;
					a[wkd - 1][173] = 64;
					a[wkd - 1][174] = 64;
				}
				else {
					a[wkd][174] = 64;
				}
			}
		}
		else if (hart != 0) {
			ae = 5000 - sum;
			if (ae < 100) {
				ae = 100;
			}
			Sleep(ae);
			boss = rand() % 5;
			switch (boss)
			{
			case 0:
				re2:
				wet = rand() % 50;
				if (wet >= 25) {
					goto re2;
				}
				for (int i = 0; i < 5; i++) {
					a[wet+i][150] = 68;
				}
				break;
			case 1:
			re3:
				wet = rand() % 50;
				if (wet >= 25) {
					goto re3;
				}
				for (int i = 0; i < 5; i++) {
					a[wet+i][150] = 68;
				}
				break;
			case 2:
				for (int i = 5; i < 30; i++) {
					if (i % 2 == 0) {
						a[i][150] = 64;
					}
				}
				break;
			case 3:
				a546++;
				if (a[29][170] == 81) {
					a546--;
					break;
				}
				for (int i = 0; i < 30; i++) {
					for (int j = 0; j < 175; j++) {
						if (a[i][j] == 81) {
							a[i][j] = 32;
						}
					}
				}
				a[13+ a546- a645][170] = 81;
				a[13+a546 - a645][171] = 81;
				a[14+a546 - a645][172] = 81;
				a[15 + a546 - a645][172] = 81;
				a[16 + a546 - a645][172] = 81;
				a[14 + a546 - a645][171] = 81;
				a[15 + a546 - a645][171] = 81;
				a[16 + a546 - a645][171] = 81;
				a[14 + a546 - a645][170] = 81;
				a[16 + a546 - a645][170] = 81;
				a[17 + a546 - a645][170] = 81;
				a[17 + a546 - a645][171] = 81;
				break;
			case 4:
				a645++;
				if (a[29][170]==81) {
					a645--;
					break;
				}
				for (int i = 0; i < 30; i++) {
					for (int j = 0; j < 175; j++) {
						if (a[i][j] == 81) {
							a[i][j] = 32;
						}
					}
				}
				a[13 + a546 - a645][170] = 81;
				a[13 + a546 - a645][171] = 81;
				a[14 + a546 - a645][172] = 81;
				a[15 + a546 - a645][172] = 81;
				a[16 + a546 - a645][172] = 81;
				a[14 + a546 - a645][171] = 81;
				a[15 + a546 - a645][171] = 81;
				a[16 + a546 - a645][171] = 81;
				a[14 + a546 - a645][170] = 81;
				a[16 + a546 - a645][170] = 81;
				a[17 + a546 - a645][170] = 81;
				a[17 + a546 - a645][171] = 81;
				break;
			}
		}
	}
}
unsigned _stdcall boss_mod1(void* arg) {
	while (1) {
		for (int i = 0; i < 30; i++) {
			for (int j = 0; j < 175; j++) {
				if (a[i][j] == 81&& a[i][j+2]!= 32) {
					a[i][j+2] = 32;
				}
			}
		}
	}
}
unsigned _stdcall boss_mod(void* arg) {
	while (1) {
		if (sum % 300 == 0 && hart == 0) {
			for (int i = 0; i < 30; i++) {
				for (int j = 0; j < 175; j++) {
					if (a[i][j] == 92||a[i][j] == 63||a[i][j] == 64|| a[i][j] == 68) {
						a[i][j] = 32;
					}
				}
			}
			hart = sum;
			a[13][170] = 81;
			a[13][171] = 81;
			a[14][172] = 81;
			a[15][172] = 81;
			a[16][172] = 81;
			a[14][171] = 81;
			a[15][171] = 81;
			a[16][171] = 81;
			a[14][170] = 81;
			a[16][170] = 81;
			a[17][170] = 81;
			a[17][171] = 81;
		}
		if (hart < 0) {
			for (int i = 0; i < 30; i++) {
				for (int j = 0; j < 175; j++) {
					if (a[i][j] == 48 || a[16][170] == 45 ) {
						continue;
					}
					else {
						a[i][j] = 32;
					}
				}
			}
			hart = 0;
			sum += 100;
		}
	}
}
unsigned _stdcall move_��ֹ�(void* arg) {
	int temp = 0;
	int count = 0;
	while (1) {
		Sleep(50);
		for (int i = 0; i < 30; i++) {//�Ѿ� �̵�
			for (int j = 0; j < 175; j++) {
				if (a[i][174] == 62|| a[i][174] == 42|| a[i][174] == 61) {
					a[i][174] = 32;
				}
				if (a[i][j] == 62|| a[i][j] == 42|| a[i][j] == 61) {
					count++;
					if (count == 2) {
						count = 0;
						continue;
					}
					temp = a[i][j];
					a[i][j] = a[i][j + 1];
					a[i][j + 1] = temp;
				}
			}
		}
	}
}
void key_sel(void) {
	int a;
	system("cls");
	printf(" ���� ����\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t0000000000\n");
	printf("\t\t\t\t\t\t\t\t\t\t   000\n");
	printf("\t\t\t\t\t\t\t\t\t0	 00000000\n");
	printf("\t\t\t\t\t\t\t\t\t0000000000000000000\n");
	printf("\t\t\t\t\t\t\t\t\t0	 00000000��\n\n");
	printf("\t\t\t\t\t\t�������� �۱� �Դϴ�. ��ֹ��� �ε����� �ʰ� �Ѱ� �̵����� ��� ��������.\n\n\n\n");
	printf("\t��: ���� ��ĭ �ö󰩴ϴ�.\t");
	printf("��: ���� ��ĭ �ö󰩴ϴ�.\t");
	printf("�����̽���: ������ �մϴ�.\t");
	printf("Z : �Ѿ��� ����ź���� �����մϴ�.\t");
	printf("X : �Ѿ��� ����ź���� �����մϴ�.\n\n");
	printf("\t\t\t\t\t\t\t\t\tesc : ������ ���� �����մϴ�.\n\n\n");
	printf("\t@ : �⺻ ��ֹ��Դϴ�.\t");
	printf("D : ��Դϴ�. �⺻ ������ ������ �ʽ��ϴ�.\t");
	printf("> : ���ݽ� ������ �Ѿ� �Դϴ�.\t");
	printf("? : �����ҽ� ����ź 5���� �߰��˴ϴ�.\t");
	printf("\\ : �����ҽ� ����ź 5���� �߰��˴ϴ�.\n\n\n");
	printf("\t\t\t* : ����ź�� �Ѿ� �Դϴ�.\t");
	printf("= : ����ź�� �Ѿ� �Դϴ�.\t");
	printf("0 : ��⸦ �����ϴ� �����Դϴ�. ��ֹ��� �ε����� �ʰ� �����ϼ���\n"); 
	Gotxy(30, 50);
	printf("���ش� ������ ��üȭ�鸸 �����մϴ�. ���� ������ ��üȭ���� ���ֽñ� �ٶ��ϴ�.��");
	Gotxy(32, 50);
	printf("�ƹ�Ű�� ���� �� ���͸� ������ ������ ���۵˴ϴ�. : ");
	scanf("%d", &a);
}
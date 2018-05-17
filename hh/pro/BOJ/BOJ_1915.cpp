/*
	�� Ǯ�̿� ������ �� Ʋ���� �Ⱥ��� ����,

	map �ȿ� 1�ε� ���� ū ���簢���� ���̸� ã�� ����

	���� ���� (i,j)�� ������ �ؿ� ���̶� �����ϰ� �ִ� ���̸� dp�� �־���.
	�ִ� ���� ���ϴ� ����� (i-1, j-1)�� ä���� �ְ� ������ �κ��� 1�� ����ä���������� dp[i-1][j-1]�� +1�� �ߴ�.
	�������� ���� ������ �κ��� 0�� ���� �־ (i,j)�� 1�� �ƴ� ���̽��� �ִ�.

	���� ���,

	1110
	1111
	1111
	1111

	���� ������ �� �� �κ� dp�� ���ܰ� ���.

*/

#include <stdio.h>
#include <math.h>

int map[1001][1001];
int dp[1001][1001];
int N, M;
int ret = 0;

int min(int a, int b)
{
	if (a < b)
		return a;
	else
		return b;
}

int main()
{
	int i, j, k;
	char temp;
	freopen("input.txt", "r", stdin);
	scanf("%d %d", &N, &M);
	scanf("\n");
	for (i = 1; i <= N; i++)
	{
		for (j = 1; j <= M; j++)
		{
			
			scanf("%c", &temp);
			map[i][j] = temp - '0';
		}
		scanf("\n");
	}

	for (i = 1; i <= N; i++)
	{
		for (j = 1; j <= M; j++)
		{
			if (map[i][j] != 0)
			{
				int temp = min(dp[i - 1][j - 1], dp[i - 1][j]);
				dp[i][j] = min(temp, dp[i][j - 1]) + 1;

				if (ret < dp[i][j]) {
					ret = dp[i][j];
				}
			}
		}
	}

	printf("%d", ret*ret);

}
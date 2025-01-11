/*
	 |--(1)--(3)    
	(0)      |
	 |--(2)--(4)
*/

#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
#define MAX 100

int ae(int adj[MAX][MAX],int u ,int v)
{
	adj[u][v]=1;
	adj[v][u]=1;	
}

void bsf(int adj[MAX][MAX],int V,int s)
{
	int q[MAX],front=0,rear=0;

	bool visited[MAX] = {false};

		visited[s] = true; // 1
	//	printf("%d",visited[s]);
	
		q[rear++] = s;     // 1

			while(front<rear)
			{
				int curr = q[front++];
					printf("%d",curr);

				for(int i=0; i<=V; i++)
				{
					if(adj[curr][i] == 1 && !visited[i])
					{
						visited[i]=true;
						q[rear++]=i;
					}
				}
			}

}

int main()
{
	int V=4,i,j;
	
	int adj[MAX][MAX]={0};
	
	ae(adj,0,1);
	ae(adj,0,2);
	ae(adj,1,3);
	ae(adj,1,4);
	ae(adj,2,4);
	
	
	/*for(i=0; i<=V; i++)
	{
		for(j=0; j<=V; j++)
		{
			printf("%d ",adj[i][j]);
		}
		printf("\n");
	}*/
	bsf(adj,V,0);
}

// BIJON SAHA DURJOY
//    SUST_SWE_19
#include <bits/stdc++.h>
#define ll long long
#define N 510
#define INF 1e9 + 10
using namespace std;

int dist[N][N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
            {
                dist[i][j] = 0;
            }
            else
            {
                dist[i][j] = INF;
            }
        }
    }

    // input
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y, wt;
        cin >> x >> y >> wt;
        dist[x][y] = wt;
    }
    
    // floyed warshall algorithm
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if(dist[i][k] != INF and dist[k][j] != INF)
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
    //output 
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (dist[i][j] == INF)
            {
                cout << "I ";
            }
            else
            {
                cout << dist[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
        

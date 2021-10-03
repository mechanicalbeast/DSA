int min(int a,int b){
    return (a<b)?a:b;
}
int permutationCoeff(int n, int k)
{
    int P[n + 1][k + 1];
 
    // Calculate value of Permutation
    // Coefficient in bottom up manner
    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= min(i, k); j++){
            if (j == 0)
                P[i][j] = 1;
 
            else
                P[i][j] = P[i - 1][j] + (j * P[i - 1][j - 1]);
            //important case
            P[i][j + 1] = 0;
        }
    }
    return P[n][k];
}

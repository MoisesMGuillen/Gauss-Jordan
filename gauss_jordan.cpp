#include<iostream>
using namespace std;

void llenamatriz(long double a[][50],long double C[][1],int n){
    printf("Introduce los valores de la matriz\n");
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            scanf("%Lf",&a[i][j]);
        }
    }
    printf("Introduce los valores del vector de terminos independientes\n");
        for(int j=0;j<n;++j){
            scanf("%Lf",&C[j][0]);
        }
}

void mostrarMatrices(long double a[][50],long double C[][1],int n){
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            printf("%.2Lf ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nVector de terminos independientes\n");
    for(int j=0;j<n;++j){
            printf("%.2Lf\n",C[j][0]);
        }
}

void productoRenglones(long double c,int j,long double a[][50],long double C[][1],int n){
    for(int i=0;i<n;++i){
        a[j][i]=a[j][i]*c;
    }
    C[j][0] = C[j][0]*c;
}

void sumatoria(long double c,int j,int k,long double a[][50],long double C[][1],int n){
    for(int i=0;i<n;++i){
        a[j][i]=a[j][i] + c*a[k][i];
    }
    C[j][0] = C[j][0] + c*C[k][0];
}

int main(){
    int n;
    printf("Introduce el tamaño de la matriz: ");
    scanf("%d",&n);
    long double a[50][50];
    long double C[50][1];
    llenamatriz(a,C,n);

    for(int i=0;i<n;++i){
                productoRenglones( (1/(a[i][i])),i,a,C,n );
        for(int j=i+1;j<n;++j){
                sumatoria((-1*a[j][i]),j,i,a,C,n);
        }
    }

    for(int i=n-1;i>0;--i){
        for(int j=i-1;j>=0;--j){
            sumatoria((-1*a[j][i]),j,i,a,C,n);
        }
    }
    printf("\n\n\nEstos son los resultados\n\n");
    mostrarMatrices(a,C,n);
}

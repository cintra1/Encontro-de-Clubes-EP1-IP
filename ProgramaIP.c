/*********************************************************************/
/**   ACH2001 - Introducao a Programação                            **/
/**   EACH-USP - Primeiro Semestre de 2022                          **/
/**   Turma 02 - Prof. Marcos Lordello Chaim                        **/
/**                                                                 **/
/**   Primeiro Exercicio-Programa                                   **/
/**                                                                 **/
/**   Mateus Freitas Cintra                     14597677            **/
/**                                                                 **/
/*********************************************************************/
#include <stdio.h>
#include <stdlib.h>

// Adicione funções auxiliares se for necessárioz
int diasTotais;

int verificaDataValida(int d, int m, int a) {
  // Adicione seu código
  if(m>=1 && m<=12){
  if((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)){
   if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
     if(d>=1 && d<=31){
       printf("Data de inicio do ano letivo: %d/%d/%d", d,m,a);
       printf("\nProximos dias de encontro de todos os clubes:");
       return 1;
     }
   } else if(m == 2){
     if(d>=1 && d<=29){
       printf("Data de inicio do ano letivo: %d/%d/%d", d,m,a);
      printf("\nProximos dias de encontro de todos os clubes:");
       return 1;
     }
   } else {
     if(d>=1 && d<=30){
       printf("Data de inicio do ano letivo: %d/%d/%d", d,m,a);
      printf("\nProximos dias de encontro de todos os clubes:");
       return 1;
     }
   }
  } else {
    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
     if(d>=1 && d<=31){
       printf("Data de inicio do ano letivo: %d/%d/%d", d,m,a);
      printf("\nProximos dias de encontro de todos os clubes:");
       return 1;
     }
   } else if(m == 2){
     if(d>=1 && d<=28){
       printf("Data de inicio do ano letivo: %d/%d/%d", d,m,a);
      printf("\nProximos dias de encontro de todos os clubes:");
       return 1;
     }
   } else {
     if(d>=1 && d<=30){
       printf("Data de inicio do ano letivo: %d/%d/%d", d,m,a);
       printf("\nProximos dias de encontro de todos os clubes:");
       return 1;
     }
   }
  }
  }
  return 0;
}

int transformaDias(int d, int m, int a){
  if((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)){
    if(m == 1){
      diasTotais = (d);
      return diasTotais;
    }else if(m == 2){
      diasTotais = (d + 31);
      return diasTotais;
    }else if(m == 3){
      diasTotais = (d + 29 + 31);
      return diasTotais;
    }else if(m == 4){
      diasTotais = (d + 31 + 29 + 31);
      return diasTotais;
    }else if(m == 5){
      diasTotais = (d + 30 + 31 + 29 + 31);
      return diasTotais;
    }else if(m == 6){
      diasTotais = (d + 31 + 30 + 31 + 29 + 31);
      return diasTotais;
    }else if(m == 7){
      diasTotais = (d + 30 + 31 + 30 + 31 + 29 + 31);
      return diasTotais;
    }else if(m == 8){
      diasTotais = (d + 31 + 30 + 31 + 30 + 31 + 29 + 31);
      return diasTotais;
    }else if(m == 9){
       diasTotais = (d + 31 + 30 + 30 + 31 + 30 + 31 + 29 + 31);
      return diasTotais;
    }else if(m == 10){
       diasTotais = (d + 30 + 31 + 31 + 30 + 31 + 30 + 31 + 29 + 31);
      return diasTotais;
    }else if(m == 11){
      diasTotais = (d + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31 + 29 + 31);
      return diasTotais;
    }else if(m == 12){
      diasTotais = (d + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31 + 29 + 31);
      return diasTotais;
    }
  } else {
     if(m == 1){
      diasTotais = (d);
      return diasTotais;
    }else if(m == 2){
      diasTotais = (d + 31);
      return diasTotais;
    }else if(m == 3){
      diasTotais = (d + 28 + 31);
      return diasTotais;
    }else if(m == 4){
      diasTotais = (d + 31 + 28 + 31);
      return diasTotais;
    }else if(m == 5){
      diasTotais = (d + 30 + 31 + 28 + 31);
      return diasTotais;
    }else if(m == 6){
      diasTotais = (d + 31 + 30 + 31 + 28 + 31);
      return diasTotais;
    }else if(m == 7){
      diasTotais = (d + 30 + 31 + 30 + 31 + 28 + 31);
      return diasTotais;
    }else if(m == 8){
      diasTotais = (d + 31 + 30 + 31 + 30 + 31 + 28 + 31);
      return diasTotais;
    }else if(m == 9){
       diasTotais = (d + 31 + 31 + 30 + 31 + 30 + 31 + 28 + 31);
      return diasTotais;
    }else if(m == 10){
       diasTotais = (d + 30 + 31 + 31 + 30 + 31 + 30 + 31 + 28 + 31);
      return diasTotais;
    }else if(m == 11){
      diasTotais = (d + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31 + 28 + 31);
      return diasTotais;
    }else if(m == 12){
      diasTotais = (d + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31 + 28 + 31);
      return diasTotais;
    }
  }
}

void converterDiasNormal(int n, int *meses, int *diaDoAno) {
    int diasPorMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total = n;
    int i = 0;

    while (total > diasPorMes[i]) {
        total -= diasPorMes[i];
        i++;
    }

    *meses = i + 1; 
    *diaDoAno = total;
}

void converterDiasBin(int n, int *meses, int *diaDoAno) {
    int diasPorMes[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total = n;
    int i = 0;

    while (total > diasPorMes[i]) {
        total -= diasPorMes[i];
        i++;
    }

    *meses = i + 1; 
    *diaDoAno = total;
}

void calculaDatas(int d, int m, int a){
  int mmc = 60;
  int aux = transformaDias(d, m, a);
  int meses,diaDoAno;

  if((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)){
    while(aux<=306){
      aux += 60;
      converterDiasBin(aux, &meses, &diaDoAno);
      printf("\n%d/%d/%d", diaDoAno, meses, a);
    }
  } else {
     while(aux<=305){
       aux += 60;
      converterDiasNormal(aux, &meses, &diaDoAno);
      printf("\n%d/%d/%d", diaDoAno, meses, a);
    }
  }
} 

int main() {
    int dia, mes, ano;

    printf("Entre com a data de inicio do ano letivo:\n");
    printf("Entre com o dia: ");
    scanf("%d", &dia);
    printf("Entre com o mes: ");
    scanf("%d", &mes);
    printf("Entre com o ano: ");
    scanf("%d", &ano);

    if(!verificaDataValida(dia, mes, ano))
      {
        printf("Dados incorretos\n");
        exit(1); // Esta função aborta a execução do programa.
      }

    calculaDatas(dia, mes, ano);

   // Adicione seu código

  } 

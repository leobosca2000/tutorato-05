/***********************************************************************
 * 
 * TUTORATO 5: Funzioni
 * ====================
 * 
 *
 * Primo esercizio: calcolo della probabilita` di k teste su n monete
 * ------------------------------------------------------------------
 *
 * 1) Completa il file inserendo il corpo delle funzioni.
 * 
 * 2) Compila il programma con il comando:
 * 
 *      gcc -Wall -o monete monete.c
 *    
 * 3) Esegui il programma digitando al terminale:
 * 
 *      ./monete
 *
 * 4) Verifica la correttezza del programma con il comando:
 *     
 *      ./pvcheck ./monete
 *
 *    Se i test hanno rilevato errori cerca di capirne
 *    la causa, correggi il problema e riprova finche' il programma
 *    non passa tutti i test.
 * 
 ***********************************************************************/

#include <stdio.h>
#include <stdlib.h>

/* Calcola a elevato alla b. */
int potenza(int b)
 {
  /* Completa la funzione con la lettura dei dati e il calcolo della potenza . */
    int p=1;
    int i;
 
 if(b!=0){
        for(i=0 ; i<b ; i++){
        p= p*2;
        
     }
  }

    return p;
}   
/* Completa la funzione. */


/* Calcola n! */
int fattoriale(int n)
{
    int i;
    int f;
    
    f=1;
    i=1;
    while(i <=n){
    f *=i;
    ++i;
  }
    return f;
}/* Completa la funzione. */



/* Calcola il coefficiente binomiale `n su k'. */
int coeff_binomiale(int n, int k)
{
  int cb;
  
  cb= fattoriale(n);
  cb= cb/ (fattoriale(k) * fattoriale(n-k));
 
  return cb;
  /* Completa la funzione. */
}


/* Calcola la probabilita di ottenere k volte testa lanciando n
   monete. */
double calcola_probabilita(int n, int k)
{
  /* Completa la funzione. */
 double pr;
 pr= ((double)coeff_binomiale(n,k)) / potenza(n);
return pr; 
}


/* Funzione principale */
int main()
{
  int monete;
  int teste;
  
  /* Lettura dei dati. */
  printf("Inserire il numero delle monete: ");
  scanf("%d", &monete);
  printf("Inserire il numero di teste: ");
  scanf("%d", &teste);



  printf("[COEFFICIENTE_BINOMIALE]\n");
  /* 1) Calcola e stampa il coefficiente binomiale */
    printf("%d\n", coeff_binomiale(monete, teste));
  printf("[PROBABILITA]\n");
  /* 2) Calcola e stampa la probabilita` richiesta. */
    printf("%lf\n", calcola_probabilita(monete, teste));

  return 0;
  
  }

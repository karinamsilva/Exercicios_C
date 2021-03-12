#include <stdio.h>
int main (void){
float sal=1000.00, dep, saque;
int esc;
	do{ printf("Banquinho de C\n");
			printf("-----------------------\n");
		printf("Escolha uma opcao:\n 1- Deposito\n 2- Saque\n 3- Saldo\n 4- Sair\n");
		scanf("%d",&esc);
	 switch(esc){   
		case 1: printf("Valor de deposito\n"); scanf("%f",&dep);sal+=dep;break;
	    case 2: printf("Digite o valor de saque:\n");scanf("%f", &saque);if (saque > sal) puts ("Saque nao autorizado!\n"); else sal-=saque;break;
		case 3: printf("Seu saldo: %6.3f\n",sal);break;
		case 4: printf("Saindo...\n");break;
 }

}while (esc !=4);
	return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void votar(char nombre[][20], int identificacion[], int Cantidad, int edad[]);
void resultados(char nombre[][20],  int identificacion[],int Cantidad, int edad []);
//HOLA

void menu(){
	int option = 1;
	while(option >= 1 && option < 6){
		printf("---------1. Ejercicio UNIDAD #1 -----------\n---------2. Ejercicio UNIDAD #2 -----------\n---------3. Ejercicio UNIDAD #3 -----------\n");
		printf("---------4. Ejercicio UNIDAD #4 -----------\n");
		printf("---------5. Creditos           ------------\n");
		printf("---------6. Salir              ------------\n");
		printf("-------------------------------------------\n");
		printf("---------Ingrese una opcion    ------------\n");


		scanf("%d", &option);
		if (option == 1)
		{
			unidad1();
		}

		else if (option == 3)
		{
			unidad3();
       }
		else if (option == 4)
		{
			unidad4();
       }

       else if (option == 5)
		{
			creditos();
       }

       else if (option == 6)

		{

        printf("--------- FELIZ DIA            ------------\n");
		printf("--------- SALIENDO             ------------\n");
            return;
		}
	}
}

int unidad1(){

int llamado_de_atencion;
int salario;
char Bienvenido[]= "Pensando en el bienestar de los empleados vamos a darles unos descuentos, pero debes cumplir con unos requisitos";
int juntaDirect;
int TipoRango;
int Rango1;
int Rango2;

printf("%s \n", Bienvenido);

printf("%c Cantidad de llamados de atenci%cn durante los ultimos 5", 162,162);
printf("a%cos?   \n",164);
scanf("%d", &llamado_de_atencion);


if (llamado_de_atencion == 0){

printf("%c C%cal es tu salario?", 163,163);

scanf("%d", &salario);

if (salario <=500){

printf("¿ Pertenece a la junta de la empresa? \n ");
printf("1- SI     2- NO \n ");
scanf("%d", &juntaDirect);


printf("%c T%c ", 163,163);
printf("cantidad de llamados son: %d  \n", llamado_de_atencion);

printf("%c T%c ", 163,163);
printf("Salario fue: %d   \n\n\n ", salario);

if (juntaDirect == 2){

printf("FELICITACIONES,CUMPLES TODOS LOS REQUISITOS PARA EL DESCUENTO \n ");

printf("Para darte los descuentos necesitamos una pregunta mas\n ");
printf("En que rango se encuentra tu edad?\n ");
printf("Rango1: 18 a 48 a%cos \n",164);
printf("Rango2: 49 a%cos o mas \n\n  ",164);

printf("1- Rango1     2- Rango2 \n ");
scanf("%d", &TipoRango);

if (TipoRango == 1){

printf("FELICITACIONES,TIENES UN DESCUENTO DEL 15%% EN LOS PRODUCTOS QUE COMPRES PROPIOS DE LA EMPRESA  \n\n ");


                  }
else {

printf("FELICITACIONES,TIENES UN DESCUENTO DEL 20%% EN LOS PRODUCTOS QUE COMPRES PROPIOS DE LA EMPRESA  \n\n ");



    }

                      }
else {

printf("No cumples con los requisitos para el descuento, LO SENTIMOS! \n ");
printf("Perteneces a la junta Directiva de la empresa y no lo puede pertenecer\n \n ");

    }

                          }
else {

printf("No cumple con los requisitos \n ");
printf("%c T%c ", 163,163);
printf("Salario fue: %d   \n\n", salario);

    }
                  }
else {

printf("NO CUMPLES CON LOS REQUISITOS TIENES LLAMADOS DE ATENCION \n");

printf("%c T%c ", 163,163);
printf("Cantidad de llamados son: %d  \n\n", llamado_de_atencion);

     }



return 0;

           }


 void unidad3(){

printf("TAREA 3: ARREGLOS\n");
printf("BIENVENIDOS A LAS VOTACIONES DEL 2021\n");
    int Cantidad=0;
    int tam=20;
    int edad[tam];;
    char nombre[tam][20];
    int identificacion[tam];

votar(nombre, identificacion, Cantidad, edad);

 }

int votosAlcalde1 = 0;
int votosAlcalde2 = 0;
int votosComunal1 = 0;
int votosComunal2 = 0;
int votosComunal3 = 0;
int votosComunal4 = 0;
int TotalVotantes = 0;

void unidad4(){


int votosAlcalde1 = 0;
int votosAlcalde2 = 0;
int votosComunal1 = 0;
int votosComunal2 = 0;
int votosComunal3 = 0;
int votosComunal4 = 0;
int TotalVotantes = 0;

printf("TAREA 4: FUNCIONES\n");
printf("BIENVENIDOS A LAS VOTACIONES DEL 2021\n");
    int Cantidad=0;
    int tam=20;
    int edad[tam];;
    char nombre[tam][20];
    int identificacion[tam];

votar(nombre, identificacion, Cantidad, edad);

}

void votoAlcalde(){

  	int opA = 0;
	while (opA < 1 || opA > 2){
		printf("Por favor selecione entre los candidatos:\n");
		printf("1. Alcalde 1\n2. Alcalde 2\n");
		scanf("%d", &opA);
	}
	if (opA == 1)
	{
	    printf("Voto por el candidato a la Alcaldia 1: \n");
		votosAlcalde1++;
		TotalVotantes++;
	} else if (opA == 2)
	{
		printf("Voto por el candidato a la Alcaldia 2: \n");
		votosAlcalde2++;
		TotalVotantes++;
	}
}

votoComuna(){
	int opC = 0;
	while (opC< 1 || opC > 4){
		printf("Por favor selecione entre los candidatos:\n");
		printf("1. Comunal 1\n2. Comunal 2\n3. Comunal 3\n4. Comunal 4\n");
		scanf("%d", &opC);
	}
	if (opC == 1)
	{
	    printf("Voto por el candidato comunal 1: \n");
		votosComunal1 ++;

	} else if (opC == 2)
	{
	    printf("Voto por el candidato comunal 2: \n");
		votosComunal2++;

	} else if (opC == 3)
	{
	    printf("Voto por el candidato comunal 3: \n");
		votosComunal3++;


	} else if (opC == 4)
	{
	    printf("Voto por el candidato comunal 4: \n");
		votosComunal4++;

	}


	}


void votar(char nombre[][20], int identificacion[],  int Cantidad, int edad[]){


    printf("Por favor indique la cantidad de votos a registrar\n");
	scanf("%d", &Cantidad);
	printf("La cantidad de votantes es: %d\n", Cantidad);


    for (int i=0; i< Cantidad; i++) {

    printf("Por favor indique su Nombre completo\n");
	scanf("%s", &nombre[i]);

	printf("Por favor indique su identificacion\n");
	scanf("%d", &identificacion[i]);


	printf("Por favor indique su edad\n");
	scanf("%d", &edad[i]);

	if (edad [i] < 18)
	{
		printf("No puede votar por ser menor\n");
		return 0;
	} else if (edad [i] >= 25)
	{
		votoAlcalde();
		votoComuna();
	} else if (edad[i] >= 18 && edad [i] <= 24)
	{
		votoAlcalde();
	}


    }

resultados(nombre, identificacion,  Cantidad, edad);

}


void resultados(char nombre[][20], int identificacion[], int Cantidad, int edad[] ){

    printf("Los resultados fueron:\n");
	printf("Alcalde 1: %d\n", votosAlcalde1);
	printf("Alcalde 2: %d\n", votosAlcalde2);
	printf("Comunal 1: %d\n", votosComunal1);
	printf("Comunal 2: %d\n", votosComunal2);
	printf("Comunal 3: %d\n", votosComunal3);
	printf("Comunal 4: %d\n", votosComunal4);
	printf("Total Votantes: %d\n", TotalVotantes);

	for (int i=0; i< Cantidad; i++) {
	printf("Nombre: %s\n",nombre [i]);
	printf("Identificacion: %d\n",identificacion [i]);
	printf("Edad: %d\n",edad [i]);
		                              }
                                            }

credtos(){

    printf("-------------------------------------------\n");
	printf("--------------     CREDITOS    ------------\n");
	printf("-------------------------------------------\n");
    printf("------------ CRISTHIAN ANACONA MAYOR ------\n");
    printf("------------  Grupo: 243002_32     --------\n");
    printf("--------   CURSO DE PROGRAMACION   --------\n");
    printf("--------      SANTIAGO DE CALI     --------\n");
    printf("--------                           --------\n");

    return 0;
}


int main()
{
    printf("-------------------------------------------\n");
	printf("-------------- ACTIVIDAD FINAL ------------\n");
	printf("-------------------------------------------\n");

  	menu();



	return 0;
}

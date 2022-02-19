# Programming-in-C
#include<cs50.h>
#include<stdlib.h>
#include<stdio.h>
#include <time.h>
#include <string.h>
#include <math.h>  
                                     //LISTA 3
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////1
//1. Napisz funkcję int maks(int x, int y, int z) zwracająca wartość maksymalną spośród jej
//argumentów.
int maks(int x, int y, int z)
{
    if(x>y && x>z){
        printf("%i",x);
    }
    else if(y>x && y>z){
        printf("%i",y);
    }
    else{
        printf("%i",z);
    }
    return 0;
} 
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////2
//2. Napisz funkcję int KtoraCwiartka(float x,float y), która dla punktu o współrzędnych
//(x, y) zwróci wartość od 1 do 4 – numer ćwiartki układu współrzędnych, wewnątrz której leży
//ten punkt. Jeśli punkt leży na osi układu, funkcja ma zwrócić 0.
int KtoraCwiartka(float x, float y){
    if(x == 0 || y == 0)
        printf("0");
    else if(x > 0 && y > 0)
        printf("1");
    else if(x < 0 && y > 0)
        printf("2");
    else if(x < 0 && y < 0)
        printf("3");
    else
        printf("4");

return 0;
}
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////3
//3. Napisz funkcję int WarMaks (int limit), która znajdzie największą liczbę n taką, że 1 + 2 +
//. . . + n < limit.
int WarMaks (int limit){
    int a=0;
for(int i = 1; i < limit; i++){
    a +=i;
}
printf("%i\n",a);

return 0;
}
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////4
//4. Napisz funkcję long int Silnia(int limit), która znajdzie najmniejszą liczbę całkowitą n
//taką, że n! > limit.

long int Silnia(int limit)
{
    int a = 1;
    for(int i = 1;i < limit;i++){

        a *= i;
        if(a>limit)
            break;

    }
    printf("%i\n",a);

    return 0;
}
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////5
//5. Napisz funkcję long int suma(int n), która wyznaczy sumę szeregu 1 − 2 + 3 − 4 + . . . ± n.
/*
int a = 0;
long int suma(int n){

    for (int i = 1; i <= n; i++){
        if (i % 2 == 0)
        {
            a-=i;
        }
        if(i % 2 == 1)
        {
            a+=i;
        }
    }
    printf("%i\n",a);
    return 0;
}
*/
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////6
//6. Napisz funkcję long int suma(int n), która wyznaczy sumę szeregu 1!−2!+3!−4!+. . .±n!.

long int suma(int n){
long int silnia = 1;
n = 0;
    for(int i = 1; i <= n; i++)
    {
        if(n % 2 == 0)
        {
            for(int k = 1;k <= n; k++)
            {
                silnia *= k;
                n += silnia;
            }
        }
        else
        {
            for(int k = 1;k <= n; k++)
            {
            silnia *= k;
            n -= silnia;
            }

        }
    }

    return n;
}
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
//10. Napisz funkcję, która sprawdzi, czy jej argument jest liczbą pierwszą. Przy pomocy tej funkcji
//wyświetl wszystkie liczby pierwsze z zadanego przez użytkownika przedziału.
int czy_pierwsza(int x,int y)
{
    for(int i = x; i<=y;i++)
    {
        if((i%2!=0)&&(i%3!=0)&&(i%5!=0)) 
            printf("%i, ",i);
    }
    return x;
}
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

//11. Napisz funkcję, która sprawdzi, czy jej argument jest liczbą doskonałą. Liczba doskonała to
//taka, która jest równa sumie swoich dzielników właściwych (np. 6 =1+2+3). Przy pomocy tej
//funkcji wyświetl wszystkie liczby doskonałe z zadanego przez użytkownika przedziału.
long int czy_doskonala(int x,int y)
{
    int suma = 0;
    for(int j = x; j <= y;j++)
    {
        
    for (int i = 1; i < x; i++)
    {
        if(x % i == 0)
        {
            suma += i;
            
        }
    }
    }printf("%i",suma);
    return suma;
} 

/*
12. Napisz funkcję, która sprawdzi, czy jej argument jest liczbą automorficzną. Liczba automor-
ficzna to taka, która znajduje się na końcu swojego kwadratu (np. 5, 6, 25, bo 5 2 = 25, 6 2 = 36,
25 2 = 625). Przy pomocy tej funkcji wyświetl wszystkie liczby automorficzne z zadanego przez
użytkownika przedziału.
13. Napisz funkcję float suma(float x, float epsilon), która dla x z przedziału (0, 1) wy-
2
i
znaczy sumę szeregu 1 + x 1 + x 2 + . . . + x i . Sumowanie przerwij, jeśli kolejny składnik będzie
mniejszy od zadanej liczby epsilon.
14. Napisz funkcję, która dla zadanego n liczy sumę odwrotności n początkowych liczb trójkątnych.
n-ta liczba trójkątna to liczba postaci 1 + 2 + 3 + . . . + n.
15. Napisz funkcję, która dla argumentów całkowitych n oraz q zwróci sumę n elementów ciągu
geometrycznego o wyrazie początkowym 1 i zadanym ilorazie q.
16. Napisz funkcję, która dla dwóch argumentów całkowitych a oraz b zwróci średnią arytmetyczną
wszystkich liczb całkowitych z przedziału (a, b).
*/
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
 int main(){

                                         //LISTA 4

    /*
    1. Stwórz tablicę int tab1[20] zbudowaną z losowych liczb z zakresu [-5;5], a następnie do 
    tab2[20] wpisz wartości bezwzględne elementów tablicy pierwszej.
    */
    /*
    srand( time( NULL ) );
    const int wielkosc = 20;
    printf("\n");
    int tab1[wielkosc];
    int tab2[wielkosc];
    for(int i =0;i <=19;i++)
    {
        tab1[i] = (( rand() % 11 ) - 5 );
        printf(" %i ",tab1[i]);        
    }
    printf("\n");
    for(int i =0;i<=19;i++)
    {
        if(tab1[i]<0) tab1[i]*=(-1);
       tab2[i] = tab1[i];
       printf(" %i " ,tab2[i]);
    }
*/
    /*
    2. Stwórz dwie tablice int tab1[10] i int tab2[10] zbudowane z losowych liczb z zakresu 
    [1,20]. Następnie wpisz do trzeciej tablicy int tab3[10] sumę odpowiednich wyrazów z 
    tab1 i tab2, tj. tab3[0]=tab1[0]+tab2[0] itp.
    */
  /*
      srand( time( NULL ) );

    int tab1[10];
    int tab2[10];
    int tab3[10];
    printf("Tablica pierwsza: ");
    for(int i = 0; i<=9;i++)
    {
        tab1[i] = (rand()%20)+1;
        printf("%i ",tab1[i]);
    }
    printf("\n");
    printf("Tablica druga: ");
    for(int i = 0; i<=9;i++)
    {
        tab2[i] = (rand()%20)+1;
        printf("%i ",tab2[i]);
    }
    printf("\n");
    printf("Suma elementów obu tablic: ");
    for(int i = 0; i<=9; i++)
    {
        tab3[i] = tab1[i] + tab2[i];
        printf("%i ",tab3[i]);
    }
*/

    /*
    3. Stwórz dwie tablice int tab1[10] i int tab2[10] zbudowane z losowych liczb z zakresu 
    [1,20]. Następnie wpisz do trzeciej tablicy int tab3[10] maksimum odpowiednich 
    wyrazów z tab1 i tab2, tj. tab3[0]=max{tab1[0];tab2[0]} itp.
    */
/*
4. Stwórz 20-elementową tablicę zbudowaną z losowych liczb nieparzystych różnych od 
zera, a następnie do kolejnej tablicy wpisz tylko te, które są podzielne przez 5. Jeśli nie 
ma takich liczb to druga tablica pozostaje wypełniona zerami.
*/
/*
int tab[20];
    srand( time( NULL ) );

printf("Pierwsza tablica: ");
for(int i = 0; i<=19;i++)
{
    int r = rand();
    if (r % 2 == 1)
    {
        tab[i] = r;
    }
    else
    {
        r+=1;
        tab[i] = r;
    }
    
    printf("%i ",tab[i]);
}
printf("\n");
int tab5[20];
printf("Druga tablica: ");
for(int i = 0; i<=19; i++)
{
    if(tab[i]%5 ==0 )
    {
        tab5[i] = tab[i];
    }
    else
    {
        tab5[i] = 0;
    }
    printf("%i ",tab5[i]);
}

*/
/*
5. Stwórz tablice 20-elementową. Wylosuj do niej dowolne liczby, a następnie wypisz 
wpierw elementy stojące na miejscach parzystych, a potem na miejscach nieparzystych. 
Wyzeruj miejsca gdzie stoją liczby parzyste. Wypisz.
*/
/*
srand( time( NULL ) );
int tab[20];
for (int i = 0; i <=19;i++)
{
    tab[i] = rand();
}
for(int i = 0; i<=19;i++)
{
    if(tab[i] % 2 == 0)
    {
        printf("%i ",tab[i]);
    }
}
printf("\n");
for(int i = 0; i<=19;i++)
{
    if(tab[i] % 2 == 1)
    {
        printf("%i ",tab[i]);
    }
}
*/

/*
6. Stwórz tablice int tab1[20], która będzie zbudowana z losowych liczb z zakresu [1,10]. 
Następnie wypisz ile jest różnych cyfr w tej tablicy, np. tab1[20]={1,2,2,2,2,1,1,5} to 
odpowiedź jest 4 bo mamy 1,2,5 i 0.
*/
/*
srand( time( NULL ) );
int tab1[20];
int number = 0;
int number1 = 0;
int number2 = 0;
int number3 = 0;
int number4 = 0;
int number5 = 0;
int number6 = 0;
int number7 = 0;
int number8 = 0;
int number9 = 0;
int number10 = 0;

for(int i = 0; i<=19; i++)
{
    tab1[i] = (rand()%10) +1;
    printf("%i ",tab1[i]);
}
printf("\n");
for(int i = 0;i<=19;i++)
{
    if(tab1[i]==1) 
    {
    number1++;
    if (number1>1)
    {
        number1 = (number1-number1)+1;
    }
    }
    if(tab1[i]==2) 
    {
    number2++;
    if (number2>1)
    {
        number2 = (number2-number2)+1;
    }
    }
    if(tab1[i]==3) 
    {
    number3++;
    if (number3>1)
    {
        number3 = (number3-number3)+1;
    }
    }
    if(tab1[i]==4) 
    {
    number4++;
    if (number4>1)
    {
        number4 = (number4-number4)+1;
    }
    }
    if(tab1[i]==5) 
    {
    number5++;
    if (number5>1)
    {
        number5 = (number5-number5)+1;
    }
    }
    if(tab1[i]==6) 
    {
    number6++;
    if (number6>1)
    {
        number6 = (number6-number6)+1;
    }
    }
    if(tab1[i]==7) 
    {
    number7++;
    if (number7>1)
    {
        number7 = (number7-number7)+1;
    }
    }
    if(tab1[i]==8) 
    {
    number8++;
    if (number8>1)
    {
        number8 = (number8-number8)+1;
    }
    }
    if(tab1[i]==9) 
    {
    number9++;
    if (number9>1)
    {
        number9 = (number9-number9)+1;
    }
    }
    if(tab1[i]==10) 
    {
    number10++;
    if (number10>1)
    {
        number10 = (number10-number10)+1;
    }
    }
}
    number =number1+number2+number3+number4+number5+number6+number7+number8+number9+number10;
        printf("%i",number);
*/


/*

7. Stwórz tablicę int tab1[20] zbudowaną z losowych liczb z zakresu [-5;5], int tab2[20] 
zbudowaną z losowych liczb z zakresu [0;5]. Następnie do dodatkowej tabeli wpisz 
wyniki potęgowania tab1[i]^tab2[i] .
*/
/*
    srand( time( NULL ) );
int tab1[20];
int tab2[20];
int tab3[20];
printf("Wyrażenia 'a': ");
for(int i = 0;i<=19;i++)
{
    tab1[i] = (( rand() % 11 ) - 5 );
    printf("%i ", tab1[i]);
}
printf("\n");
printf("Wyrażenia 'a': ");
for(int i = 0;i<=19;i++)
{
    tab2[i] = (( rand() % 6 ));
    printf("%i ", tab2[i]);
}
printf("\n");
printf("a^b: ");
for(int i = 0;i<=19;i++)
{
    tab3[i] = pow(tab1[i],tab2[i]);
    printf("%i ", tab3[i]);
}
*/

/*
Zad 1. Napisz program, który wyznacza dominantę wartości zapisanych w tablicy n
elementowej. Przetestuj program dla tablicy 20−elementowej wypełnionej losowymi liczbami ze
zbioru{1,2,3,4,6}.
*/




/*
Zad 2. Stwórz tablicę int tab1[20] zbudowaną z losowych liczb z zakresu [1,3]. A następnie
wypisz, ile jest 1, ile jest 2, ile jest 3. Wynik działania programu:
111111 – jest 6 jedynek
222 – jest 3 dwójki
33333333333 – jest 11 trójek
*/
srand( time( NULL ) );

	int tab[20];
	int l1=0;
	int l2=0;
	int l3=0;
	for (int i =0; i < 20; i++)
	{
	    tab[i] = (rand()%3)+1;
	    printf("%i, ",tab[i]);

	    if (tab[i] == 1){
	        l1++;

	    }
	        if (tab[i] == 2){
	        l2++;
	    }
	    if (tab[i] == 3){
	        l3++;

	    }

	}
	printf("\n");
	for(int i =0; i < 20; i++){
		if (tab[i] == 1) printf("1");
	}
	printf(" Jedynek jest: %i",l1);

	printf("\n");
		for(int i =0; i < 20; i++){
			if (tab[i] == 2) printf("2");
		}
	printf(" Dwójek jest: %i",l2);

	printf("\n");
		for(int i =0; i < 20; i++){
			if (tab[i] == 3) printf("3");
		}
	printf(" Trójek jest: %i\n",l3);
/*
Zad 3. Stwórz dwie tablice int tab1[10] i int tab2[10]. Pierwszą tablice wypełnij
losowymi liczbami z zakresu [-5;10]. Do drugiej tablicy przepisz wyrazy z
pierwszej tablicy w odwrotnej kolejności, pierwszy element tab1 staje się ostatnim
elementem tab2, drugi element tab1 staje się przedostatnim elementem tablicy tab2
itp.
*/
/*
Zad 4. Stwórz tablice int tab[10] z losowymi liczbami, a następnie przesuń o jeden w lewo
wszystkie elementy tablicy (tak, żeby wartość elementu o indeksie n − 1 znalazła się w
elemencie o indeksie n−2, wartość elementu o indeksie n−2 znalazł się w elemencie o indeksie n
− 3, zaś wartość elementu o indeksie 0 w elemencie o indeksie n − 1)
*/
/*
Zad 5. Stwórz tablice int tab[10] z losowymi liczbami, a następnie przesuń o jeden w prawo
wszystkie elementy tablicy (tak, żeby wartość elementu o indeksie 0 znalazła się w elemencie o
indeksie 1, wartość elementu o indeksie 1 znalazła się w elemencie o indeksie 2, zaś wartość
elementu o indeksie n−1 w elemencie o indeksie 0)
*/

    //czy_doskonala(10,1000);
    //czy_pierwsza(10,200);
    //suma(10);
    //Silnia(6573);
    //WarMaks(6);
    //KtoraCwiartka(15.3,12.54);
    //maks(7,18,9);
////////////////////////////////////////////////////////////////////1
    /*
    int line = get_int("Podaj liczbe linii:\n");
    for(int i =1;i<=line;i++){
        printf("-");
    } 
    printf(\n); 
    */
////////////////////////////////////////////////////////////////////2
    /*
    int line = get_int("Podaj liczbe linii:\n");            //rysowanie linii dlugosci 
    for(int i =1;i<=line;i++){
        printf("|\n");
    } 
    */
////////////////////////////////////////////////////////////////////3
/*
    int number = get_int("Podaj liczbe a ja wypisze kolejnych 10 nieparzystych:\n");
            if(number%2==1){                    //jesli nieparzysta 10xdodawaj 2
                for(int i=0;i<10;i++){
                    number=number+2;
                    printf("%i\n",number);
                }
            }else{                              //jesli parzysta lub 0 najpierw dodaj 1 i wyswietl,a nastepnie dodawaj 9 razy liczbe 2
                number++; 
                printf("%i\n",number);
                for(int i=0;i<9;i++){
                    number=number+2;
                    printf("%i\n",number);
            }
            }
            */
////////////////////////////////////////////////////////////////////4
/*
    int number = get_int("Podaj liczbe,a ja narysuje trojkat o takiej podstawie:\n");

    for(int i = number;i > 0;i--){
        for(int j = i;j > 0;j--){
            printf(" ");
        }
        for(int k = 2 * (number-i) + 1;k > 0;k--){
            printf("*");
        }

        printf("\n");
        
    }

    printf("\n");
*/
////////////////////////////////////////////////////////////////////5
    /*
    int liczba=1;
    while(true){
    for(int i=1;i<=10;i++){
        printf("%i\n",i);
        

    }
    for(int j=10;j>=1;j--){
        printf("%i\n",j);
    }
    }
    */
////////////////////////////////////////////////////////////////////6
/*
    int number= get_int("Ile mam pobrać od Ciebie liczb:\n");
    int x=0;
    for(int i = 0;i<number;i++){
        int liczba=0;
        scanf("%i",&liczba);
    if (liczba%2==0){
        x++;
    }
    }printf("Liczb parzystych jest: %i\n",x);
*/
////////////////////////////////////////////////////////////////////7
/*
Napisz program, który wczyta od użytkownika n liczb i wypisze spośrod nich element najwięk-
szy, najmniejszy oraz ich średnią arytmetyczną (liczba całkowita dodatnia n podawana jest
przez użytkownika na początku programu).
*/
/*
    int number = get_int("Ile mam pobrać od Ciebie liczb:\n");
    float suma = 0;
    float srednia = 0;
    for(int i = 0;i<number;i++){
        int a = get_int("%i liczba :\n",i+1);
        suma+=a;
        srednia=suma/(i+1);
    }
    printf("\n");
    printf("Oto suma: %.0f\n",suma);

    
    printf("\n");
    printf("Oto srednia: %.2f\n",srednia);
*/
////////////////////////////////////////////////////////////////////8
/*
Napisz program, który wypisuje na ekran kolejne liczby całkowite (od 1 do 100) będące wielo-
krotnościami całkowitego n wczytanego na początku z klawiatury.
*/
/*
    int a = get_int("Podaj liczbę całkowitą z przedziału od 1 do 100: 'n'\n");
    int liczba=0;
    
    for(int i =1;i<=100;i++ ){
        liczba+=a;
        printf("%i - %i wielokrotność\n",liczba,i);
        if(liczba>99){
            break;
        }

    }
*/
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////9 
//Napisz program wczytujący liczby z klawiatury i kończący, gdy użytkownik wprowadzi pięć
//liczb ujemnych.
/*
int a=0;
int range=0;
    for(;;){
        float number = get_int("Podaj liczbę, program zakończy działanie, gdy użytkownik poda pięć liczb ujemnych: \n");
        if(number<0){
            range++;
        if(range==5){
            printf("Podano pięć liczb ujemnych, program kończy pracę.\n");
        break;
        }
        }
    }
    */
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////10
//Napisz program wczytujący liczby z klawiatury i kończący, gdy dwie kolejne liczby będą miały
//identyczną wartość.
/*
int a = get_int("Podaj a:\n");
int b = get_int("Podaj b:\n");

while(a!=b){
    a=b;
    scanf("%i\n",&b);
}
*/

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////11
// Napisz program, który wczytuje liczby całkowite z klawiatury aż do chwili podania liczby 0, 
//a następnie wypisuje ich iloczyn. Zero oczywiście nie jest brane pod uwagę
/*
int a = 0;
int b = 0;
int suma = 0;
int z = 0;
printf("Podawaj liczby całkowite; przeranie pracy nastąpi po wprowadzeniu drugiego 0.\n");
printf("Program zlicza wszystkie wprowadzone liczby.\n");

do{  
    scanf("%i",&a);
    suma += a;
    if(a==0){
        do{
            scanf("%i",&b);
            z += b;
        }while(b!=0);
    }

}while(a!=0);
printf("Suma wprowadzonych liczb wynosi: %i\n",suma+z);
*/
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////12
//Porgram zlicza iloczyn wszystkich liczb nieparzystych z przedziału o końcach całkowitych a i b – podanych z klawiatury.
/*
int a = get_int("Podaj początek przedziału: \n");
int b = get_int("Podaj koniec przedziału: \n");
long int iloczyn = 1;
printf("\n");
for(int i = a;i<=b;i++){
    if(i%2==1){
        printf("%i\n",i);
        iloczyn *= i;
    }
}
printf("\nIloczyn podanych liczb wynosi: %li\n",iloczyn);
*/
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////13
//13. Napisz program, który podaje najmniejszą wspólną wielokrotność podanych ////przez użytkownika dwóch liczb całkowitych.
/*
  int a = get_int("Podaj a: \n");
  int b = get_int("Podaj b: \n");
  int iloczyn = a*b;

  while(a != b)
    {
        if(a > b) {
        a -= b;
        } else {
            b -= a;
        }
    }
    printf("\nNajmniejsza wspólna wielokrotność to: %i\n",iloczyn/a);
*/
////////////////////////////////////////////////////////////////////14
/*
Napisz program, który metodą sita Eratostenesa sprawdzi, czy liczba całkowita n wczytana
z klawiatury jest liczbą pierwszą i odpowiedź wypisze na ekran.
*/
/*
    int a = get_int("Podaj liczbe naturalna, a ja powiem Ci czy to liczba pierwsza :\n");

    if(a%2==0){
        printf("Nie jest to liczba pierwsza\n");
        
    }else if(a!=3 && a%3==0){
        printf("Nie jest to liczba pierwsza\n");
    
    }else if(a!=5 && a%5==0){
        printf("Nie jest to liczba pierwsza\n");
        
    }else{
        printf("Jest to liczba pierwsza!\n");
        
    }
    */


////////////////////////////////////////////////////////////////////15.
/*
Komputer losuje liczbę całkowitą z zakresu od 0 do 1024, a użytkownik próbuje ją zgadnąć.
Komputer odpowiada „za mało”, „za dużo” lub „trafiłeś”. Gra kończy się, gdy użytkownik
zgadnie tę liczbę.
*/
/*
    srand( time( NULL ) );
    int liczba, losowa, i=0;
    losowa = rand() % 1024;
    do{
        printf("Podaj liczbe: \n");
        scanf("%i",&liczba);
        if(liczba>losowa)
        printf("Twoja liczba jest za duża, próbuj dalej! \n");
        if(liczba<losowa)
        printf("Twoja liczba jest za mała, próbuj dalej! \n");
        if(liczba == losowa)
        printf("Brawo, zgadłeś!\n Ta liczba to: %i\n",losowa);
        ++i;
    }while(liczba!=losowa);
printf("Udało Ci się za %i razem,\n GRATULUJĘ! \n",i);
system("PAUSE");
return EXIT_SUCCESS;
*/
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////16
//Napisz program, który dla wczytanej liczby naturalnej n obliczy i wypisze sumę sześcianów
//1^3+2^3+...+n^3.
/*
    int n = get_int("Podaj liczbę: \n");
    int suma = 0;
    for(int i =1 ; i<=n;i++){
        int potęga = i*i*i; 
        suma += potęga;
        printf("%i potęga: %i\n",i,potęga);
    }
    printf("Suma tych potęg to: %i\n",suma);
*/
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////17
//Użytkownik podaje a1, n i r, a program ma wypisać n początkowych wyrazów ciągu arytmetycznego
//o pierwszym wyrazie a1 i różnicy r oraz ich sumę.
/*
    int a1 = get_int("Podaj pierwszy wyraz ciągu arytmetycznego:\n");
    int r = get_int("Podaj różnicę ciągu arytmetycznego:\n");
    int n = get_int("Ile wyrazów ciągu mam zsumować?\n");
    printf("\nOto wyrazy tego ciagu:\n");

    for(int i =1; i<=n;i++){
        int wyrazy_ciagu = a1+((i-1)*r);
        printf("%i\n",wyrazy_ciagu);
    }
    int an = a1+((n-1)*r);
    int suma = ((a1+an)/2)*n;

    printf("A oto suma ciągu: %i\n",suma); 
*/

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////18
//Użytkownik podaje a1, n i q, a program ma wypisać n początkowych wyrazów 
//ciągu geometrycznego o pierwszym wyrazie a1 i ilorazie q oraz ich sumę.
/*
int a1 = get_int("Podaj pierwszy wyraz ciągu geometrycznego:\n");
    int q = get_int("Podaj iloraz ciągu geometrycznego:\n");
    int n = get_int("Ile wyrazów ciągu mam zsumować?\n");
    printf("\nOto wyrazy tego ciagu:\n");

    for(int i =1; i<=n;i++){
        int wyrazy_ciagu = a1*(pow(q,i-1));
        printf("%i\n",wyrazy_ciagu);
    }
    int an = a1*(pow(q,n-1));
    int suma = a1*((1-pow(q,n))/(1-q));

    printf("A oto suma ciągu: %i\n",suma); 
*/
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////19
//Program wczytuje 10 znaków z klawiatury, a następnie wypisuje, ile spośród nich było wielkimi
//literami, ile małymi, a ile cyframi.
/*
int range=0;
for(;;){
    char znak = get_char("Podawaj znaki:\n");

    range++;
    
    if(range == 10)
        break;
}
*/
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////20
//Program wczytuje znaki z klawiatury do chwili wczytania znaku „Z”, a następnie wypisuje, ile
//ich podano (bez końcowego znaku).
/*

        int n = 0;
        char znak;

        printf("Wprowadzaj znaki,a ja je zliczę.\nGdy wpiszesz (z), zakończę pracę programu.\n");

        do{            
            scanf("%c",&znak);
            n++;
        
        }while(znak!='z');

        printf("Koniec działania programu.\nPobrano znaków: %i\n",n/2);
*/
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////21
//Program wypisuje kolejne kody ASCII znanych Ci znaków.
/*
        for (char i = 33; i <=120;i++)
        {
            printf("%c\n",i);
        }
*/

    return 0;
 
        }

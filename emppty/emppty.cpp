#include <iostream>

using namespace std;

bool isumeric(char texto[100])
{
    int val, cont=0, comp, i, j;
    string suplente;
    char letra;

    suplente = texto;
    comp = suplente.length();
    
    int ini = 48, fin = 57;

    for (i = 0; i <= comp; i++) {
        letra = texto[i];
        val = letra;

        for (j = ini; j <= fin; j++) {
            if (val == j) {
                cont++;
            }
        }
    }

    if (comp == cont) { return true; }
    else { return false; }

	
}

int main()
{
	//variables y constantes
	int n, contador = 0, cn = 0, suma = 0, ultima_cifra = 0, cantidad;
	char escribe[100];
	cout << "\nIntroduce un numero: "; 
	cin >> escribe; 
	cout << "\n";
	
	if (isumeric(escribe)) {
		
	}
	else {
		cout << "SOLO PERIMITE NUMEROS ENTEROS";
		cout << "\n";
		return main();
	}

	n = atoi(escribe);
	
	
	
	if (n >= 100 && n <= 999)
	{
		//desarrollo del programa
		//copia de n
		cn = n;
		//saber el numero de cifras
		while (n > 0) {
			n /= 10;
			contador++;
		}

		//volver a darle a n su valor inicial
		n = cn;
		for (int i = 0; i < contador; i++) {
			ultima_cifra = n % 10;
			suma = suma + pow(1.0 * ultima_cifra, contador);
			n /= 10;
		}
		n = cn;
		if (suma == n) {
			cout << "***El numero es narcisista***" << endl;
			system("pause");
			cout << "\n \n";
			main();
		}
		else {
			cout << "***No es narcisista***\t" << endl;
			system("pause");
			cout << "\n \n";
			main();
		}
	}
	else
	{
		cout << "el numero no es valido" << endl;
		system("pause");
		cout << "\n \n";
		main();
	}
	
	
	


	return 0;
}
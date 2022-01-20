#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int A[3], B[3], C[3], respuesta, respuesta2, resultado[3], ortogonal[2], punto;
    double magnitud, angulo[3], proyeccion[3];
    char primero[] = "i", segundo[] = "j", tercero[] = "k";

    cout << "En r2 o r3" << endl;
    cin >> respuesta;

    system("CLS");

    cout << "Opciones: \n1-Producto cruz \n2-Angulo \n3-Proyeccion" << endl;
    cin >> respuesta2;
    system("CLS");

    switch(respuesta2){

        case 1:
            cout << "Escriba los numeros en A: ";

            if (respuesta == 2){

                A[2] = 0, B[2] = 0;

                for(int i = 0; i < 2; i++){
                    cin >> A[i];
                }

                cout << "Escriba los numeros en B: ";

                for(int i = 0; i < 2; i++){
                    cin >> B[i];
                }
            }

            if (respuesta == 3){

                for(int i = 0; i < 3; i++){
                    cin >> A[i];
                }

                cout << "Escriba los numeros en B: ";

                for(int i = 0; i < 3; i++){
                    cin >> B[i];
                }
            }

            cout << "A: " << A[0] << primero << ", " << A[1] << segundo << ", " << A[2] << tercero << endl;
            cout << "B: " << B[0] << primero << ", " << B[1] << segundo << ", " << B[2] << tercero << endl;

            resultado[0] = (A[1] * B[2]) - (B[1] * A[2]);
            resultado[1] = ((A[0] * B[2]) - (B[0] * A[2])) * - 1;
            resultado[2] = (A[0] * B[1]) - (B[0] * A[1]);

            cout << "\nEl resultado es: " << endl;
            cout << resultado[0] << primero << ", " << resultado[1] << segundo << ", " <<  resultado[2] << tercero << endl << endl;

            ortogonal[0] = A[0] * resultado[0] + A[1] * resultado[1] + A[2] * resultado[2];
            ortogonal[1] = (B[0] * resultado[0]) + (B[1] * resultado[1]) + (B[2] * resultado[2]);

            cout << "(" << A[0] << " * " << resultado[0] << ")" << " + " << "(" << A[1] << " * "  << resultado[1] << ")" <<  " + "  << "(" << A[2] << " * "  << resultado[2] << ")" << " = " << ortogonal[0] << endl;
            cout << "(" << B[0] << " * " << resultado[0] << ")" << " + " << "(" << B[1] << " * "  << resultado[1] << ")" <<  " + "  << "(" << B[2] << " * "  << resultado[2] << ")" << " = " << ortogonal[1] << endl;

            if(ortogonal[0] == 0 && ortogonal[1] == 0){

                cout << "\nAmbos son ortogonales" << endl;
            }

            else if(ortogonal[0] == 0){

                cout << "\nSolo el primero es ortogonal" << endl;
            }

            else if(ortogonal[1] == 0){

                cout << "\nSolo el segundo es ortogonal" << endl;
            }

            else{
                cout << "\nNinguno es ortogonal" << endl;
            }
        break;

        case 2:
            cout << "Escriba los numeros en A: ";

            if (respuesta == 2){

                A[2] = 0;

                for(int i = 0; i < 2; i++){
                    cin >> A[i];
                }
            }

            if (respuesta == 3){

                for(int i = 0; i < 3; i++){
                    cin >> A[i];
                }
            }

            magnitud = sqrt((pow(A[0], 2)) + (pow(A[1], 2)) + (pow(A[2], 2)));

            cout << "\n" << magnitud << endl;

            for(int i = 0; i < 3; i++){

                angulo[i] = acos(A[i] / magnitud);
            }

            cout << "Los angulos son: " << endl;

            for(int i = 0; i < 3; i++){

                cout << angulo[i]*180/3.1415 << endl;
            }
        break;

        case 3:
            cout << "Escriba los numeros en A: ";

            if (respuesta == 2){

                A[2] = 0, B[2] = 0;

                for(int i = 0; i < 2; i++){
                    cin >> A[i];
                }

                cout << "Escriba los numeros en B: ";

                for(int i = 0; i < 2; i++){
                    cin >> B[i];
                }
            }

            if (respuesta == 3){

                for(int i = 0; i < 3; i++){
                    cin >> A[i];
                }

                cout << "Escriba los numeros en B: ";

                for(int i = 0; i < 3; i++){
                    cin >> B[i];
                }
            }

            punto = (A[0] * B[0]) + (A[1] * B[1]) + (A[2] * B[2]);
            magnitud = sqrt((pow(B[0], 2)) + (pow(B[1], 2)) + (pow(B[2], 2)));

            for(int i = 0; i < 3; i++){

                proyeccion[i] = (punto / pow(magnitud, 2)) * B[i];
            }

            cout << "Los resultados son: " << endl;
            cout << proyeccion[0] << ", " << proyeccion[1] << ", " << proyeccion[2] << endl;

        break;
    }
}

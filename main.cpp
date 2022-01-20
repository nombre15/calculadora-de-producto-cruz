#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int A[3], B[3], C[3], respuesta, respuesta2, resultado[3], ortogonal[2], punto;
    double magnitud[2], angulo[3], proyeccion[3];
    char primero[] = "i", segundo[] = "j", tercero[] = "k";

    cout << "En r2 o r3" << endl;
    cin >> respuesta;

    system("CLS");

    cout << "Opciones: \n1-Producto cruz \n2-Angulos \n3-Proyeccion \n4-Triple producto escalar \n5-Producto escalar \n6-Angulo" << endl;
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

            magnitud[0] = sqrt((pow(A[0], 2)) + (pow(A[1], 2)) + (pow(A[2], 2)));

            cout << "\n" << magnitud << endl;

            for(int i = 0; i < 3; i++){

                angulo[i] = acos(A[i] / magnitud[0]);
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
            magnitud[0] = sqrt((pow(B[0], 2)) + (pow(B[1], 2)) + (pow(B[2], 2)));

            for(int i = 0; i < 3; i++){

                proyeccion[i] = (punto / pow(magnitud[0], 2)) * B[i];
            }

            cout << "Los resultados son: " << endl;
            cout << proyeccion[0] << ", " << proyeccion[1] << ", " << proyeccion[2] << endl;

        break;

        case 4:
            cout << "Escriba los numeros en A: ";

            if (respuesta == 3 || respuesta == 2){

                for(int i = 0; i < 3; i++){
                    cin >> A[i];
                }

                cout << "Escriba los numeros en B: ";

                for(int i = 0; i < 3; i++){
                    cin >> B[i];
                }

                cout << "Escriba los numeros en C: ";

                for(int i = 0; i < 3; i++){
                    cin >> C[i];
                }
            }

          resultado[0] = (A[0] * (B[1] * C[2] - C[1] * B[2])) - (A[1] * (B[0] * C[2] - C[0] * B[2])) + (A[2] * (B[0] * C[1] - C[0] * B[1]));

          cout << "(" << A[0] << " * " << "(" << B[1] << " * " << C[2] << " - " << C[1] << " * " << B[2] << "))" << " - " << "(" << A[1] << " * " << "(" << B[0] << " * " << C[2] << " + " << C[0] << " * " << B[2] << "))" << " + " << "(" << A[2] << " * " << "(" << B[0] << " * " << C[1] <<  " + " << C[0] << " * " << B[1] << "))" << " = " << resultado[0] << endl;
        break;

        case 5:
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

            resultado[0] = (A[0] * B[0]) + (A[1] * B[1]) + (A[2] * B[2]);

            cout << "(" << A[0] << " * " << B[0]<< ")" << " + " << "(" << A[1] << " * " << B[1] << ")" << " + " << "(" << A[2] << " * " << B[2] << ")" << " = " << resultado[0] << endl;
        break;

        case 6:
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
            magnitud[0] = sqrt((pow(A[0], 2)) + (pow(A[1], 2)) + (pow(A[2], 2)));
            magnitud[1] = sqrt((pow(B[0], 2)) + (pow(B[1], 2)) + (pow(B[2], 2)));

            angulo[0] = acos(punto / (magnitud[0] * magnitud[1]));

            cout << "punto: " << punto << "\nmagnitud 1: " << magnitud[0] << "\nmagnitud 2: " << magnitud[1] << endl;
            cout << "\n= " << angulo[0]*180/3.1415 << endl;
        break;
    }
}

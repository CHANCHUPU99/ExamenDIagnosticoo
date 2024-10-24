// ExamenDIagnosticoo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <array>
int main()
{
    using namespace std;
    std::cout << "Modulo 1";
    int edad;
    //float dinero = 0;
    cout << "edad: " + edad <<endl;
    //cout << "dinero: " + dinero << endl;
    cout << "ingresa tu edad: " << endl;
    cin >> edad;
    if(edad > 20 && edad < 40) {
        cout << "eres una persona joven" << endl;
    } else {
        cout << "no es una persona joven" << endl;
    }

    int dinero = 0;
    cout << "ingresa una cantidad de dinero" << endl;
    cin >> dinero;
    switch (dinero)
    {
       case 1:
           if(dinero == 100)
           cout << "poco dinero" << endl;
           break;
       case 2:
           if(dinero == 500)
           cout << "dinero moderado" << endl;
           break;
       case 3:
           if(dinero == 100)
           cout << "mucho dinero" << endl; 
           break;
       case 4:
           if (dinero != 100 && 500 && 100)
               cout << "dinero variado";
           break;
    
    }

    int triangleNum;
    int currentIt;
    char triangulo = '*';
    cout << "de que tamaño quieres imprimir el triangulo?" << endl;
    cin >> triangleNum;
    currentIt = triangleNum;
    for(int i = 0;i < triangleNum; i++) {
        cout << triangulo << endl;
        //for(int j = )
    }

    int triangleNumDos;
    int currentItdos;
    char triangulodos = '*';
    cout << "de que tamaño quieres imprimir el triangulo?" << endl;
    cin >> triangleNumDos;
    currentItdos = triangleNumDos;
    while (triangleNumDos < 5){
        //como hacer que la variable se le vaya sumando uno para imprimmir
        cout << triangulodos << endl;
        triangleNumDos++;
    }

    cout << "modulo doooooooooooooooooooooooooooooooooooos" << endl;
    
    /*int arrayBi[2][3] = {};
    for (int i = 0; i < 2; i++) {
        for (int c = 0; c < 3; c++) {
            arrayBi[rand()][rand()];
            cout << arrayBi[i][c] << endl;
        }
    }*/

    string hola = "Hola, como estas";
    cout << hola << endl;

    cout << "modulo treeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeees" << endl;

    cout << "modulo cuatrooooooooooooooooooooooo" << endl;
    Zombie zombie = Zombie();
    zombie.attack();
    Spider spider = Spider();
    spider.attack();
    return 0;
}
using namespace std;
int Suma(int a, int b) {
    //int sumaResult;
    //sumaResult = a + b;
    std::cout << "llamaste la funcion de suma: " << std::endl;
    return a +b;
}

int numAlCuadrado(int a) {
    cout << "llamaste la funcion de un cuadrado: " << std::endl;
    return a * a;
}

void emptyFunction() {
    cout << "llamaste a esta funcion" << endl;
}

void printRandomBiArray() {
    int arrayBi[2][3] = {};
    for (int i = 0; i < 2; i++) {
        for (int c = 0; c < 3; c++) {
            arrayBi[rand()][rand()];
            cout << arrayBi[i][c] << endl;
        }
    }

    int* ptr = arrayBi[2];
    cout <<"direccion memmoria array" << ptr << endl;
}

class Enemy {
private:
    int health;
    int maxHealth;
public:
    void setHealth(int h) {
        health = h;
    }
    
    int getHealth() {
        return health;
    }
    
    void setMaxHealth(int m) {
            maxHealth = m;
    }

    int getMaxHealth() {
        return maxHealth;
    }
    Enemy(int _Health, int _MaxHealt): health(_Health), maxHealth(_MaxHealt) {}

    Enemy() {};
    
    virtual void attack() {
        cout << "attack main" << endl;
    }
};
class Player {
private:
    PlayerVaribales playerVariables;
public:
    void setPlayerVariables(PlayerVaribales playerVariabless) {
        playerVariables = playerVariabless;
    }
    /*PlayerVaribales getPlayerVariables() {
        return playervariables;
    }*/
};

struct PlayerVaribales{
    float damage;
    float health;
    float maxHealth;
    bool isDead;
};

void getPlayerRef() {

}

class Zombie : Enemy {
private:
public:
    Zombie(){
        setHealth(30);
        setMaxHealth(30);
    }

    void attack() {
        cout << "ataque zombie" << endl;
    }
};

class Spider :Enemy {
public:
    Spider() {
        setHealth(15);
        setMaxHealth(15);
    }
    void attack() {
        cout << "ataque Spieder" << endl;
    }
};

template<typename T> T maxValue(T x, T y) {
    if (x > y) {

        cout << "el primer valor es mayor que el segundo" + x << endl;
    }
    else {
        cout<< "el segundo valor es mayor que el primero" + y << endl;
    }
}
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln

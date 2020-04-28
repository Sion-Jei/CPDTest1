#include <iostream>
#include <string>

/**
 * 
 * @param argc CAntidad de argumentos
 * @param argv Arreglo asociativo de argumentos
 * @return el codigo de salida de la ejecucion del programa
 */

int main(int argc, char** argv){
    
    //Si hay argumentos vamos a procesar
    if (argc > 1) {
        //Obtenemos el string del sujeto
        std::string sujeto(argv[1]);
        std::cout << std::endl <<"Hola " << sujeto << std::endl;
        
        return 0;
    } else {
        //Retornamos error y mostramos mensaje en la salida de error
        std::cerr << std::endl << "No hay argumentos suficientes para " << argv[0] << std::endl;
        return 1;
    }
}
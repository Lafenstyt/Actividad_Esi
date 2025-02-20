#include <iostream> // Incluimos la librería estándar para entrada y salida de datos
#include <fstream> // Incluimos la librería para manejar archivos, aunque no la usamos en este ejemplo
int main() { // Función principal del programa
char permiso; // Declaramos una variable para almacenar la respuesta del usuario
std::string datos = "Informacion sensible"; // Esta variable contiene la información que se podría mostrar
// Pedimos al usuario que confirme si desea mostrar la información
std::cout << "¿Queres mostrar la informacion? (s/n): "; // Mensaje en pantalla
std::cin >> permiso; // Guardamos la respuesta del usuario en la variable 'permiso'
// Comprobamos la respuesta del usuario
if (permiso == 's' || permiso == 'S') { // Si el usuario responde 's' o 'S'
std::cout << "Mostrando la informacion: " << datos << std::endl; // Mostramos la información
} else { // Si el usuario responde cualquier otra cosa
std::cout << "Permiso denegado. La informacion no se mostrará." << std::endl; 
}
return 0; // Terminamos la ejecución del programa
}

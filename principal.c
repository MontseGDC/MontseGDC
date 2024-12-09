#include "local.h"
void cargarDesdeBinario(char *nombreArchivo, NodoCategoria **head);
void cargarDesdeArchivoTexto(char *nombreArchivo, NodoCategoria **head);
void navegarLDL(NodoCategoria *head);


int main(int argc, char *argv[]) {

  
  if (argc < 3)
    {
    printf("Ejecutaste mal el programa\nIntentalo nuevamente\n");
    return 1;
    }

  NodoCategoria *catalogo = NULL;

  NodoArbol *arbol = NULL; // Inicializa el árbol aquí

  if (strcmp(argv[1], "t") == 0)
  {
     
    cargarDesdeArchivoTexto(argv[2], &catalogo);
  }
  else if (strcmp(argv[1], "b") == 0)
  {
    printf("No pudimos hacer esto");
    exit (1);
  }
  else
  {
    printf("Modo no reconocido.\n");
    return 1;
  }
  
  navegarLDL(catalogo);
  
  return 0;
}

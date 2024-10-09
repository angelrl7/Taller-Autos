#include <stdio.h>

#define MAX_AUTOS 5

struct venta {
    char autos[MAX_AUTOS][20]; 
    int precio[MAX_AUTOS];
};

int main() {
    struct venta ventas;
    int op;

    printf("---MENU PRINCIPAL---\n");
    printf("1. Cargar cliente\n");
    printf("2. Buscar clientes\n");
    printf("3. Cargar autos en venta\n");
    printf("4. Ver autos a la venta\n");
    printf("Seleccione una opci�n: ");
    scanf("%d", &op);

    switch (op) {
        case 1:
            // C�digo para cargar cliente
            break;
        case 2:
            // C�digo para buscar clientes
            break;
        case 3:    
            for (int i = 0; i < MAX_AUTOS; i++) {
                printf("Ingrese el nombre del auto a la venta: ");
                scanf("%s", ventas.autos[i]); 
                
                printf("Ingrese el precio del auto: ");
                scanf("%d", &ventas.precio[i]); 
            }
            break;
        case 4:
            printf("--- Autos en venta ---\n");
            for (int i = 0; i < MAX_AUTOS; i++) {
                printf("Auto: %s, Precio: %d\n", ventas.autos[i], ventas.precio[i]);
            }
            break;
        default:
            printf("Opci�n no v�lida.\n");
            break;
    }

    return 0;
}

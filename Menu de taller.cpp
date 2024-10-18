include <stdio.h>

#define MAX_AUTOS 5
#define MAX_CLIENTES 2

struct venta {
    char autos[MAX_AUTOS][20]; 
    int precio[MAX_AUTOS];
};

struct cliente {
    char nombre[20];
    int dni;
    float precio;
    char detalle[60];
};

void cargarClientes(struct cliente clientes[]) {
    for (int i = 0; i < MAX_CLIENTES; i++) {
        printf("Ingrese el nombre del cliente: ");
        scanf("%s", clientes[i].nombre);
        
        printf("Ingrese el DNI del cliente: ");
        scanf("%d", &clientes[i].dni);
        
        printf("Ingrese el precio del trabajo a realizar: ");
        scanf("%f", &clientes[i].precio);    
    
        printf("Ingrese el detalle del arreglo: ");
        scanf("%s", clientes[i].detalle);
    }
}

int main() {
    struct venta ventas;
    struct cliente clientes[MAX_CLIENTES];
    int op;

    printf("---MENU PRINCIPAL---\n");
    printf("1. Cargar cliente\n");
    printf("2. Buscar clientes\n");
    printf("3. Cargar autos en venta\n");
    printf("4. Ver autos a la venta\n");
    printf("Seleccione una opción: ");
    scanf("%d", &op);

    switch (op) {
        case 1:
            cargarClientes(clientes); 
            break;
        case 2:
            // Código para buscar clientes
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
            printf("Opción no válida.\n");
            break;
    }

    return 0;
}

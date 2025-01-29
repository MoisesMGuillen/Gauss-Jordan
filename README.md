# Gauss-Jordan
Un pequeño programa recreando un algoritmo de Gauss-Jordan para obtener la solución de un sistema de ecuaciones lineales de la forma:

\[ Ax = b \]

Donde:
- \( A \) es una matriz de coeficientes.
- \( x \) es el vector de variables desconocidas.
- \( b \) es el vector de términos independientes.

El método de Gauss-Jordan transforma la matriz ampliada del sistema en su forma escalonada reducida mediante operaciones elementales de renglones.

## Características
- Permite al usuario ingresar una matriz cuadrada y un vector de términos independientes.
- Realiza dos operaciones elementales de renglones:
  1. Multiplicación de un renglón por una constante.
  2. Suma de un renglón escalado a otro.
- Aproxima las soluciones del sistema de ecuaciones.

## Estructura del Código
- `llenamatriz()`: Llena la matriz de coeficientes y el vector de términos independientes según la entrada del usuario.
- `mostrarMatrices()`: Muestra la matriz de coeficientes y el vector de términos independientes.
- `productoRenglones()`: Multiplica un renglón por una constante.
- `sumatoria()`: Suma un renglón escalado a otro.
- `main()`: Ejecuta el algoritmo de Gauss-Jordan y muestra los resultados.

## Instrucciones de Uso
1. Compila el programa con un compilador compatible con C++:
   ```bash
   g++ -o gauss_jordan gauss_jordan.cpp
   ```
2. Ejecuta el programa:
   ```bash
   ./gauss_jordan
   ```
3. Introduce el tamaño de la matriz (números de ecuaciones y variables).
4. Ingresa los valores de la matriz de coeficientes.
5. Ingresa los valores del vector de términos independientes.
6. Observa el resultado aproximado del sistema.

## Ejemplo
Entrada:
```
Introduce el tamaño de la matriz: 2
Introduce los valores de la matriz
2 1
1 -1
Introduce los valores del vector de términos independientes
1 0
```
Salida:
```
Estos son los resultados

1.00 0.00
0.00 1.00

Vector de terminos independientes
0.33
0.33
```
Esto representa el sistema escalonado reducido con la solución \( x_1 = 0.33 \), \( x_2 = 0.33 \).

## Consideraciones
- El tamaño máximo de la matriz es 50x50.
- El algoritmo asume que la matriz ingresada es no singular (invertible).
- El tipo `long double` se utiliza para minimizar errores de redondeo.

## Mejoras Sugeridas
Por si planean dar algunas mejoras:
- Validación adicional para manejar matrices singulares.
- Manejo de errores para entradas no válidas.
- Soporte para mostrar resultados simbólicos en vez de aproximados.

## Licencia
Este programa fue desarrollado para una clase de Métodos Numéricos y está disponible para fines educativos. 
Al final del día, es un programa que hice durante mis clases de Métodos Numéricos.

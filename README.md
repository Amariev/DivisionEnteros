# División de enteros

Algoritmo de división de enteros para enteros sin signo

# Ejecutarlo

[Correr programa por medio de replit](https://replit.com/@Camila-ClariCla/DivisionEnteros#main.cpp)

**Clonar repositorio**
```
git clone adjfhaskdjhad
```

**Entrar al directorio**
```
$ cd <nombrerepo>
```

**Compilar**
```
$ g++ -Wall -o main.exe divisionEnteros.cpp
```

```
$ clang++ -std=c++17 -Wall -o main.exe divisionEnteros.cpp
```

**Correr**
```
$ ./main.exe
```

## Input
Por medio del programa, antes de compilar.

## Output
```
Q: 0111 M: 0011 A: 0000 | Valores iniciales
A: 0000 Q: 1110         | left shift
0000 - 0011             | sustraccion en complemento a 2
Resta: 1101
0 -> Q[0]               | Restauración
A: 0001 Q: 1100         | left shift
0001 - 0011             | sustraccion en complemento a 2
Resta: 1110
0 -> Q[0]               | Restauración
A: 0011 Q: 1000         | left shift
0011 - 0011             | sustraccion en complemento a 2
Resta: 0000
1 -> Q[0]               | Restauración
A: 0001 Q: 0010         | left shift
0001 - 0011             | sustraccion en complemento a 2
Resta: 1110
0 -> Q[0]               | Restauración
residuo: 0001
cociente: 0010
```


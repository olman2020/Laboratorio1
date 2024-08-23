def factorial(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * factorial(n - 1)

numero = int(input("Introduce un número entero positivo: "))
if numero < 0:
    print("El factorial no está definido para números negativos.")
else:
    print(f"El factorial de {numero} es {factorial(numero)}")

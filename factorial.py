import time

def factorial(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * factorial(n - 1)

numero = int(input("Introduce un número entero positivo: "))
if numero < 0:
    print("El factorial no está definido para números negativos.")
else:
    # Iniciar el cronómetro
    start_time = time.time()
    
    # Calcular el factorial
    resultado = factorial(numero)
    
    # Detener el cronómetro
    end_time = time.time()
    
    # Calcular el tiempo de ejecución
    execution_time = end_time - start_time
    
    print(f"El factorial de {numero} es {resultado}")
    print(f"Tiempo de ejecución: {execution_time} segundos")


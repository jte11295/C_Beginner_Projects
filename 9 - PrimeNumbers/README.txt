Prompt:
    -Find all prime numbers between 1 and 100
    -No Input to the Program
    -The output will be each prime number seperated by a space on a single line
    -You will need to create an array that will store eah prime number as it is generated
    -You can hard-code the first 3 prime numbers (1, 2, and 3) in the primes array 
    -Utilize a loop to only find prime numbers up to 100 and a loop to print out the primes array

Hint
    -Criteria that can be used to identify a prime number is that a number is considered prime if it is not evenly
     divisible by any other previous prime numbers
    -Can use the following as an exit condistion in the innermost loop
        - p / primes[i] >= primes[i]
        - a test to ensure that the value of p does not exceed the squareroot of primes[i]
    -Will need to two loops
    -You know you can ignore and skip even numbers easily (add check if divisible by two)

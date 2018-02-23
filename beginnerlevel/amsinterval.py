num1 = int(input("Enter a number: ")) 
num2 = int(input("enter a number: "))

for num in range(num1,num2):
   sum = 0  
   temp = num  
  
while temp > 0:  
   digit = temp % 10  
   sum += digit ** 3  
   temp //= 10  
  
if num == sum:  
   print(num)  

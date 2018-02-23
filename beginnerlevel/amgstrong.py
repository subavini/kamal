num = int(input("Enter a number: "))  
sum = 0  
temp = num  
  
while temp > 0:  
   digit = temp % 10  
   sum += digit ** 3  
   temp //= 10  
  
if num == sum:  
   print("yes it is an Armstrong number")  
else:  
   print("No it is not an Armstrong number")  

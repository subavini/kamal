l= int(input("Enter start interval:"))  
s = int(input("Enter end interval: "))  
  
for num in range(l,s):  
   if num > 1:  
       for i in range(2,num):  
           if (num % i) == 0:  
               break  
       else:  
           print(num)  

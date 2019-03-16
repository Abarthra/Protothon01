import math

number=input("enter the comma seperated numbers")

sum=0

x=number.split(",")

y=len(x)

for i in x:

    i=float(i)

    sum=sum+(i*i)

average=(sum)/y

rms=math.sqrt(average)

print(rms)
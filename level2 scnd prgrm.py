import csv
import random


row = ['#', ' Num1', ' Num2','Num3','Num4','Num5'] 
new_row=[]
a=0
def rand():
    new_row.clear()
    for x in range(1,6):
        new_row.append(random.randint(1,100))
    new_row.insert(0,a)
    return new_row

with open('Book2.csv', 'w') as csvFile:
    writer = csv.writer(csvFile)
    writer.writerow(row)
    while(1):
        writer.writerow(rand())
        a+=1
© 2019 GitHub, Inc.

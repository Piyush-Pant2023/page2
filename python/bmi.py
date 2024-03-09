height=float(input("enter the height in m"))
weight=float(input("enter your weight in kg"))
bmi=weight/(height*height)
if(bmi<16):
    print("you are under weight")
elif(bmi<16 and bmi>20):
    print("you are normal")
elif(bmi<=24 and bmi>16):
    print("you are normal")
elif(bmi>24):
    print("you are overweight")
else:
    print("enter teh valid data")
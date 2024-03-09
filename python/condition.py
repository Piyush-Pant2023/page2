#conditional statement
#if else elif
run=int(input("how many runs"))
if run>0 and run<50:
    print("you have neither scored century not half century")
elif run>=50 and run<100:
    print("you score half century")
elif run>=100 and run<200:
    print("you scored century")
else:
    print("please enter valid runs")
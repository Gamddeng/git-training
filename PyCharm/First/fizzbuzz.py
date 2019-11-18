for i in range(1,100+1):
    if (i%3) *(i%5):
       print(i)
    else:
        fb=''
        if (i%3) == 0:
            fb+="fizz"
        if (i%5) == 0:
            fb+="buzz"
        print(fb)

#divisor_pairs = [ (3, "fizz"), (5, "buzz")]
#for i in range(1, 101):
#    name_string = "".join(name for (divisor, name) in divisor_pairs if i % divisor == 0)
#    print(name_string or i)

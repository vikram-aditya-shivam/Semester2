print('integartion of type 1 is')
        print()
        print('ln ( x + (x^2 + a^2)^1/2)')
        i= int(input('enter the index variable = '))


    elif choose == 2 :
        print('integration of type 2 is')
        print()
        print('ln ( x + (x^2 - a^2)^1/2)')
        i = int(input('enter the index variable = '))

    elif choose == 3:
         print('integration of type 3 is')
         print()
         print('sin^-1 x/a')
         i = int(input('enter the index variable = '))

    elif choose == 4 :
        print('integration of type 4 is')
        print()
        print('1/a tan^-1 x/a')
        i = int(input('enter the index variable = '))

    elif choose == 5:
        print('integration of type 5 is ')
        print()
        print('1/2a ln (x-a / x+a)')
        i = int(input('enter the index variable = '))

    elif choose == 6:
        print('integration of type 6 is')
        print()
        print('1/2a ln (a+x / a-x)')
        i = int(input('enter the index variable = '))

    else :
        print('type not recognised')

print('integartion is the area under the curve')
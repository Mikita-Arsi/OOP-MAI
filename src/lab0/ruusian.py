def show_piramid(wind):
    for i in wind:
        print("".join(i))

def create_pyramid(count: int):
    wind = [[] for _ in range(0, count)]
    space = 0
    for i in range(count, 0, -1):
        wind[i - 1 ].append(' '*space + '/\\'*i)
        space += 1

    show_piramid(wind)
    

create_pyramid(int(input()))

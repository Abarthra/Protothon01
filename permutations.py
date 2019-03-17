from itertools import permutations
def Permutations(string):
    permList=permutations(string)
    for perm in permList:
        print(''.join(perm))
        string='Protosem'
        Permutations(string)

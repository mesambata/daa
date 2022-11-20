class node:
    def __init__(self, freq, symbol, left=None, right=None):
        self.symbol = symbol
        self.left = left
        self.right = right
        self.huff = ''
        self.freq = freq
        
def printNodes(node, val=''):
    newVal = val + str(node.huff)
    if(node.left):
        printNodes(node.left, newVal)
    if(node.right):
        printNodes(node.right, newVal)
    if(not node.left and not node.right):
        print(f"{node.symbol} -> {newVal}")



chars = ['a', 'b', 'c', 'd', 'e', 'f', 'g']
freq = [ 4, 7, 12, 14, 17, 43, 54]
nodes = []
for x in range(len(chars)):
    nodes.append(node(freq[x], chars[x]))

while len(nodes) > 1:
    nodes = sorted(nodes, key=lambda x: x.freq)
    left = nodes[0]
    right = nodes[1]
    left.huff = 0
    right.huff = 1
    newNode = node(left.freq+right.freq, left.symbol+right.symbol, left, right)
    nodes.remove(left)
    nodes.remove(right)
    nodes.append(newNode)
printNodes(nodes[0])


'''
Output

a -> 0000
b -> 0001
c -> 001
d -> 010
e -> 011
f -> 10
g -> 11

'''




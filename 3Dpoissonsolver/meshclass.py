import numpy as np



class Environment:
    width: int
    length: int
    height: int
    NodeArray : np.ndarray


    #length, width, and height must all be even numbers for this to work. There must be an absolute middle node for this to work. 
    def __init__(self, width : int = 720, length : int = 720, height : int = 720):
        self.width = width
        self.length = length
        self.height = height
        self.NodeArray = np.zeros((width,length,height))

        for i in range(width):
            for j in range(length):
                for k in range(height):
                    NodeArray[i,j,k] = Node(xpos = i, ypos = j, zpos = k)



    def get_V():
        FiniteDiff = VFiniteDifference(self.NodeArray)

    def get_E():
        FiniteDiff = EFiniteDifference(self.NodeArray)


    def set_Q():

    def move_Q():
        #Find  the midpoint of the Q distribution.
        #Find new point which we want to shift to. 
        #Get rid of old Q, then set_Q() around the new xposition

class EFiniteDifference:
    sidelen : int
    boundary_cond : bool = true
    FinDiffArr : np.ndarray

    def __init__(self, NodeArray):
        self.sidelen = len(NodeArray)
        self.FinDiffArr = np.zeros((sidelen, sidelen))



class VFiniteDifference:
    sidelen : int
    boundary_cond : bool = true
    FinDiffArr : np.ndarray

    def __init__(self, NodeArray):

        self.sidelen = len(NodeArray)
        self.FinDiffArr = np.zeros((sidelen**3, sidelen**3))
        m = 0 #idx for FinDiffArr
        for i in NodeArray:
            for j in NodeArray:
                for k in NodeArray:
                    self.FinDiffArr[m,m] = -6


                    #You can either have 3,4,5, or 6 neighbors. No more, no less.
                    node = NodeArray[i,j,k]
                    neighbor_logic(node)
                    

    def neighbor_logic(node):
        '''if node.type == 'core': #Here, all directions will have 2 neighbors.
            FinDiffArr[m, m-1] = 1
            FinDiffArr[m, m+1] = 1
            FinDiffArr[m, m-3] = 1
            FinDiffArr[m, m+3] = 1
            FinDiffArr[m, m-9] = 1
            FinDiffArr[m, m+9] = 1
        elif node.type == 'face': #Here, only one direction will have less than 2 neighbors
            if len(node.x_neighbors) < 2:

            elif len(node.y_neighbors) < 2:

            elif len(node.z_neighbors) < 2:

        elif node.type == 'edge': #Here, two directions will have less than 2 neighbors. 
            if len'''


        if len(node.x_neighbors) >= 2:
            FinDiff[m, m-1] = 1
            FinDiff[m, m+1] = 1
            else: 
                FinDiff[m,]

        if len(node.y_neighbors) < 2:

        if len(node.z_neighbors) < 2: 





class Node:
    xpos: int
    ypos: int
    zpos : int
    V: float
    E: np.ndarray
    q: float = 0

    x_neighbors : list[Node]
    y_neighbors : list[Node]
    z_neighbors : list[Node]
    place : str

    def __init__(self, xpos: int, ypos: int, zpos: int):
        self.xpos = xpos
        self.ypos = ypos
        self.zpos = zpos
        self.x_neighbors = get_x_neighbors()
        self.y_neighbors = get_y_neighbors()
        self.z_neighbors = get_z_neighbors()
        if sum(len(self.x_neighbors), len(self.y_neighbors), len(self.z_neighbors)) >= 6:
            self.place = 'core'
        elif sum(len(self.x_neighbors), len(self.y_neighbors), len(self.z_neighbors)) >= 5:
            self.place = 'face'
        elif sum(len(self.x_neighbors), len(self.y_neighbors), len(self.z_neighbors)) >= 4:
            self.place = 'edge'
        elif sum(len(self.x_neighbors), len(self.y_neighbors), len(self.z_neighbors)) >= 3:
            self.place = 'corner'

    def get_x_neighbors() -> list[Node]:
        x_neighbors : list[Node] = []
        if self.xpos == width:
            x_neighbors.append(Environment.NodeArray[self.xpos-1, self.ypos, self.zpos])
        elif self.xpos == 0:
            x_neighbors.append(Environment.NodeArray[self.xpos+1, self.ypos, self.zpos])
        else:
            x_neighbors.append(Environment.NodeArray[self.xpos-1, self.ypos, self.zpos])
            x_neighbors.append(Environment.NodeArray[self.xpos+1, self.ypos, self.zpos])

        return x_neighbors

    def get_y_neighbors() -> list[Node]:
        y_neighbors : list[Node] = []
        if self.ypos == width:
            y_neighbors.append(Environment.NodeArray[xpos, self.ypos-1, self.zpos])
        elif self.ypos == 0:
            y_neighbors.append(Environment.NodeArray[xpos, self.ypos+1, self.zpos])
        else:
            y_neighbors.append(Environment.NodeArray[xpos, self.ypos-1, self.zpos])
            y_neighbors.append(Environment.NodeArray[xpos, self.ypos+1, self.zpos])

        return y_neighbors

    def get_z_neighbors() -> list[Node]:
        z_neighbors : list[Node] = []
        if self.zpos == width:
            z_neighbors.append(Environment.NodeArray[self.xpos, self.ypos, self.zpos -1])
        elif self.zpos == 0:
            z_neighbors.append(Environment.NodeArray[self.xpos+1, self.ypos, self.zpos+1])
        else:
            z_neighbors.append(Environment.NodeArray[self.xpos, self.ypos, self.zpos -1])
            z_neighbors.append(Environment.NodeArray[self.xpos+1, self.ypos, self.zpos+1])

        return z_neighbors


    


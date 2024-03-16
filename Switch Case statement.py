from typing import *

import math

def areaSwitchCase(ch: int, a: List[float]):

    match ch:

 

        case 1:

            area=math.pi* a[0]*a[0]

            formatted_area = "{:.5f}".format(area)

            #print("area1 ",formatted_area)

            

            return formatted_area

 

        case 2:

            area=a[0]*a[1]

            formatted_area = "{:.5f}".format(area)

            #print("area1 ",formatted_area)

            return formatted_area

 

        case default:

 

             return "-1.00000" 

 

import numpy as np
import pandas as pd

#path='./delicious_pku.xlsx'


#替换为自己的地址，注意反斜杠以及不要混入中文
path ='D:/qt_project/Yanyuanweidao/Yanyuanweidao/yanyuanweidao/dish_group/delicious_pku.xlsx'



df=pd.read_excel(path)
#简化记法：sr:spicy_rank, icm:if_contain_meat, icse: if_contain_seafood, icso:if_contain_soybean
# inf: if_noodle_food, idoc: if_desert_or_colddish, iso: if_soup
def select(sr, icm, icse, icso, inf, idoc, iso):
    print("select module begins to work")
    list1 = [] #用来存储符合条件的菜名
    list2 = [] #用来存储对应的菜价
    list3 = [] #用来存储菜品所在的食堂
    #输入的全为int类型的变量，通过判断将一些转换为字符串类型
    spicy_rank = int(sr)
    if(icm==0): if_contain_meat = "不含"
    else: if_contain_meat = "含"
    if(icse==0): if_contain_seafood = "不含"
    else: if_contain_seafood = "含"
    if(icso==0): if_contain_soybean = "不含"
    else: if_contain_soybean = "含"
    if(inf==0): if_noodle_food = "否"
    else: if_noodle_food = "是"
    if(idoc==0): if_desert_or_colddish = "否"
    else: if_desert_or_colddish = "是"
    if(iso==0): if_soup = "否"
    else: if_soup = "是" 
    #print('no error')
    #设置七个判断，遍历所有菜品，如果符合条件，则设置为1，如果一个菜与筛选条件全符合就输出，
    select_array = np.array([0]*7, dtype='int32')
    for i in range(len(df['菜名'])):
        select_array[:]=0
        if(df.iloc[i,2]==spicy_rank):
            select_array[0]=1
        if(df.iloc[i, 3]==if_contain_meat):
            select_array[1]=1
        if(df.iloc[i, 4]==if_contain_seafood):
            select_array[2]=1
        if(df.iloc[i, 5]==if_contain_soybean):
            select_array[3]=1
        if(df.iloc[i, 6]==if_noodle_food):
            select_array[4]=1
        if(df.iloc[i, 7]==if_desert_or_colddish):
            select_array[5]=1
        if(df.iloc[i, 8]==if_soup):
            select_array[6]=1
        if(np.all(select_array==1)):
            list1.append(df.iloc[i, 0])
            list2.append(int(df.iloc[i, 1]))
            if(df.iloc[i, 10]=="农园"): list3.append(0)
            elif(df.iloc[i,10]=="家园"): list3.append(1)
            elif(df.iloc[i,10]=="学一"): list3.append(2)
            elif(df.iloc[i,10]=="学五"): list3.append(3)
            elif(df.iloc[i,10]=="燕南"): list3.append(4)
            else: print("something wrong")
    #print('no error')
    print("the num of dishes")
    print(len(list1),len(list2))
    #print(list1[0],list2[0])
    #print(type(list1[0]))
    return (list1, list2, list3)
#select(2,'含','不含','不含','否','否','否')

#select(2, 1, 0, 0, 0, 0, 0)

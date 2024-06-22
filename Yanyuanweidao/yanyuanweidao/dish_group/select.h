#ifndef SELECT_H
#define SELECT_H

#include<iostream>
#include<string>
//#include<D:\anaconda\include\Python.h>
#include "./include/Python.h"
#include<direct.h>
#include<vector>
#include<tuple>

//spicy_rank, if_contain_meat, if_contain_seafood, 
//if_contain_soybean, if_noodle_food, if_desert_or_colddish, if_soup):
using namespace std;
class select_elements{ //创建对象
    public:
        int spicy_rank;
        int if_contain_meat;
        int if_contain_seafood;
        int if_contain_soybean;
        int if_noodle_food;
        int if_desert_or_colddish;
        int if_soup; //使用int中的0表示假，使用1表示真。
        select_elements(){
            spicy_rank=0;
            if_contain_meat=0;
            if_contain_seafood=0;
            if_contain_soybean=0;
            if_noodle_food=0;
            if_desert_or_colddish=0;
            if_soup=0;
        }
};
//用来存储结果的vector
vector<string> cpp_array0; //创建c++的string向量存储
vector<int> cpp_array2;
vector<int> cpp_array3;

std::tuple<std::vector<string>, std::vector<int>, std::vector<int>> select(int* state_array){
    select_elements se;
    //cout<<"no error"<<endl;
    //初始化
    /*cin>>se.spicy_rank>>se.if_contain_meat>>se.if_contain_seafood;
    cin>>se.if_contain_soybean>>se.if_noodle_food>>se.if_desert_or_colddish>>se.if_soup;*/
    se.spicy_rank=state_array[0];
    se.if_contain_meat=state_array[1];
    se.if_contain_seafood=state_array[2];
    se.if_contain_soybean=state_array[3];
    se.if_noodle_food=state_array[4];
    se.if_desert_or_colddish=state_array[5];
    se.if_soup=state_array[6];
    //cout<<"no error"<<endl;
    Py_Initialize(); //初始化python解释器
    // 获取当前工作目录
    //char cwd[PATH_MAX];
    char cwd[1000];
    _getcwd(cwd, sizeof(cwd));
    //getcwd(cwd, sizeof(cwd));

    // 将当前工作目录添加到 Python 模块搜索路径
    PyObject *sys = PyImport_ImportModule("sys");
    PyObject *path = PyObject_GetAttrString(sys, "path");
    PyList_Append(path, PyUnicode_FromString(cwd));

    PyRun_SimpleString("import sys");
    //PyRun_SimpleString("sys.path.append('D:\\qt_project\\layout\\dish_group')");
    PyRun_SimpleString("sys.path.append('D:\\qt_project\\Yanyuanweidao\\Yanyuanweidao\\yanyuanweidao\\dish_group')");
    PyObject *pmodule = PyImport_ImportModule("data_frame"); //导入python模块

    if(pmodule){
        //cout<<"no error"<<endl;
        PyObject *pfunc = PyObject_GetAttrString(pmodule, "select"); //获取python函数对象
        if(pfunc&&PyCallable_Check(pfunc)){
            cout<<"success in using select module"<<endl;
            //PyObject *pargs = PyTuple_New(0); //创建参数元组
            PyObject *pargs = Py_BuildValue("(iiiiiii)", se.spicy_rank, se.if_contain_meat, se.if_contain_seafood,\
            se.if_contain_soybean, se.if_noodle_food, se.if_desert_or_colddish, se.if_soup); //转换传入python函数的变量
            PyObject *pvalue = PyObject_CallObject(pfunc, pargs); //调用python函数

            //返回类型为菜名和价格两个数组组成的元组
            //创建vector来储存两个数组
            //cout<<"no error"<<endl;
            if(pvalue==NULL) cout<<"something wrong1"<<endl;
            if(!PyTuple_Check(pvalue)) cout<<"something wrong2"<<endl;
            if(pvalue != NULL && PyTuple_Check(pvalue)){
                //cout<<"no error1"<<endl;
                PyObject* parray1 = PyTuple_GetItem(pvalue, 0);
                PyObject* parray2 = PyTuple_GetItem(pvalue, 1);
                PyObject* parray3 = PyTuple_GetItem(pvalue, 2);

                //vector<string> cpp_array0; //创建c++的string向量存储
                //vector<int> cpp_array2;
                //获取python数组长度
                if(PyList_Check(parray1)){
                    Py_ssize_t array_size = PyList_Size(parray1);
                    //cout<<"the array size is"<<array_size<<" "<<endl;
                    //cout<<"target dish num is:"<<array_size<<endl;
                    for(Py_ssize_t i=0; i<array_size; ++i){
                        //cout<<"the number of thing"<<i<<endl;
                        PyObject *pitem1 = PyList_GetItem(parray1, i);
                        PyObject *pitem2 = PyList_GetItem(parray2, i);
                        PyObject *pitem3 = PyList_GetItem(parray3, i);
                        /*if(pitem1==NULL) cout<<"pitem1 is a nullptr"<<endl;
                        if(pitem2==NULL) cout<<"pitem2 is a nullptr"<<endl;
                        if(PyUnicode_Check(pitem1)) cout<<"is a unicode string"<<endl;
                        //cout<<typeid(*pitem1).name()<<endl;
                        if(PyBytes_Check(pitem1)) cout<<"pitem1 is not a pbyte string"<<endl;
                        if(PyLong_Check(pitem2)) cout<<"is not a int type"<<endl;*/
                        //cout<<"no error2"<<endl;
                        if(pitem1!=NULL&&pitem2!=NULL&&pitem3!=NULL&&PyUnicode_Check(pitem1)&&PyLong_Check(pitem2)&&PyLong_Check(pitem3)){ //检验是否是字符串
                            //cout<<"the value that pass the shai"<<endl;
                            //PyObject *pbytes = PyUnicode_AsUTF8String(pitem1);
                            PyObject *pbytes = PyUnicode_AsEncodedString(pitem1, "gbk", "strict");
                            char *stringvalue = PyBytes_AsString(pbytes);
                            string cppstring(stringvalue);
                            cpp_array0.push_back(cppstring); //将转化的菜名压入vector
                            int intvalue = PyLong_AsLong(pitem2);
                            cpp_array2.push_back(intvalue); //将转化的菜价压入vector
                            //PyObject *pbytes1 = PyUnicode_AsUTF8String(pitem3);
                            int intvalue1 = PyLong_AsLong(pitem3);
                            cpp_array3.push_back(intvalue1);
                        }
                    }
                }
            }
            Py_XDECREF(pvalue);
        }
    }
    else{   
        if(PyErr_Occurred()) PyErr_Print();
        cout<<"something wrong occured"<<endl;
        //cout<<pmodule<<endl;
    }
    //cout<<"no error"<<endl;
    int length= cpp_array0.size();
    cout<<length<<endl;
    for(int i=0; i<length; ++i){
        cout<<cpp_array0[i]<<" "<<cpp_array2[i]<<endl;
    }
    /*return 0;*/
    return make_tuple(cpp_array0, cpp_array2, cpp_array3);//返回菜名，菜价和食堂编号
}

#endif

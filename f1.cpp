//program to create file and write in file.
#include<iostream>
#include<fstream>
#include<libHaru>
int main(){
    std::fstream a;
    a.open("f1.txt", std::ios::out);
    if(!a){
        std::cout<<"File cannot be created.";
    }
    else{
        std::cout<<"File succesfully created.";
        a<<"Hello world.";
        a.close();
    }
    return 0;
}
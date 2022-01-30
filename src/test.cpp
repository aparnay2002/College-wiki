class ABC{
 int x,y;
 const int xyz;
 static int abc;
 ABC(int abc): xyz(abc){}
 public:
 void set_values(int a,int b){
     x=a;
     y=b;
 }
 ABC(const ABC &A){
     x=A.x;
     y=A.y;
 }
 ABC operator =(const ABC &obj1){
     this->x=obj1.x;
     this->y=obj1.y;
     //temp.x=this->x;
     //temp.y=this->y;
     return *this;
 }
 ABC func(){
     ABC temp;
     temp.x=x;
     temp.y=y;
     return temp;
 }
};
int main(){
    ABC obj1;
    obj1.set_values(3,4);
    ABC obj2;
    ABC obj3;
    obj3=obj2=obj1;
    obj3=obj2.func();

    int x=10;
    int y;
    int z;
    y=z=x;
}
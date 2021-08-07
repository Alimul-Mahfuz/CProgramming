#include<iostream>
using namespace std;

int main(){
    int x=5;
    int *p = &x;
    *p = 6;
    int **q = &p;
    int ***r = &q;
    printf("%d\n",*p); //5
    printf("%d\n",p);//Address of p
    printf("%d\n",*q);//Address of p which is the value stored in q
    printf("%d\n",**q);//Value of x which is stored in p. And q stored the address of p
    **q = *p+2;
    printf("%d\n",**q);
    printf("%d\n",q);//Address of q
    printf("%d\n",*r);//Address of q
    printf("%d\n",**r);//Address of p which is the value stored in q
    printf("%d\n",***r);
    /*Value of x which is stored in p and p is stored as value in
    q and q's address stored in r as a value. * is consider as dereferencing
    operator. It's go inside. Where & is opposite it's go one level outside.
    */


}

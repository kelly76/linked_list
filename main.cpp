#include <iostream>

using namespace std;

template<typename T>
class node{
private:
    T data;
    node *next;
public:
    node(){
        data=0;
        next=nullptr;
    }
    T getData(){
        return data;
    }
    void setData(T d){
        data=d;
    }
    node* get_next(){
        return next;
    }
    void set_next(node *n){
        next=n;
    }

};

template<typename T>
class linked_list{
private:
    node<T> *head,*tail;
public:
    linked_list(){
        head=nullptr;
        tail=nullptr;
    }
    ~linked_list(){
        while(head->get_next()!=nullptr)
            delete head;
            head=head->get_next();
            int i=1;
            cout<<i++;
    }
    void insertar(int new_data){
        node<T> *new_node=new node<T>;
        new_node->setData(new_data);
        new_node->set_next(nullptr);
        if(head==nullptr)
            head=new_node;
        else{
            while(tail->get_next()!=nullptr){
                tail=tail->get_next();
            }
            tail->set_next(new_node);
        }
    }
    void insertar_head(T new_data){
        node<T> *new_node=new node<T>;
        new_node->setData(new_data);
        new_node->set_next(head);
        head=new_node;
    }
    void mostrar(){
        cout<<head->getData()<<" ";
        while(head->get_next()!=nullptr){
            head=head->get_next();
            cout<<head->getData()<<" ";
        }
    }
};

int main()
{
    linked_list<int> lista;
    lista.insertar(4);
    lista.insertar(5);
    lista.mostrar();

    return 0;
}

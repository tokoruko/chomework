#include <stdio.h>

/*
typdef 元の型 定義したい型名;
typdef struct {difinition
    struct  型名 *pointer ポインタに今定義する型名を入れたければstruct必須
    } 定義したい型名;
-> 次に呼ぶとき　struct 型名としなくてよい
a.next 構造体そのものの値ならこれでよい
a -> next = ?? ポインタaのnextに??を代入
ポインタのデータって何バイト？
Cは構造体を返せない
->ポインタで返す
(型 *)malloc(sizeof(型)) 型のサイズを確保したヒープ領域のポインタを返す
ヒープ領域の解放はfree()
*/

typedef struct node{
    int value;
    struct NODE *next;
} NODE;


typedef struct linkedlist{
    struct NODE *head;
}LINKEDLIST;

int getLength(){
    int count = 0;
    LINKEDLIST *plist;
    NODE *current;
    if (plist->head ==NULL){
    }else{
        count +=1;
        current = plist->head;
        while(current->next !=NULL){
            count+=1;            
            current = current->next; 
        }
    }
    return count;
}

//引数に構造体そのものを指すポインタがいる
int insert(,int position, int value){
    NODE *newnode;
    LINKEDLIST *plist;
    newnode = (NODE *)malloc(sizeof(NODE));
    newnode->value = value;
    newnode->next = NULL;

    if (plist->head==NULL){
        plist->head = newnode;
    }

    NODE *current = plist->head;
    NODE *target; 
    if (position==0){
        target = current->next;
        plist->head = newnode;
        newnode->next = target;

    }else if (position > getLength()-1 || position < 0){
        while(current->next != NULL){
            current = current->next;
        }
        current->next = newnode;
    }else{
        for (int i; i < position; i++){
            current = current->next; 
        }
        newnode = current->next;
        current ->next = newnode;
    }
}
int delete(int position){
    LINKEDLIST *plist;

    if (get_length()==0){
        return 0;
    }

    NODE *current = plist->head;
    NODE *target; 
    if (position==0){
        target = current->next;
        current = current->next
        
         = current;
        free(target)

    }else if (point > getLength()-1 || point < 0){
        while(current->next != NULL){
            current = current->next;
        }
        current->next = newnode;
    }else{
        for (int i; i < point; i++){
            current = current->next; 
        }
        newnode = current->next;
        current ->next = newnode;
    }
    return 0;
}
int show(){
    LINKEDLIST *plist ;
    NODE *current;
    if (get_length()==0){
        return 0;
    }else{
        current = plist->head;
        while(current->next!=NULL){
            printf(current->value);
            current = current->next;
        }
    }
}


int main (void){
    LinkedList list;
    printf("when 0 element\n");
    printf("get length\n");
    get_length();
    insert(&list,0,0);
    printf("insert 0\n");
    printf("show\n");
    show();

    printf("insert 1-3\n");
    for (int i=0; i < 3; i++){
        insert(i+1,i+1);
    }
    printf("insert over number of elements\n");
    insert(8,10);

    printf("show\n");
    show();
    printf("delete 0th\n");
    delete(0);
    show();
    printf("delete 1st\n");
    delete(1);
    show();
    printf("delete 2nd(last)\n");
    delete(2);
    show();
    printf("del over number of elements\n");
    delete(10);
    show();

    return 0;
}
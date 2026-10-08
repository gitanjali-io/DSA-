/* Declare the standard I/O functions when the editor cannot locate stdio.h. */
int printf(const char *format, ...);
int scanf(const char *format, ...);
#define SIZE 5 
int data[SIZE], top=-1;
void push(int item)
{
    if (top==SIZE-1)
    printf("\n Stack overflow ");
else
{
    top=top+1;
    data[top]=item;
}
}
void pop()
{
    if(top==-1)
    printf("Stack underflow \n");
else{
    printf("The poped element is %d", data [top]);
    top=top-1;
}
}
void display()
{
    int i;
    if(top==-1)
    printf("\n Stack is empty ");
else
{
    printf("\n stack content are \n");
    for(i=top;i>=0;i--)
    printf("%d\n",data[i]);
}
}
int main()
{
    int item,ch;
    for(;;)
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3. Display");
        printf("\n 4. Exit");
        printf("\n Read choice :");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("\n Read element to be pushed :");
                    scanf ("%d", &item);
                    push(item);
                    break;
            case 2: pop();
                    break;
                case 3: display();
                    break;
                default : return 0;
        }
    }
    return 0;
}
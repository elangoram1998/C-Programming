package linked_list_ds;
class node
{
    int data;
    node next;
    node(int a)
    {
        data=a;
        next=null;
    }
    node head,first,second,temp;
   
}
public class Linked_List_DS {
    public static void main(String[] args) {
        node head = new node(10);
        node first = new node(30);
        node second=new node(50);
        head.next=first;
        first.next=second;
        second.next=null;
        int display()
        {
            while(head!=null)
            {
                System.out.print(head.data+" ");
                head=head.next;
            }
        }
        
    }
    
}

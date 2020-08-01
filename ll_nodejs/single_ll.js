class Node{
    data;
    link;

    static travarsal(node){
        let temp=node;
        while(true){
            if(temp){
                console.log(temp.data);
                temp=temp.link;
            }
            else{
                break;
            }
            
        }
    }
}



let node3=node1;
let node2=new Node();

node1.data=10;

node1.link=node2;

node2.data=20;
node2.link=null;

Node.travarsal(node1);

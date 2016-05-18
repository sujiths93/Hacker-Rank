RandomListNode *createcopy(RandomListNode *head){
    if(head==NULL){
        return NULL;
    }
    unordered_map<int,RandomListNode> dict;

    RandomListNode *cur=head;
    RandomListNode *r=head;
    int count=0;
    //To count the number of nodes in the linked list.
    while(cur!=NULL){
        ++count;
        cur=cur->next;
        }
    int cn=count;
    cur=head;
    int x=1;

    while(cur!=NULL){
        r=cur->random;

        if(r==NULL){
            dict[x]=NULL;
        }
        else{
            while(r!=NULL){
                r=r->next;
                --count;
                }
            dict[x]=++count;
        }
    ++x;
    count=cn;
    cur=cur->next;

}
//linking the next pointer.
cur=head;
RandomListNode *nhead=new RandomListNode(cur->label);
RandomListNode *cur1=nhead;
while(cur->next!=NULL){
        cur=cur->next;
        cur1->next=new RandomListNode(cur->label);
        cur1=cur1->next;
        }
//linking the random pointer.
cur1=nhead;
cur=head;
RandomListNode *c2=nhead;
int i=1;
int j=1;
while(i<=count){
    j=1;
    if(dict[i]==0){
        c2->random=NULL;
    }
    else{
    while(j<dict[i]){
        cur1=cur1->next;
        ++j;
    }
    c2->random=cur1;
    }
    cur1=head;
    c2=c2->next;
    ++i;

}
return cur;
}
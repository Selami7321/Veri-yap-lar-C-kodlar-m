#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node*left;
	struct node*right;
	
};
struct node*kokDugumolustur(int veri){
	struct node*root=(struct node*)malloc(sizeof(struct node));
	root->data=veri;
	root->left=NULL;
	root->right=NULL;
	
	return root;
}
struct node*elemanEkle(struct node*root,int veri){
	if(root==NULL){
		root=kokDugumolustur(veri);
		
		
	}else
	{
		if(veri<root->data)
			root->left=elemanEkle(root->left, veri);
	    else
	        root->right=elemanEkle(root->right,veri);
	
		}
		return root;
	
	}
	

void preorder(struct node*root){    //kök baþta
	if(root !=NULL){
		printf("%d\n",root->data);
		preorder(root->left);
		preorder(root->right);
		
	}
}
void inorder(struct node*root){    //kök ortada
	if(root !=NULL){
		inorder(root->left);
		printf("%d\n",root->data);
		inorder(root->right);
	}
}
void postorder(struct node*root){  //kök sonda
	if(root !=NULL){
		postorder(root->left);
		postorder(root->right);
		printf("%d\n",root->data);
		
	}
}
int main(int argc, char *argv[]) {
	
	struct node*eleman=NULL;
	int sayi,i=0;
	
	while(i<7){
		printf("sayi giriniz:\n");
		scanf("%d",&sayi);
		eleman=elemanEkle(eleman,sayi);
		i++;
	}
	printf("\npreorder\n");
	preorder(eleman);
	
	printf("\ninorder\n");
	inorder(eleman);
	
	printf("\npostorder\n");
	postorder(eleman);
	
	
	
	
	
	
	return 0;
}

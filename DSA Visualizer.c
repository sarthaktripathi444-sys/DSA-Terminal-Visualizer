#include<stdio.h>//including standard library 
#include<stdlib.h>//including standard library
#define MAX 5 // constant for stack array variable           
int stack[MAX]; // array declared for representing stack
int top=-1;//tracker for pointing the top of the stack
void stack_operation();//function for showing stack operation
void sorting_operation();//function for performing sorting operation
void searching_operation();//function for showing searching operation
void clear_buffer();//function for clearing the buffer keryboard memory

int main()//main function starts here
{
    int choice;//choice for user for main menu
    while(1)//the infinite loop started for keep showing the menu
    {
        printf("\n---Our DSA Visualizer----\n");//here we are printing our menu for the program 
        printf("\n1:Stack operations\n"); // 1 for stack
        printf("\n2:Array Sorting Visualizer\n");//2 for sorting
        printf("\n3:Searching Operations\n");//3 for Searching
        printf("\n4:Exit\n");// 4 for exit
        printf("Enter your choice: ");//asking for choice
        if(scanf("%d", &choice)!=1)//checks if the user enter a number or something else
        {
            printf("Please Enter a valid number not a character\n");//printing error message if not a number
            clear_buffer();//clears the buffer keyboard memory
            continue;//restart the loop since the user did not enter the number so the main menu will print again
        }
        clear_buffer();//this is fixed it clears the enter key memory which the user enters after entering the number from buffer memory
        switch(choice)//for calling different functions depending on the user choice
        {
            case 1:
                printf("\nThe Stack Operation\n");
                stack_operation();//function calling
                break;
            case 2:
                printf("\nThe Array Sorting Visualizer\n");
                sorting_operation();//function calling
                break;
            case 3:
                printf("\nThe Searching Operation\n");
                searching_operation();//function calling
                break;
            case 4:
                printf("\nExiting the program\n");
                exit(0);//exiting the program main menu will not print 
            default://if the user enters any other number rather than 1,2,3,4
                printf("\nError invalid choice please try again\n");
        }
    }
}// main function closed here 

void clear_buffer()//defining funtion for clearing the buffer memory
{
    while(getchar()!='\n');//it clears the buffer memory space like a conveyer belt in a factory
}

void stack_operation()//defining function for stack operation 
{
    int choice2;//choice for stack menu
    int a;//variable for taking number in stack
    while(1)//a sub menu
    {
        printf("\n---Stack Menu---\n");
        printf("\n1:Push operation\n");
        printf("\n2:Pop operation\n");
        printf("\n3:Display\n");
        printf("\n4:Go back to main menu\n");
        printf("\nEnter your choice:");
        if(scanf("%d",&choice2)!=1)//check for valid entry
        {
            printf("\nPlease enter a valid number not character\n");
            clear_buffer();
            continue;
        }
        clear_buffer();
        switch(choice2)
        {
            case 1://logic for stack push operation            
                if(top==MAX-1)//checks if stack is not already full
                {
                    printf("Stack is full\n");
                    break;
                }
                else//if stack not full then ask user for entering the number
                {
                    printf("Enter the number ");
                    if(scanf("%d",&a)!=1)
                    {
                        printf("\nEnter a valid number not a character\n");
                        clear_buffer();
                        continue;// control go back to loop of stack function
                    }
                    clear_buffer();
                    top++;
                    stack[top]=a;
                    printf("Success %d was pushed succesfully in the stack\n",a);
                    break;
                }
                    case 2://logic for stack pop operation
                        if(top==-1)//
                            printf("\nStack is empty\n");
                        else
                        {
                            printf("\nRemoved %d\n",stack[top]);
                            top--;
                        }
                        break;
                    case 3://logic for displaying our current stack condition
                        if (top==-1)
                        {
                            printf("\nStack Empty\n");
                            break;
                        }
                        for(int i=top;i>=0;i--)
                        {
                            if(i==top)
                                printf("\n%d| %d |--->Top\n",i,stack[i]);
                            else
                                printf("\n%d| %d |\n",i,stack[i]);
                        }
                        break;
                    case 4://returning to the main menu
                        printf("Returning to main menu\n");
                        return;
                    default:
                        printf("Invalid choice please try again\n");
                
        }//switch case closed here
    }//while closed here
}//function closed here 

void sorting_operation()
{
    int choice3;//choice for sorting operation
    int n;//number for size of the array
    int arr[10];//max size of array 10
    while(1)//for printing the sorting menu
    {
	printf("\nSorting Menu\n");
        printf("\n1:Bubble Sorting Vizualizer\n");
        printf("\n2:Selection Sorting Vizualizer\n");
        printf("\n3:Insertion Sorting Vizulizer\n");
        printf("\n4:Back to Main Menu\n");
        printf("\nEnter your choice\n");
	if(scanf("%d", &choice3)!=1)//checks if the user enter a number or something else
        {
            printf("Please Enter a valid number not a character\n");
            clear_buffer();//clears the buffer keyboard memory
            continue;//restart the loop
        }
        clear_buffer();
        if(1<=choice3&&choice3<4)//if user chooses any of the sort then only ask to enter the array othewise skip it 
        {
		  	 printf("\nEnter the number of elements to sort MAX 10 \n");
      			 if(scanf("%d",&n)!=1)
    			{
        			printf("\n Enter a valid number\n");
        			clear_buffer();
        			return;
    			};//safety check for n
    			clear_buffer();
    			if(n>10||n<1)//check if the array is of the size we declared that is 10
    			{
        			printf("\nYou must choose between 1 to 10 elements\n");
        			return;
    			}
    			printf("\nEnter all numbers on a single line separated by spaces then press Enter \n");
    			for(int i=0;i<n;i++)//entering elements in an array
    			{    
        			scanf("%d",&arr[i]);
    			}
    		        printf("\nYour current array\n");//showing exactly the array user entered
    			for(int i=0;i<n;i++)
    			{ 
        			printf("|%d",arr[i]);
    			}
    			printf("|\n");
        } 
        switch(choice3)//performing different operations according to the choice 
        {
            case 1://bubble sorting logic in case 1
                for(int i=0;i<n-1;i++)
                {
                    printf("\nPass %d\n",i+1);
                    for(int j=0;j<n-i-1;j++)
                    {
                        if(arr[j]>arr[j+1])
                        {
                            int t=arr[j];
                            arr[j]=arr[j+1];
                            arr[j+1]=t;
                            printf("\nWe swapped %d with %d\n",arr[j+1],arr[j]);
                        }
                        else
                        {
                            printf("\nNo swap needed\n");
                        }
                        for(int f=0;f<n;f++)//for printing the array each time the element changes
                        { 
                            printf("|%d",arr[f]);
                        }
                        printf("|\n");
                    }
                }
                break;
            case 2://selection sort logic in case 2
                for(int i=0;i<n-1;i++)
                {
                    int min=i;
                    for(int j=i+1;j<n;j++)
                    {
                        if(arr[j]<arr[min])
                            min=j;
                    }
                    if(min!=i)
                    {
                        int t=arr[i];
                        arr[i]=arr[min];
                        arr[min]=t;
                        printf("\nWe swapped %d with %d\n",arr[i],arr[min]);
                        for(int f=0;f<n;f++)
                        {
                            printf("|%d",arr[f]);
                        }
                        printf("|\n");
                    }
                }
                break;
            case 3://insertion sort logic in case 3
                for(int i=1; i<=n-1; i++)
                {
                    int key = arr[i];
                    int prev = i-1;
                    while(prev>=0 && arr[prev]>key)
                    {
                        arr[prev+1]=arr[prev];
                        prev--;
                    }
                    arr[prev+1]=key;
                    printf("\nAfter pass %d\n",i); 
                    for(int f=0;f<n;f++)
                    {
                        printf("|%d",arr[f]);  
                    }
                    printf("|\n");
                }
                break;
                    case 4:
                        return;
                    default :
                        printf("Enter a valid choice");
                
        }
    }
}//ending of sorting  operation

void searching_operation()//defining function for searching operation
{
    int choice4;//choice for user 
    int n;//variable for defining the size of array
    int arr[10];
    int box_width=3;//NEW
    while(1)//printing menu for searching operation
    {
        printf("\nSearching Menu\n");
        printf("\n1: Linear Search\n");
        printf("\n2: Binary Search\n");
        printf("\n3: Back to Main Menu\n");
        printf("\nEnter Choice:");
        if(scanf("%d", &choice4)!=1)//checks if the user enter a number or something else
        {
            printf("Please Enter a valid number not a character\n");
            clear_buffer();//clears the buffer keyboard memory
            continue;//restart the loop
        }
        clear_buffer();
        if(1<=choice4&&choice4<3)
        {
                printf("\nEnter the size of array MAX 10\n");
                if(scanf("%d",&n)!=1)
                {
                    printf("Please enter a valid number not a character\n");
                    clear_buffer();
                    continue;
                }
                if(n>10||n<1)
                {
                    printf("\nYou must choose between 1 to 10 elements\n");
                    return;
                }
                printf("\nEnter all numbers on a single line separated by spaces then press Enter \n");
                for(int i=0;i<n;i++)
                {//entering elements in an array
                   scanf("%d",&arr[i]);
                }
                for(int i=0;i<n;i++)//NEW
                {
                    int temp=arr[i];
                    int digit=0;
                    while(temp>0)
                    {
                        digit++;
                        temp=temp/10;
                    }
                    if(digit>box_width)
                    {
                        box_width=digit;
                    }
                }
                box_width++;//for safe side*/
                
        }
        switch(choice4)
        { 
            case 1:
            {
                int key;//key
                int lin_count=0;//counter
                printf("\nEnter the key\n");
                scanf("%d",&key);
                for(int i=0;i<n;i++)
                {
                    printf("\nSearch %d\n",i+1);
                    /*for(int f=0;f<n;f++)
                    {
                        printf("|%d",arr[f]);
                    }
                    printf("|\n");
                    for(int m=0;m<((i*2)+1);m++)
                    {
                        printf(" ");
                    }
                    printf("^\n");*/
                    for(int f=0;f<n;f++)//this loop will print the array first
                    {
                         printf("|%*d", box_width, arr[f]);//NEW
                    }
                    printf("|\n");
                    for(int m=0;m<=i;m++)
                    {
                        printf(" ");//for printing space below |
                        if(m==i)
                        printf("%*s",box_width,"^");//first print the box of width box_width then print ^
                        else
                        printf("%*s",box_width,"");//if it is not the required array then just print the box then 
                    }
                    printf("\n");//moving to next line after the pointer is printed 
                    if(arr[i]!=key)
                    {
                        printf("\nKey not found at index %d\n",i);
                    }
                    if(arr[i]==key)
                    {
                        printf("\nKey found at index %d\n",i);
                        lin_count++;
                        break;
                    }
                }
                if(lin_count==0)
                    printf("\nKey Not present in complete array\n");
            }
            break;
            case 2:
            {
                int c=0;
                for(int i=0;i<n-1;i++)
                {
                    if(arr[i]>arr[i+1])
                    {
                        printf("\nArray is not sorted please enter a sorted array\n");
                        c++;
                        break;//exit loop after printing the error message
                    }
                }
                if(c==0)//if array is sorted then ask for key
                {
                    int key;
                    printf("\nEnter the number to search\n");
                    scanf("%d", &key);
                    int low=0;
                    int high=n-1;
                    int mid;
                    while(low<=high)
                    {
                        mid=(low+high)/2;
                        printf("\nLow=%d,High=%d,Mid=%d\n",low,high,mid);//print the current values of low mid and high
                        /*for(int f=0;f<n;f++)
                        {
                            if(low<=f&&f<=high)
                            printf("|%d",arr[f]);
                            else
                            printf("|-");
                        }
                        printf("|\n");
                        for(int f=0;f<n;f++)//trying to point L,M,H for array
                        {
                            if(f==low)
                            printf("l ");
                            else if(f==mid)
                            printf("m ");
                            else if(f==high)
                            printf("h ");
                            else
                            printf(" ");
                        }*/
                        for(int f=0;f<n;f++)
                        {
                            if(low<=f&&f<=high)
                            printf("|%*d",box_width,arr[f]);
                            else
                            printf("|%*s",box_width,"-");
                        }
                        printf("|\n");
                        for(int f=0;f<n;f++)
                        {
                            printf(" ");// first |
                            if(f==low&&f==mid&&f==high)
                            printf("%*s",box_width,"LMH");
                            else if(f==low&&f==mid)
                            printf("%*s",box_width,"LM");
                            else if(f==mid&&f==high)
                            printf("%*s",box_width,"MH");
                            else if(f==low)
                            printf("%*s",box_width,"L");
                            else if(f==mid)
                            printf("%*s",box_width,"M");
                            else if(f==high)
                            printf("%*s",box_width,"H");
                            else
                            printf("%*s",box_width,"");
                        }
                        printf("\n");
                        if(arr[mid]==key)
                        {
                            printf("\nKey is found at index %d\n", mid);
                            break;
                        }
                        else if(arr[mid]<key)
                        {
                            low=mid+1;
                        }
                        else
                        {
                            high=mid-1;
                        }
                    }
                    if(low>high)
                    {
                        printf("Key is not found\n");
                    }
                }
                break;
                case 3:
                    return;
                default:
                {
                    printf("Please enter  a valid case\n");
                }
            }
        }
    }
}
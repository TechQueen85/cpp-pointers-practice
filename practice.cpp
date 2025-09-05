/* IN THIS FILE WE HAVE DONE POINTERS WHOLE CONCEPT
    AND DYNAMIC MEMORY ALLOCATIONS
*/
#include <iostream>
using namespace std;
void swap(int *m, int *n){
    int temp;
    temp = *m;
    *m=*n;
    *n= temp;

}
int sum(int *m, int *n){
    *m = *m + *n;
    return *m;
}
int multiply(int m , int n){
    int product;
    product = m * n;
    return product;
}
int main(){
    // WE ARE LOOKING POINTER ASSIGNMENT AND POINTER ARITHMETIC HOW THEY WORK
    /*int arr[5]= {1,2,3,4,5};
    int *p;
    int *p1;
    p= arr;
    cout << arr << endl;// address of first index
    cout << *(&arr)<< endl;// cancel out will get address of first index 
    */

    /*p1=&arr[0];
    cout << p << " " << p1<< endl;
    cout << *p++ << endl;
    p--;
    cout << ++*p << endl;
    */

    /*cout << p << " " << *p<< endl;
    p = p + 2;
    cout << p << " " << *p << endl;
    p = p - 2;
    cout << p << " " << *p<< endl;
    */

    //To print addresses:
    /*for(int i =0; i<5;i++){
        cout << arr + i<<endl;

    }
    //To print values:
    for(int i=0; i<5; i++){
        cout << *(p+ i)<<endl;
    } 
    // To print values using pointers:
    for(int i=0;i<5; i++){
        cout << p[i]<< endl;
    }
    */
    
    // COMPARISON BETWEEN CHAR AND NUM ARRAYS
    /*char name[]="hassan";
    char *p = name;
    cout << p<<endl; // this will give full name
    cout << *p << endl; // this will give one letter of first index(h)

    int num[4]={1,2,3,4};
    int *ptr = num;
    cout << ptr << endl; // this will give address of first index
    cout << *ptr << endl; // this will give value of first index(1)
    cout << static_cast<void*>(p) << endl; // prints address of first char
    */
    
    // 1D ARRAY DYNAMIC ALLOCATION
    
    /*int size;
    cout << "Enter name length: ";
    cin >> size;
    cin.ignore();

    char *name = new char[size + 1]; // +1 for '\0' (string terminator)

    cout << "Enter your name: ";
    cin.get(name,size+1); // works because name is char*

    cout << "Hello, " << name << "!" << endl;

    delete[] name; 
    */
    
    // 2D ARRAY DYNAMIC ALLOCATION
    // 2D DYNAMIC INT ARRAY
    /*
    int row, col;
    cout << "Enter rows and colums: ";
    cin >> row >>  col;
    int **num = new int*[row];
    for (int i=0 ; i< row ; i++){
        num[i] = new int[col];
    }
    cin.ignore();
    for(int i=0;i<row;i++){
        for(int j=0;j < col; j++ ){
            cout << "Enter Element [" << i << "][" << j << "]: ";
            cin >> num[i][j];
        }
    }
    cout << "Values are: " << endl;
    for(int i=0;i<row;i++){
        for(int j=0;j < col; j++ ){
            cout << num[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < row; i++) {
        delete[] num[i];
    }
    delete[] num;
    */
   
    // 2D DYNAMIC CHAR ARRAY
    /*int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;
    
    // allocate array of pointers (rows)
    char** table = new char*[rows];

    // allocate each row
    for (int i = 0; i < rows; i++) {
        table[i] = new char[cols + 1]; // +1 for null terminator if storing strings
    }

    cin.ignore(); // clear newline from previous input
    for (int i = 0; i < rows; i++) {
    cin.get(table[i], cols + 1);  // reads row i
    cin.ignore(); // to remove '\n' left in the buffer
    }
    // we have used cin.get so we then use cin.ignore necessarily
    //So if you call it again in a loop, the very next call may read an empty string unless you handle the leftover \n.
    cout << "Table:\n";
    for (int i = 0; i < rows; i++) {
        cout << table[i] << endl;
    }
    // free memory
    for (int i = 0; i < rows; i++) {
        delete[] table[i];
    }
    delete[] table;
    */
    
   /*
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    // allocate array of pointers (rows)
    char** table = new char*[rows];

    // allocate each row
    for (int i = 0; i < rows; i++) {
        table[i] = new char[cols + 1]; // +1 for null terminator if storing strings
    }
        cin.ignore(); // clear newline from previous input
    // input elements
    for (int i = 0; i < rows; i++) {
        cout << "Enter string for row " << i << ": ";
        cin.getline(table[i], cols + 1); 
        //this is done by using cin.getline
        // no use of cin.ignore() here
    }
    // print elements
    cout << "Table:\n";
    for (int i = 0; i < rows; i++) {
        cout << table[i] << endl;
    }
    // free memory
    for (int i = 0; i < rows; i++) {
        delete[] table[i];
    }
    delete[] table;
    */
    
    // FUNCTION POINTERS
    /*int a, b;
    int value, value1;
    a= 10;
    b=20;
    cout << "values before swapping: " << a << " " << b<< endl;
    swap(&a,&b);
    cout << "values after swapping: " << a << " " << b << endl;
    value1 = sum(&a,&b);
    cout << "Value of a after adding a and b: " << a << endl;
    value = multiply(a,b);
    cout << "Product of a and b: " << endl << value; // value will be 300 not 200
    // because a is passed by reference so a has 30 not 20 (a was swapped before)
    */
    

   //CHARACTER ARRAY AND INTEGER ARRAY USING POINTERS
   //Classic C++ pointers-to-strings case(CHARACTER POINTER ARRAY)
   /*
    const char *a[3]={"Rida",
                    "Sara",
                    "Tony"};
    cout << *a+1<<   endl;
    cout << (*(a+1)+3)<< endl;
    cout << *(a+2)<< endl;

    //INT POINTER ARRAY
    int x=3, y=4,z=5;
    const int*arr[3]={&x ,&y ,&z};
    cout << **arr << endl;
    cout << **arr + 1 << endl; // this will first go to value x and then add 1 = 4
    cout << **(arr + 1) << endl; // this will give value y
    cout << *arr[1] << endl; // get y value
    cout << *arr[2] << endl; // get z value
    */
    /*char *names[] = {"Rida", "Sara", "Tony"};  // each string literal gives char*
    int *arr[] = {10, 20, 30};  // ❌ integers are not addresses
    int x=10, y=20, z=30;
    int *arr2[] = {&x, &y, &z};  // ✅ now addresses
    Key Differences:
    char* with string literals: "Rida" is stored as an array of characters in memory at compile time → it automatically decays into a pointer (address of first char).
    int* with numbers: 10,20,30 are temporary literal values, not stored in memory as arrays → no automatic decay into pointer. You must create variables and use &
    */

    // POINTER TO POINTER (DOUBLE POINTERS)
    /*
    int x= 10, y=20, z=30;
    int arr[3]={x, y ,z};
    int *p= arr;// arr is itself an address
    int **ptr= &p;
    cout << p << endl; // address of x
    cout << *ptr + 1 << endl;// this will give address of y value
    cout << *(*ptr + 1) << endl; // value of y
    */
    
    // POINTER TO POINTER CHAR ARRAY AND INT ARRAY(IN COPY)
    /*int rows,cols;
    cout<<"Enter rows and cols:";
    cin >> rows >> cols;
    char **a= new char *[rows];
    for(int i=0;i<rows;i++){
        a[rows]= new char[cols + 1];

    }
    cin.ignore();
    for(int i=0 ; i<rows; i++){

    }
    */

   // POINTER TO 2D ARRAYS
   // BASIC 2D ARRAY INTRODUCTION
   /*
   int a[3][3]= {{1,2,3},
                {4,5,6}};
    for(int i=0 ; i<2; i++){
        for (int j=0; j<3;j++){
            cout << a[i][j] << " " ;
        }
        cout << endl;
    }
    // USING POINTERS:
    int cols = 3;
    int count = 0;
        for (int *p = &a[0][0]; p <= &a[1][2]; p++) {
        cout << *p << " ";
        count++;
        if (count % cols == 0)  // after 3 elements, break line
        cout << endl;
    }
    */
    
   // DEREFERENCING IN 2D ARRAY LOOPS
   /*
    int a[2][3]= {{1,2,3},
                {4,5,6}};
   for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
        cout << *(*(a + i) + j) << " ";
    }
    cout << endl;
    }
    */
    
    // USING POINTERS AS 2D ARRAYS
    /*
    int a[2][3]= {{1,2,3},
                {4,5,6}};
    int (*p)[3] = a; //pointer to array of 3 ints
    // here [3] is telling 3 coloums
    cout << (*p) << endl; //address of a[0][0]
    cout << (*p)[0] << endl; // get value 1
    cout << (*p + 1) << endl; // address of a[0][1]
    cout << *(p + 1) + 1 << endl; // a[1][0] + 1 --> address of a[1][1]
    cout << (*(p+1))[1] << endl; // get value 5
    cout << *(*(p + 1) + 1) << endl; // by dereferencing twice using this will get value 5 too
    
    // USING POINTERS IN LOOPS
    for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
        cout << *(*(p+i)+j) << " ";   // pointer style
    }
    cout << endl;
    }
    */
    /*
    ->(*p) → address of first element of row 0 (&a[0][0]).
    ->(*p)[0] → value 1
    ->(*p + 1) → address of a[0][1]
    ->*(p+1) + 1 → address of a[1][1]
    */

}


/*Daigneault Pearce
Use macros to read in variable argument function parameters from stdarg.h
*/

int  sum (int count,...) {
    int i, sum;
    va_list ap; //point to each unnamed argument
    
    //logic
    va_start(ap, count);
    sum = 0;
    
    for(i = 0; i < count; i++){
        sum += va_arg(ap, int);
    }
    va_end(ap);
    //logic
    
    return sum;
}

int min(int count,...) {
    int min, i, tmp;
    va_list ap;
    
    va_start(ap, count);
    min = 1000000;
    tmp = 0;
    
    for( i = 0; i < count; i++ ){
        tmp = va_arg(ap, int);
        if( tmp < min)
            min = tmp;
    }
    return min;
}
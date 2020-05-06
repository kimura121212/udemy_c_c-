#include "showResult.h"
#include <stdio.h>

// extern : ansは他のファイルで定義されているものを使いますよという意味。
extern int ans;
 
void showAnswer(){
    printf("%d\n",ans);
}
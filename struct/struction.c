struct point {
	int x;
	int y;
};
struct rect{
	struct point pt1;
	struct point pt2;
};
int main(){
	struct point pt;
	struct point maxpt = {320, 200};
	printf("%d, %d", pt.x, pt.y);
	double dist, sqrt(double);
	dist = sqrt((double)pt.x * pt.x + (double)pt.y * pt.y);
	
	struct rect scream;
	scream.pt1.x;
	return 0;
}

struct point makepoint(int x, int y){
	struct point temp;
	temp.x = x;
	temp.y = y;
	return temp;
}

struct rect screem;
struct point middle;
struct point makepoint(int, int);
screem.pt1 = makepoint(0, 0);
screem.pt2 = makepoint(XMAX, YMAX);
middle = makepoint((screem.pt1.x + screem.pt2.x) / 2, 
					(screem.pt1.y + screem.pt2.y) / 2);

/*两点相加*/
struct point addpoint(struct point p1, struct point p2){
	p1.x += p2.x;
	p1.y += p2.y;
	return p1;
}
//  如果点在矩阵r内， 则返回1，否则返回0
int ptinrect(struct point p, struct rect r){
	return p.x>=r.pt1.x && p.x<r.pt2.x && p.y>=r.pt1.y && p.y<r.pt2.y;
}

#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))
// 将矩阵规范化
struct rect canonrect(struct rect r){
	struct rect temp;
	temp.pt1.x = min(r.pt1.x, r.pt2.x);
	temp.pt1.y = min(r.pt1.y, r.pt2.y);
	temp.pt2.x = max(r.pt1.x, r.pt2.x);
	temp.pt2.y = max(r.pt2.y, r.pt2.y);
}


//如果复制的结构很大，可以使用结构指针，类似于变量指针

struct point *pp;

struct point origin, *pp;

pp = &origin;

printf("origin is (%d,%d)\n", (*pp).x, (*pp).y)

// 结构指针的另一种简写方式：p->结构成员

printf("origin is (%d,%d)\n", pp->x, pp->y);

struct rect r, *rp = &r;
//下面四个表达式是等价的

r.pt1.x
rp->pt1.x
(r.pt1).x
(rp->pt1).x


// . -> () []
// 这四种运算符是优先级最高的

struct {
	int len;
	char *str;
} *p;


++p->len;
// 将增加len的值而不是p的值

//*p->str++ 先读取指针str指向的对象的值，再将str加1（与*s++相同）
//(*p->str)++ 将指针str指向的对象的值加1；
//*p++->str 先读取指针str指向的对象的值，然后再将p加1














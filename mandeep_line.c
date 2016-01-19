/*
Hi, I just made a bresenham like line plotting algorothm I would like to share. It is different from bresenham but has the same assumptions.(x2>x1,y2>y1,x2-x1>=y2-y1) following is the algorithm in c:
*/

void LineM(int x1,int y1,int x2,int y2) 
{
  int x,y,d,dx,dy; 
  y=y1; 
  dy=y2-y1; 
  dx=x2-x1; 
  d=0; 
  for(x=x1;x<=x2;x++) { 
    if ((d<<1)>=dx) 
    putpixel(x,y+1); 
    else 
    putpixel(x,y);
   
    d+=dy; 
    if (d>=dx)
    { 
      y++; 
      d-=dx; 
    }//if d>=dx 
  }//for 
}//lineM

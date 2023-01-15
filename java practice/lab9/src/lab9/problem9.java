package lab9;
public class problem9 {
    static int area(int l ,int w){
        return(l*w);
    }
    static int volume(int l ,int w,int h){
        return(l*w*h);
    }

    public static void main(String[] args) {
        int length=50,width=7,height=15;
        System.out.println("Area of the room is:"+area(length,width));
        System.out.println("Volume of the romm is:"+volume(length,width,height));
    }
}


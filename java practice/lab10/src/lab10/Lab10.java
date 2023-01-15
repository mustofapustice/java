package lab10;
class person {
    int age;
    int roll;
    void display(){
        System.out.print(" the age is :"+age);
    }
}
class student extends person{
    @Override
    void display(){
        System.out.print("the roll no. is:"+roll);
    }
}
public class Lab10 {
    public static void main(String[] args) {
        person p = new person();
        p.age = 22;
        p.display();
        System.out.println();
        student std = new student();
        std.roll=24322;
        std.display();
        System.out.println();
    }
    
}
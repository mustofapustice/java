
package labfinal;
class A {
    void show(){
        System.out.println("this is class A");
    }
}
class B {
    void show(){
        System.out.println("This is class B");
    }
}
public class problem15{
    public static void main(String[] args) {
    A objA = new A();
    B objB = new B();
    objA.show();
    objB.show();
    }
}



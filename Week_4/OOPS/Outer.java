class OuterClass {

    void display() {
        System.out.println("Display method of Outer class");
    }

    class Inner {
        void display() {
            System.out.println("Display method of Inner class");
        }
    }
}

public class Outer {

    public static void main(String[] args) {

        OuterClass obj = new OuterClass();
        obj.display();

        OuterClass.Inner in = obj.new Inner();
        in.display();
    }
}

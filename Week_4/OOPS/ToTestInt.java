interface test {
    void square(int x);
}

class Arithmetic implements test {
    public void square(int x) {
        System.out.println("Square = " + (x * x));
    }
}

public class ToTestInt {
    public static void main(String[] args) {
        Arithmetic obj = new Arithmetic();
        obj.square(5);
    }
}

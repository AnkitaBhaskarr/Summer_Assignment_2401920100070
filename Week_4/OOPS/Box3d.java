class Box {
    protected double length;
    protected double breadth;

    // Constructor
    public Box(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    // Area
    public double area() {
        return length * breadth;
    }
}

public class Box3d extends Box {
    private double height;

    // Constructor
    public Box3d(double length, double breadth, double height) {
        super(length, breadth);
        this.height = height;
    }

    // Volume
    public double volume() {
        return length * breadth * height;
    }

    public static void main(String[] args) {
        Box3d obj = new Box3d(10, 5, 2);

        System.out.println("Area = " + obj.area());
        System.out.println("Volume = " + obj.volume());
    }
}

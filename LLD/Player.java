package LLD;

public class Player {
//    Attributes: name, age, role, battingAverage, bowlingAverage
//    Methods: getDetails(), calculateBattingAverage(), calculateBowlingAverage()
    private String name;
    private int age;
    private String role;
    private double battingAverage;
    private double bowlingAverage;

    public Player(String name, int age, String role, double battingAverage, double bowlingAverage) {
        this.name = name;
        this.age = age;
        this.role = role;
        this.battingAverage = battingAverage;
        this.bowlingAverage = bowlingAverage;
    }

    public String getName() {
        return name;
    }

    public double calculateBattingAverage() {
        return battingAverage;
    }

    public double calculateBowlingAverage() {
        return bowlingAverage;
    }
}

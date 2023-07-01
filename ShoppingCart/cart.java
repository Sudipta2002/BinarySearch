package ShoppingCart;
import java.util.ArrayList;
import java.util.List;
public class cart {
    public static void main(String[] args) {

    }
}

class ShoppingCart {
    private List<Item> items;

    public ShoppingCart() {
        items = new ArrayList<>();
    }

    public void addItem(Item item) {
        items.add(item);
    }

    public void removeItem(Item item) {
        items.remove(item);
    }

    public double calculateTotalPrice() {
        double total = 0;
        for (Item item : items) {
            total += item.getPrice();
        }
        return total;
    }

    public void applyDiscount(double discountPercentage) {
        if (discountPercentage > 0 && discountPercentage <= 100) {
            double discountFactor = 1 - (discountPercentage / 100);
            for (Item item : items) {
                double discountedPrice = item.getPrice() * discountFactor;
                item.setPrice(discountedPrice);
            }
        } else {
            System.out.println("Invalid discount percentage.");
        }
    }
}
class Item {
    private String name;
    private double price;

    public Item(String name, double price) {
        this.name = name;
        this.price = price;
    }

    public String getName() {
        return name;
    }

    public double getPrice() {
        return price;
    }

    public void setPrice(double price) {
        this.price = price;
    }
}

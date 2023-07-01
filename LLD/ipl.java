package LLD;

import java.util.*;

public class ipl {
    public static void main(String[] args) {
        // Creating teams
        List<String> players1 = new ArrayList<>();
        players1.add("Rohit Sharma");
        players1.add("Hardik Pandya");
        players1.add("Jasprit Bumrah");
        Team team1 = new Team("Mumbai Indians", players1, "Mahela Jayawardene", "Wankhede Stadium");

        List<String> players2 = new ArrayList<>();
        players2.add("MS Dhoni");
        players2.add("Suresh Raina");
        players2.add("Ravindra Jadeja");
        Team team2 = new Team("Chennai Super Kings", players2, "Stephen Fleming", "M. A. Chidambaram Stadium");

        // Creating players
        Player player1 = new Player("Rohit Sharma", 34, "Batsman", 48.39, 0);
        Player player2 = new Player("MS Dhoni", 40, "Wicketkeeper-Batsman", 42.21, 0);

        // Creating venues
        Venue venue1 = new Venue("Wankhede Stadium", "Mumbai", 33000);
        Venue venue2 = new Venue("M. A. Chidambaram Stadium", "Chennai", 50000);

        // Creating matches
        Match match1 = new Match(team1, team2, venue1, "2023-05-01", "Mumbai Indians won by 10 runs");
        Match match2 = new Match(team2, team1, venue2, "2023-05-05", "Chennai Super Kings won by 6 wickets");

        // Creating tournament
        Tournament tournament = new Tournament();
        tournament.addTeam(team1);
        tournament.addTeam(team2);
        tournament.scheduleMatch(match1);
        tournament.scheduleMatch(match2);

        // Accessing information
        System.out.println(team1.getPlayers());  // Output: [Rohit Sharma, Hardik Pandya, Jasprit Bumrah]
        System.out.println(player1.calculateBattingAverage());  // Output: 48.39
        System.out.println(venue1.getCity());  // Output: Mumbai
        System.out.println(match1.getResult());
    }
}

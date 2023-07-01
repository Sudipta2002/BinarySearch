package LLD;

public class Match {
    private Team team1;
    private Team team2;
    private Venue venue;
    private String date;
    public String result;

    public Match(Team team1, Team team2, Venue venue, String date, String result) {
        this.team1 = team1;
        this.team2 = team2;
        this.venue = venue;
        this.date = date;
        this.result = result;
    }

    public Team[] getTeams() {
        return new Team[]{team1, team2};
    }

    public Venue getVenue() {
        return venue;
    }

    public String getDate() {
        return date;
    }

    public String getResult() {
        return result;
    }
}

package LLD;

import java.util.*;

public class Tournament {
    private List<Team> teams;
    private List<Match> matches;

    public Tournament() {
        teams = new ArrayList<>();
        matches = new ArrayList<>();
    }

    public void addTeam(Team team) {
        teams.add(team);
    }

    public void removeTeam(Team team) {
        teams.remove(team);
    }

    public void scheduleMatch(Match match) {
        matches.add(match);
    }

    public void updateMatchResult(Match match, String result) {
        match.result = result;
    }

}

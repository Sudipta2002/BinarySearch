package LLD;

import java.util.*;

public class Team {
    private String name;
    private List<String> players;
    private String coach;
    private String homeVenue;

    public Team(String name,List<String>players,String coach,String homeVenue){
        this.coach=coach;
        this.homeVenue=homeVenue;
        this.players=players;
        this.name=name;
    }
    public void addPlayer(String Player){
        players.add(Player);
    }
    public void removePlayer(String Player){
        players.remove(Player);
    }
//    getPlayers(), getCoach(), getHomeVenue()
    public List<String> getPlayers(){
        return players;
    }
    public String getCoach(){
        return coach;
    }
    public String getHomeVenue(){
        return homeVenue;
    }
}

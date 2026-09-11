                      /* Priority Queue bfs-1 using java */
import java.util.*;
public class Main{
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		int R = sc.nextInt();
		Map<Integer, LinkedList<int[]>> g = new HashMap<>();
		while(R-- >0){
			int a = sc.nextInt(), b = sc.nextInt(), dist = sc.nextInt();
			if(!map.contains(a)){
				map.put(a, new ArrayList<>());
				map.get(a).add(new int[]{b, dist});
			}
			if(!map.contains(b)){
				map.put(b, new ArrayList<>());
				map.get(b).add(new int[]{a, dist});
			}
		}
		int st = sc.nextInt(), end = sc.nextInt();
		PriorityQueue<int []> pq = new PriorityQueue<>((x,y)->{return x[1]-y[1];});
		pq.add(new int[]{st, 0});
		while(!pq.isEmpty()){
			int[] curr = pq.poll();
			int currCity = curr[0], currDist = curr[1];
			if(currCity == end){
				System.out.println(currDist)
			}
		}
	}
}
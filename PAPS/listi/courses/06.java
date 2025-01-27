package listi;

import java.util.Scanner;

public class CoursesListi6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        SLL<String> list = new SLL<>();
        for (int i = 0; i < n; i++) {
            list.insertLast(sc.nextLine());
        }
        System.out.print(list);

        int L = sc.nextInt();
        SLLNode<String> curr = list.getFirst();
        SLLNode<String> last = list.getFirst();

        while (curr != null){
            if (curr.element.length() == L){
                last = curr;
            }
            curr = curr.succ;
        }

        list.insertFirst(last.element);
        list.delete(last);
        System.out.println(list);
    }
}
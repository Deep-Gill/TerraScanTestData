public class main {

    public static void main (String[] args) {
        BinaryTree.Node root = null;
        // read values from command line and add them to the tree
        for (String arg: args) {
            int value = Integer.parseInt (arg);
            BinaryTree.Node n = new BinaryTree.Node(value);
            if (root == null)
                root = n;
            else
                root.insert (n);
        }
        if (root != null)
            root.printInOrder();
    }

}

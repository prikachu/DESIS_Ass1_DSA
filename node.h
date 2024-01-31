class node
{
public:
    node *prev = nullptr;
    node *next = nullptr;
    int val;

    node(int value)
    {
        val = value;
    }
    ~node()
    {
        if (prev)
        {
            prev = nullptr;
        }
        if (next)
        {
            next = nullptr;
        }
        delete prev;
        delete next;
        val = 0;
    }
};
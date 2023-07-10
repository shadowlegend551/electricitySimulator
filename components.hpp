class Component
{
    private:
        int voltage;
        int ampers;
        Component* previous_component;
        Component* next_component;

        virtual void modifyOutput();

    public:
        void tick()
        {
            modifyOutput();
            next_component->tick();
        }

    Component(Component* prev_component, int incoming_voltage, int incoming_ampers)
    {
        voltage = incoming_voltage;
        ampers = incoming_ampers;
        previous_component = prev_component;
    }
};

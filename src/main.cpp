// You will write all your code for this tutorial here!
#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>
#include <bn_keypad.h>

int main()
{
    bn::core::init();
    bn::backdrop::set_color(bn::color(10, 25, 2));

    while (true)
    {
        if (bn::keypad::a_pressed())
        {
            bn::backdrop::set_color(bn::color(31, 21, 22));
        }
        else if (bn::keypad::b_pressed())
        {
            bn::backdrop::set_color(bn::color(14, 3, 29));
        };

        bn::core::update();
    }
}
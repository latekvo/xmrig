// TODO: Move back to CN if possible.

namespace xmrig {

class AV
{
public:
    enum AlgoVariant {
        AV_AUTO,        // --av=0 Automatic mode.
        AV_SINGLE,      // --av=1  Single hash mode
        AV_DOUBLE,      // --av=2  Double hash mode
        AV_SINGLE_SOFT, // --av=3  Single hash mode (Software AES)
        AV_DOUBLE_SOFT, // --av=4  Double hash mode (Software AES)
        AV_TRIPLE,      // --av=5  Triple hash mode
        AV_QUAD,        // --av=6  Quard hash mode
        AV_PENTA,       // --av=7  Penta hash mode
        AV_TRIPLE_SOFT, // --av=8  Triple hash mode (Software AES)
        AV_QUAD_SOFT,   // --av=9  Quard hash mode  (Software AES)
        AV_PENTA_SOFT,  // --av=10 Penta hash mode  (Software AES)
        AV_MAX
    };

};

}
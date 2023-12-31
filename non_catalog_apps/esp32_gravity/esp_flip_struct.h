/*  Globals to track module status information */
enum AttackMode {
    ATTACK_BEACON,
    ATTACK_PROBE,
    ATTACK_SNIFF,
    ATTACK_DEAUTH,
    ATTACK_MANA,
    ATTACK_MANA_VERBOSE,
    ATTACK_MANA_LOUD,
    ATTACK_AP_DOS,
    ATTACK_AP_CLONE,
    ATTACK_SCAN,
    ATTACK_HANDSHAKE,
    ATTACK_RANDOMISE_MAC, // True
    ATTACKS_COUNT
};
typedef enum AttackMode AttackMode;

enum GravityCommand {
    GRAVITY_NONE,
    GRAVITY_BEACON,
    GRAVITY_TARGET_SSIDS,
    GRAVITY_PROBE,
    GRAVITY_SNIFF,
    GRAVITY_DEAUTH,
    GRAVITY_MANA,
    GRAVITY_STALK,
    GRAVITY_AP_DOS,
    GRAVITY_AP_CLONE,
    GRAVITY_SCAN,
    GRAVITY_HOP,
    GRAVITY_SET,
    GRAVITY_GET,
    GRAVITY_VIEW,
    GRAVITY_SELECT,
    GRAVITY_CLEAR,
    GRAVITY_HANDSHAKE,
    GRAVITY_COMMANDS
};
typedef enum GravityCommand GravityCommand;

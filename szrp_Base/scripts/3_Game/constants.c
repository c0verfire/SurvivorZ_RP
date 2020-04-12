modded class GameConstants
{
	/**
	 * \defgroup Configurations for StaminaHandler class
	 * \desc Configurations for StaminaHandler class
	 * @{
	 */
		// unit = currently percent (stamina max is 100)
	const int 	STAMINA_DRAIN_STANDING_SPRINT_PER_SEC = 2.8; //in units (how much sprint depletes stamina)
	const int 	STAMINA_DRAIN_CROUCHED_SPRINT_PER_SEC = 1; //in units (how much sprint in crouch depletes stamina)
	const int 	STAMINA_DRAIN_PRONE_SPRINT_PER_SEC = 3; //in units (how much sprint in prone depletes stamina)
	const int	STAMINA_DRAIN_SWIM_FAST_PER_SEC = 3.25; //in units (how much fast swimming depletes stamina)
	const int	STAMINA_DRAIN_LADDER_FAST_PER_SEC = 8; //in units (how much fast ladder climb depletes stamina)
	
	const float	STAMINA_DRAIN_HOLD_BREATH = 0.2; //in units (how much holding breath depletes stamina)
	const float	STAMINA_DRAIN_JUMP = 25;		// in units (how much jumping depletes stamina)
	const float	STAMINA_DRAIN_VAULT = 20;		// in units (how much jumping depletes stamina)
	const float	STAMINA_DRAIN_CLIMB = 42;		// in units (how much jumping depletes stamina)
	const float	STAMINA_DRAIN_MELEE_LIGHT = 5; //in units (how much light melee punch depletes stamina)
	const float	STAMINA_DRAIN_MELEE_HEAVY = 25; //in units (how much heavy melee punch depletes stamina)
	const float	STAMINA_DRAIN_MELEE_EVADE = 8; // in units (how much evade depletes stamina)
		
	const int 	STAMINA_GAIN_JOG_PER_SEC = 2.5; //in units (how much of stamina units is gained while jogging)
	const int 	STAMINA_GAIN_WALK_PER_SEC = 4.5; //in units (how much of stamina units is gained while walking)
	const int 	STAMINA_GAIN_IDLE_PER_SEC = 5; //in units (how much of stamina units is gained while iddling)
	const int	STAMINA_GAIN_SWIM_PER_SEC = 1; //in units (how much of stamina units is gained while slowly swim)
	const int	STAMINA_GAIN_LADDER_PER_SEC = 1; //in units (how much of stamina units is gained while slowly swim)
	const float STAMINA_GAIN_BONUS_CAP = 3.0; //in units (tells how much extra units can be added at best to stamina regain)
	
	const float STAMINA_KG_TO_STAMINAPERCENT_PENALTY = 0.75; //in units (by how many units is max stamina bar reduced for each 1 kg of load weight)
	const float STAMINA_MIN_CAP = 5; //in units (overload won't reduce max stamina bar under this value)
	const float STAMINA_HOLD_BREATH_THRESHOLD = 10; // in units
	const float STAMINA_JUMP_THRESHOLD = 25; // in units
	const float STAMINA_VAULT_THRESHOLD = 20; // in units
	const float STAMINA_CLIMB_THRESHOLD = 42; // in units
	
	
	const float STAMINA_MELEE_HEAVY_THRESHOLD = STAMINA_DRAIN_MELEE_HEAVY; // in units (how many units we need to make a heavy hit in melee)
	const float STAMINA_MELEE_EVADE_THRESHOLD = 8; // in units
	const float STAMINA_REGEN_COOLDOWN_DEPLETION = 0.45; // in secs (how much time we will spend in cooldown before the stamina will starts with regeneration)
	const float STAMINA_REGEN_COOLDOWN_EXHAUSTION = 0.5;
	const float STAMINA_WEIGHT_LIMIT_THRESHOLD = 6000; //! in grams (weight where the player is not penalized by stamina)
	const float STAMINA_KG_TO_GRAMS = 1000; //for kg to g conversion
	const float STAMINA_SYNC_RATE = 1; //in secs
	const float STAMINA_MAX = 100;
}
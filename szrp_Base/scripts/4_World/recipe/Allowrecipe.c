modded class PluginRecipesManager 
{
	override void RegisterRecipies()
	{	super.RegisterRecipies();
		RegisterRecipe(new CraftCrateMod);
		RegisterRecipe(new CraftNailMod);
	}
}
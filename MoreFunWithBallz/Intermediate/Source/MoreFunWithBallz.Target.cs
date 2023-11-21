using UnrealBuildTool;

public class MoreFunWithBallzTarget : TargetRules
{
	public MoreFunWithBallzTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V3;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Game;
		ExtraModuleNames.Add("MoreFunWithBallz");
	}
}

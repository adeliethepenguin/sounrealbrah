using UnrealBuildTool;

public class MoreFunWithBallzServerTarget : TargetRules
{
	public MoreFunWithBallzServerTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V3;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Server;
		ExtraModuleNames.Add("MoreFunWithBallz");
	}
}

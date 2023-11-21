using UnrealBuildTool;

public class MoreFunWithBallzClientTarget : TargetRules
{
	public MoreFunWithBallzClientTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V3;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Client;
		ExtraModuleNames.Add("MoreFunWithBallz");
	}
}

Std_RegisteredInMatchCall::
	buffertrainerclassname STR_VAR_1, VAR_0x8000
	buffertrainername STR_VAR_2, VAR_0x8000
	closemessage
	delay 20
	playfanfare MUS_HG_POKEGEAR_REGISTERED
	msgbox gText_RegisteredTrainerinPokeNav, MSGBOX_DEFAULT
	waitfanfare
	delay 40
	closemessage
	return

EventScript_TryGetTrainerScript::
	special ShouldTryGetTrainerScript
	goto_if_eq VAR_RESULT, TRUE, EventScript_GotoTrainerScript
	releaseall
	end

EventScript_GotoTrainerScript::
	gotobeatenscript
	releaseall
	end

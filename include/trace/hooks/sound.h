/* SPDX-License-Identifier: GPL-2.0 */
#undef TRACE_SYSTEM
#define TRACE_SYSTEM sound
#undef TRACE_INCLUDE_PATH
#define TRACE_INCLUDE_PATH trace/hooks
#if !defined(_TRACE_HOOK_SOUND_H) || defined(TRACE_HEADER_MULTI_READ)
#define _TRACE_HOOK_SOUND_H

#include <trace/hooks/vendor_hooks.h>
/*
 * Following tracepoints are not exported in tracefs and provide a
 * mechanism for vendor modules to hook and extend functionality
 */
struct snd_soc_pcm_runtime;
DECLARE_HOOK(android_vh_snd_get_play_cap,
	TP_PROTO(struct snd_soc_pcm_runtime *rtd,
		int *has_playback, int *has_capture),
	TP_ARGS(rtd, has_playback, has_capture));

#endif /* _TRACE_HOOK_SOUND_H */
/* This part must be outside protection */
#include <trace/define_trace.h>


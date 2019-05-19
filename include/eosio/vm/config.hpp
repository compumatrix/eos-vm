#pragma once

// create constexpr flags for whether the backend should obey alignment hints
#ifdef EOS_VM_ALIGN_MEMORY_OPS
inline constexpr bool should_align_memory_ops = true;
#else
inline constexpr bool should_align_memory_ops = false;
#endif

// use Boost
#ifdef EOS_VM_USE_BOOST
inline constexpr bool should_use_boost = true;
#else
inline constexpr bool should_use_boost = false;
#endif

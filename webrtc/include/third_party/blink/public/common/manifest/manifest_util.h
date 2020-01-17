// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_COMMON_MANIFEST_MANIFEST_UTIL_H_
#define THIRD_PARTY_BLINK_PUBLIC_COMMON_MANIFEST_MANIFEST_UTIL_H_

#include <string>

#include "third_party/blink/public/common/common_export.h"
#include "third_party/blink/public/common/manifest/web_display_mode.h"
#include "third_party/blink/public/common/screen_orientation/web_screen_orientation_lock_type.h"

namespace blink {

// Converts a blink::WebDisplayMode to a string. Returns one of
// https://www.w3.org/TR/appmanifest/#dfn-display-modes-values. Return values
// are lowercase. Returns an empty string for blink::WebDisplayModeUndefined.
BLINK_COMMON_EXPORT std::string WebDisplayModeToString(
    blink::WebDisplayMode display);

// Returns the blink::WebDisplayMode which matches |display|.
// |display| should be one of
// https://www.w3.org/TR/appmanifest/#dfn-display-modes-values. |display| is
// case insensitive. Returns blink::WebDisplayModeUndefined if there is no
// match.
BLINK_COMMON_EXPORT blink::WebDisplayMode WebDisplayModeFromString(
    const std::string& display);

// Converts a blink::WebScreenOrientationLockType to a string. Returns one of
// https://www.w3.org/TR/screen-orientation/#orientationlocktype-enum. Return
// values are lowercase. Returns an empty string for
// blink::WebScreenOrientationLockDefault.
BLINK_COMMON_EXPORT std::string WebScreenOrientationLockTypeToString(
    blink::WebScreenOrientationLockType);

// Returns the blink::WebScreenOrientationLockType which matches
// |orientation|. |orientation| should be one of
// https://www.w3.org/TR/screen-orientation/#orientationlocktype-enum.
// |orientation| is case insensitive. Returns
// blink::WebScreenOrientationLockDefault if there is no match.
BLINK_COMMON_EXPORT blink::WebScreenOrientationLockType
WebScreenOrientationLockTypeFromString(const std::string& orientation);

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_COMMON_MANIFEST_MANIFEST_UTIL_H_

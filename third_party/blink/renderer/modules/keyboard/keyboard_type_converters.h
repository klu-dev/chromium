// Copyright 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_KEYBOARD_KEYBOARD_TYPE_CONVERTERS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_KEYBOARD_KEYBOARD_TYPE_CONVERTERS_H_

#include "mojo/public/cpp/bindings/type_converter.h"
#include "third_party/blink/public/mojom/keyboard_lock/keyboard_lock.mojom-blink-forward.h"
#include "third_party/blink/renderer/modules/modules_export.h"

namespace blink {
class KeyboardLayoutName;
}  // namespace blink

namespace mojo {

// Converters from Mojo to IDL.

template <>
struct MODULES_EXPORT
    TypeConverter<blink::KeyboardLayoutName*,
                  blink::mojom::blink::KeyboardLayoutNamePtr> {
  static blink::KeyboardLayoutName* Convert(
      const blink::mojom::blink::KeyboardLayoutNamePtr& input);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_KEYBOARD_KEYBOARD_TYPE_CONVERTERS_H_

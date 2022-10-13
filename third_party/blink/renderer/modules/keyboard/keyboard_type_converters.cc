// Copyright 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/renderer/modules/keyboard/keyboard_type_converters.h"

#include "third_party/blink/public/mojom/keyboard_lock/keyboard_lock.mojom-blink.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_keyboard_layout_name.h"
#include "third_party/blink/renderer/modules/modules_export.h"

namespace mojo {

using blink::mojom::blink::KeyboardLayoutNamePtr;

// Converters from Mojo to IDL.

// static
blink::KeyboardLayoutName*
TypeConverter<blink::KeyboardLayoutName*, KeyboardLayoutNamePtr>::Convert(
    const KeyboardLayoutNamePtr& input) {
  if (!input) {
    return nullptr;
  }
  auto* output = blink::KeyboardLayoutName::Create();
  output->setLocale(input->locale);
  output->setLayout(input->layout);

  return output;
}

}  // namespace mojo

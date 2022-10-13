// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_EVENTS_MOJOM_KEYBOARD_BLINK_MOJOM_TRAITS_H_
#define UI_EVENTS_MOJOM_KEYBOARD_BLINK_MOJOM_TRAITS_H_

#include <string>
#include "third_party/blink/public/mojom/keyboard_lock/keyboard_lock.mojom.h"
#include "ui/events/keycodes/dom/dom_keyboard_layout_name.h"

namespace mojo {

template <>
struct StructTraits<blink::mojom::KeyboardLayoutNameDataView,
                    ui::DomKeyboardLayoutName> {
  static std::string locale(const ui::DomKeyboardLayoutName& p) {
    return p.locale();
  }
  static std::string layout(const ui::DomKeyboardLayoutName& p) {
    return p.layout();
  }
  static bool Read(blink::mojom::KeyboardLayoutNameDataView data,
                   ui::DomKeyboardLayoutName* out) {
    std::string locale, layout;
    if (!data.ReadLocale(&locale))
      return false;
    if (!data.ReadLocale(&layout))
      return false;
    *out = {locale, layout};
    return true;
  }
};

}  // namespace mojo

#endif  // UI_EVENTS_MOJOM_KEYBOARD_BLINK_MOJOM_TRAITS_H_

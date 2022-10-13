// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_EVENTS_KEYCODES_DOM_DOM_KEYBOARD_LAYOUT_NAME_H_
#define UI_EVENTS_KEYCODES_DOM_DOM_KEYBOARD_LAYOUT_NAME_H_

#include <string>

namespace ui {

class DomKeyboardLayoutName final {
 public:
  DomKeyboardLayoutName() = default;
  DomKeyboardLayoutName(const std::string& locale, const std::string& layout)
      : locale_(locale), layout_(layout) {}
  ~DomKeyboardLayoutName() = default;

  std::string locale() const { return locale_; }
  void set_locale(const std::string& locale) { locale_ = locale; }
  std::string layout() const { return layout_; }
  void set_layout(const std::string& layout) { layout_ = layout; }

 private:
  std::string locale_;
  std::string layout_;
};

}  // namespace ui

#endif  // UI_EVENTS_KEYCODES_DOM_DOM_KEYBOARD_LAYOUT_NAME_H_

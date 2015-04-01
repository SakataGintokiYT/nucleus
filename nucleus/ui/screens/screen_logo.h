/**
 * (c) 2015 Nucleus project. All rights reserved.
 * Released under GPL v2 license. Read LICENSE for more details.
 */

#pragma once

#include "nucleus/ui/screen.h"

#include "nucleus/ui/widgets/widget_image.h"

class ScreenLogo : public Screen {
    WidgetImage logo;

public:
    ScreenLogo();

    virtual void update() override;
    virtual void render() override;
};

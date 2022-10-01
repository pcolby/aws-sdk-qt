// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETHEMERESPONSE_P_H
#define QTAWS_UPDATETHEMERESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class UpdateThemeResponse;

class UpdateThemeResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit UpdateThemeResponsePrivate(UpdateThemeResponse * const q);

    void parseUpdateThemeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateThemeResponse)
    Q_DISABLE_COPY(UpdateThemeResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif

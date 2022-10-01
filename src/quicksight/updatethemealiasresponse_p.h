// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETHEMEALIASRESPONSE_P_H
#define QTAWS_UPDATETHEMEALIASRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class UpdateThemeAliasResponse;

class UpdateThemeAliasResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit UpdateThemeAliasResponsePrivate(UpdateThemeAliasResponse * const q);

    void parseUpdateThemeAliasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateThemeAliasResponse)
    Q_DISABLE_COPY(UpdateThemeAliasResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif

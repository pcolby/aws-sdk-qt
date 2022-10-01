// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETHEMEALIASRESPONSE_P_H
#define QTAWS_CREATETHEMEALIASRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class CreateThemeAliasResponse;

class CreateThemeAliasResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit CreateThemeAliasResponsePrivate(CreateThemeAliasResponse * const q);

    void parseCreateThemeAliasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateThemeAliasResponse)
    Q_DISABLE_COPY(CreateThemeAliasResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHEMEALIASESRESPONSE_P_H
#define QTAWS_LISTTHEMEALIASESRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class ListThemeAliasesResponse;

class ListThemeAliasesResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit ListThemeAliasesResponsePrivate(ListThemeAliasesResponse * const q);

    void parseListThemeAliasesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListThemeAliasesResponse)
    Q_DISABLE_COPY(ListThemeAliasesResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHEMEVERSIONSRESPONSE_P_H
#define QTAWS_LISTTHEMEVERSIONSRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class ListThemeVersionsResponse;

class ListThemeVersionsResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit ListThemeVersionsResponsePrivate(ListThemeVersionsResponse * const q);

    void parseListThemeVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListThemeVersionsResponse)
    Q_DISABLE_COPY(ListThemeVersionsResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif

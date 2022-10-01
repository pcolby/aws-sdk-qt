// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDASHBOARDSRESPONSE_P_H
#define QTAWS_LISTDASHBOARDSRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class ListDashboardsResponse;

class ListDashboardsResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit ListDashboardsResponsePrivate(ListDashboardsResponse * const q);

    void parseListDashboardsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDashboardsResponse)
    Q_DISABLE_COPY(ListDashboardsResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHDASHBOARDSRESPONSE_P_H
#define QTAWS_SEARCHDASHBOARDSRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class SearchDashboardsResponse;

class SearchDashboardsResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit SearchDashboardsResponsePrivate(SearchDashboardsResponse * const q);

    void parseSearchDashboardsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchDashboardsResponse)
    Q_DISABLE_COPY(SearchDashboardsResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif

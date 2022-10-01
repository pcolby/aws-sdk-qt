// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDASHBOARDVERSIONSRESPONSE_P_H
#define QTAWS_LISTDASHBOARDVERSIONSRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class ListDashboardVersionsResponse;

class ListDashboardVersionsResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit ListDashboardVersionsResponsePrivate(ListDashboardVersionsResponse * const q);

    void parseListDashboardVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDashboardVersionsResponse)
    Q_DISABLE_COPY(ListDashboardVersionsResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif

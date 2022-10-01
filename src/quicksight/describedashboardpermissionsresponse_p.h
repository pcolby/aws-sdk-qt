// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDASHBOARDPERMISSIONSRESPONSE_P_H
#define QTAWS_DESCRIBEDASHBOARDPERMISSIONSRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class DescribeDashboardPermissionsResponse;

class DescribeDashboardPermissionsResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit DescribeDashboardPermissionsResponsePrivate(DescribeDashboardPermissionsResponse * const q);

    void parseDescribeDashboardPermissionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDashboardPermissionsResponse)
    Q_DISABLE_COPY(DescribeDashboardPermissionsResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif

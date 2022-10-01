// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDASHBOARDPERMISSIONSRESPONSE_P_H
#define QTAWS_UPDATEDASHBOARDPERMISSIONSRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class UpdateDashboardPermissionsResponse;

class UpdateDashboardPermissionsResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit UpdateDashboardPermissionsResponsePrivate(UpdateDashboardPermissionsResponse * const q);

    void parseUpdateDashboardPermissionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDashboardPermissionsResponse)
    Q_DISABLE_COPY(UpdateDashboardPermissionsResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif

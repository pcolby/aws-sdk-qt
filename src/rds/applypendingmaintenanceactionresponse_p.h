// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLYPENDINGMAINTENANCEACTIONRESPONSE_P_H
#define QTAWS_APPLYPENDINGMAINTENANCEACTIONRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class ApplyPendingMaintenanceActionResponse;

class ApplyPendingMaintenanceActionResponsePrivate : public RdsResponsePrivate {

public:

    explicit ApplyPendingMaintenanceActionResponsePrivate(ApplyPendingMaintenanceActionResponse * const q);

    void parseApplyPendingMaintenanceActionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ApplyPendingMaintenanceActionResponse)
    Q_DISABLE_COPY(ApplyPendingMaintenanceActionResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif

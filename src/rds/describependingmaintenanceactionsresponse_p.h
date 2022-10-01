// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPENDINGMAINTENANCEACTIONSRESPONSE_P_H
#define QTAWS_DESCRIBEPENDINGMAINTENANCEACTIONSRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class DescribePendingMaintenanceActionsResponse;

class DescribePendingMaintenanceActionsResponsePrivate : public RdsResponsePrivate {

public:

    explicit DescribePendingMaintenanceActionsResponsePrivate(DescribePendingMaintenanceActionsResponse * const q);

    void parseDescribePendingMaintenanceActionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePendingMaintenanceActionsResponse)
    Q_DISABLE_COPY(DescribePendingMaintenanceActionsResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif

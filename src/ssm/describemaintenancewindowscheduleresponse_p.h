// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAINTENANCEWINDOWSCHEDULERESPONSE_P_H
#define QTAWS_DESCRIBEMAINTENANCEWINDOWSCHEDULERESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DescribeMaintenanceWindowScheduleResponse;

class DescribeMaintenanceWindowScheduleResponsePrivate : public SsmResponsePrivate {

public:

    explicit DescribeMaintenanceWindowScheduleResponsePrivate(DescribeMaintenanceWindowScheduleResponse * const q);

    void parseDescribeMaintenanceWindowScheduleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeMaintenanceWindowScheduleResponse)
    Q_DISABLE_COPY(DescribeMaintenanceWindowScheduleResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif

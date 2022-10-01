// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMONITORINGSCHEDULERESPONSE_P_H
#define QTAWS_DESCRIBEMONITORINGSCHEDULERESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DescribeMonitoringScheduleResponse;

class DescribeMonitoringScheduleResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DescribeMonitoringScheduleResponsePrivate(DescribeMonitoringScheduleResponse * const q);

    void parseDescribeMonitoringScheduleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeMonitoringScheduleResponse)
    Q_DISABLE_COPY(DescribeMonitoringScheduleResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPMONITORINGSCHEDULERESPONSE_P_H
#define QTAWS_STOPMONITORINGSCHEDULERESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class StopMonitoringScheduleResponse;

class StopMonitoringScheduleResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit StopMonitoringScheduleResponsePrivate(StopMonitoringScheduleResponse * const q);

    void parseStopMonitoringScheduleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopMonitoringScheduleResponse)
    Q_DISABLE_COPY(StopMonitoringScheduleResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif

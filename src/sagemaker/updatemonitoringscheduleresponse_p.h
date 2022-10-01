// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMONITORINGSCHEDULERESPONSE_P_H
#define QTAWS_UPDATEMONITORINGSCHEDULERESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class UpdateMonitoringScheduleResponse;

class UpdateMonitoringScheduleResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit UpdateMonitoringScheduleResponsePrivate(UpdateMonitoringScheduleResponse * const q);

    void parseUpdateMonitoringScheduleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateMonitoringScheduleResponse)
    Q_DISABLE_COPY(UpdateMonitoringScheduleResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif

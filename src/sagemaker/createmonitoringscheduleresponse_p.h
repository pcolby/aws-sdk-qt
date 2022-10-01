// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMONITORINGSCHEDULERESPONSE_P_H
#define QTAWS_CREATEMONITORINGSCHEDULERESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreateMonitoringScheduleResponse;

class CreateMonitoringScheduleResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreateMonitoringScheduleResponsePrivate(CreateMonitoringScheduleResponse * const q);

    void parseCreateMonitoringScheduleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateMonitoringScheduleResponse)
    Q_DISABLE_COPY(CreateMonitoringScheduleResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif

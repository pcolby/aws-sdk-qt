// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMONITORINGSCHEDULERESPONSE_P_H
#define QTAWS_DELETEMONITORINGSCHEDULERESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DeleteMonitoringScheduleResponse;

class DeleteMonitoringScheduleResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DeleteMonitoringScheduleResponsePrivate(DeleteMonitoringScheduleResponse * const q);

    void parseDeleteMonitoringScheduleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteMonitoringScheduleResponse)
    Q_DISABLE_COPY(DeleteMonitoringScheduleResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif

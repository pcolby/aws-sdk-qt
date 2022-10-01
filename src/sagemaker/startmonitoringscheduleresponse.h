// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMONITORINGSCHEDULERESPONSE_H
#define QTAWS_STARTMONITORINGSCHEDULERESPONSE_H

#include "sagemakerresponse.h"
#include "startmonitoringschedulerequest.h"

namespace QtAws {
namespace SageMaker {

class StartMonitoringScheduleResponsePrivate;

class QTAWSSAGEMAKER_EXPORT StartMonitoringScheduleResponse : public SageMakerResponse {
    Q_OBJECT

public:
    StartMonitoringScheduleResponse(const StartMonitoringScheduleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartMonitoringScheduleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartMonitoringScheduleResponse)
    Q_DISABLE_COPY(StartMonitoringScheduleResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMONITORINGSCHEDULERESPONSE_H
#define QTAWS_UPDATEMONITORINGSCHEDULERESPONSE_H

#include "sagemakerresponse.h"
#include "updatemonitoringschedulerequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateMonitoringScheduleResponsePrivate;

class QTAWSSAGEMAKER_EXPORT UpdateMonitoringScheduleResponse : public SageMakerResponse {
    Q_OBJECT

public:
    UpdateMonitoringScheduleResponse(const UpdateMonitoringScheduleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateMonitoringScheduleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMonitoringScheduleResponse)
    Q_DISABLE_COPY(UpdateMonitoringScheduleResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif

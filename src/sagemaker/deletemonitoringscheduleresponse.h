// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMONITORINGSCHEDULERESPONSE_H
#define QTAWS_DELETEMONITORINGSCHEDULERESPONSE_H

#include "sagemakerresponse.h"
#include "deletemonitoringschedulerequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteMonitoringScheduleResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DeleteMonitoringScheduleResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DeleteMonitoringScheduleResponse(const DeleteMonitoringScheduleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteMonitoringScheduleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMonitoringScheduleResponse)
    Q_DISABLE_COPY(DeleteMonitoringScheduleResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMONITORINGSCHEDULERESPONSE_H
#define QTAWS_CREATEMONITORINGSCHEDULERESPONSE_H

#include "sagemakerresponse.h"
#include "createmonitoringschedulerequest.h"

namespace QtAws {
namespace SageMaker {

class CreateMonitoringScheduleResponsePrivate;

class QTAWSSAGEMAKER_EXPORT CreateMonitoringScheduleResponse : public SageMakerResponse {
    Q_OBJECT

public:
    CreateMonitoringScheduleResponse(const CreateMonitoringScheduleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateMonitoringScheduleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMonitoringScheduleResponse)
    Q_DISABLE_COPY(CreateMonitoringScheduleResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif

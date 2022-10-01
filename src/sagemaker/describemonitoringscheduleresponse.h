// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMONITORINGSCHEDULERESPONSE_H
#define QTAWS_DESCRIBEMONITORINGSCHEDULERESPONSE_H

#include "sagemakerresponse.h"
#include "describemonitoringschedulerequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeMonitoringScheduleResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DescribeMonitoringScheduleResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DescribeMonitoringScheduleResponse(const DescribeMonitoringScheduleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeMonitoringScheduleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMonitoringScheduleResponse)
    Q_DISABLE_COPY(DescribeMonitoringScheduleResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif

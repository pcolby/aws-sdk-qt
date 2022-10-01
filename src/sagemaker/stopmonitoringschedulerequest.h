// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPMONITORINGSCHEDULEREQUEST_H
#define QTAWS_STOPMONITORINGSCHEDULEREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class StopMonitoringScheduleRequestPrivate;

class QTAWSSAGEMAKER_EXPORT StopMonitoringScheduleRequest : public SageMakerRequest {

public:
    StopMonitoringScheduleRequest(const StopMonitoringScheduleRequest &other);
    StopMonitoringScheduleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopMonitoringScheduleRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif

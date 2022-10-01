// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMONITORINGSCHEDULEREQUEST_H
#define QTAWS_STARTMONITORINGSCHEDULEREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class StartMonitoringScheduleRequestPrivate;

class QTAWSSAGEMAKER_EXPORT StartMonitoringScheduleRequest : public SageMakerRequest {

public:
    StartMonitoringScheduleRequest(const StartMonitoringScheduleRequest &other);
    StartMonitoringScheduleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartMonitoringScheduleRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif

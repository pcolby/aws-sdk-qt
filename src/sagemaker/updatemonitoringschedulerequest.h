// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMONITORINGSCHEDULEREQUEST_H
#define QTAWS_UPDATEMONITORINGSCHEDULEREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateMonitoringScheduleRequestPrivate;

class QTAWSSAGEMAKER_EXPORT UpdateMonitoringScheduleRequest : public SageMakerRequest {

public:
    UpdateMonitoringScheduleRequest(const UpdateMonitoringScheduleRequest &other);
    UpdateMonitoringScheduleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMonitoringScheduleRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif

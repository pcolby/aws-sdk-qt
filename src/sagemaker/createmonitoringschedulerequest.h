// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMONITORINGSCHEDULEREQUEST_H
#define QTAWS_CREATEMONITORINGSCHEDULEREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateMonitoringScheduleRequestPrivate;

class QTAWSSAGEMAKER_EXPORT CreateMonitoringScheduleRequest : public SageMakerRequest {

public:
    CreateMonitoringScheduleRequest(const CreateMonitoringScheduleRequest &other);
    CreateMonitoringScheduleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMonitoringScheduleRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif

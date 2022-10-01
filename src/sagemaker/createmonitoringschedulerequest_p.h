// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMONITORINGSCHEDULEREQUEST_P_H
#define QTAWS_CREATEMONITORINGSCHEDULEREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createmonitoringschedulerequest.h"

namespace QtAws {
namespace SageMaker {

class CreateMonitoringScheduleRequest;

class CreateMonitoringScheduleRequestPrivate : public SageMakerRequestPrivate {

public:
    CreateMonitoringScheduleRequestPrivate(const SageMakerRequest::Action action,
                                   CreateMonitoringScheduleRequest * const q);
    CreateMonitoringScheduleRequestPrivate(const CreateMonitoringScheduleRequestPrivate &other,
                                   CreateMonitoringScheduleRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateMonitoringScheduleRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif

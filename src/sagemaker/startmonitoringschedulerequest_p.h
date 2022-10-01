// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMONITORINGSCHEDULEREQUEST_P_H
#define QTAWS_STARTMONITORINGSCHEDULEREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "startmonitoringschedulerequest.h"

namespace QtAws {
namespace SageMaker {

class StartMonitoringScheduleRequest;

class StartMonitoringScheduleRequestPrivate : public SageMakerRequestPrivate {

public:
    StartMonitoringScheduleRequestPrivate(const SageMakerRequest::Action action,
                                   StartMonitoringScheduleRequest * const q);
    StartMonitoringScheduleRequestPrivate(const StartMonitoringScheduleRequestPrivate &other,
                                   StartMonitoringScheduleRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartMonitoringScheduleRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif

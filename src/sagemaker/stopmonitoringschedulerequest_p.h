// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPMONITORINGSCHEDULEREQUEST_P_H
#define QTAWS_STOPMONITORINGSCHEDULEREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "stopmonitoringschedulerequest.h"

namespace QtAws {
namespace SageMaker {

class StopMonitoringScheduleRequest;

class StopMonitoringScheduleRequestPrivate : public SageMakerRequestPrivate {

public:
    StopMonitoringScheduleRequestPrivate(const SageMakerRequest::Action action,
                                   StopMonitoringScheduleRequest * const q);
    StopMonitoringScheduleRequestPrivate(const StopMonitoringScheduleRequestPrivate &other,
                                   StopMonitoringScheduleRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopMonitoringScheduleRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif

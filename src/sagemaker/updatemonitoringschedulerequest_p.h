// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMONITORINGSCHEDULEREQUEST_P_H
#define QTAWS_UPDATEMONITORINGSCHEDULEREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "updatemonitoringschedulerequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateMonitoringScheduleRequest;

class UpdateMonitoringScheduleRequestPrivate : public SageMakerRequestPrivate {

public:
    UpdateMonitoringScheduleRequestPrivate(const SageMakerRequest::Action action,
                                   UpdateMonitoringScheduleRequest * const q);
    UpdateMonitoringScheduleRequestPrivate(const UpdateMonitoringScheduleRequestPrivate &other,
                                   UpdateMonitoringScheduleRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateMonitoringScheduleRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif

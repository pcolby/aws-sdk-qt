// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMONITORINGSCHEDULEREQUEST_P_H
#define QTAWS_DELETEMONITORINGSCHEDULEREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "deletemonitoringschedulerequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteMonitoringScheduleRequest;

class DeleteMonitoringScheduleRequestPrivate : public SageMakerRequestPrivate {

public:
    DeleteMonitoringScheduleRequestPrivate(const SageMakerRequest::Action action,
                                   DeleteMonitoringScheduleRequest * const q);
    DeleteMonitoringScheduleRequestPrivate(const DeleteMonitoringScheduleRequestPrivate &other,
                                   DeleteMonitoringScheduleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteMonitoringScheduleRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif

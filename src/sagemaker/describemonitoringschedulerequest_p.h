// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMONITORINGSCHEDULEREQUEST_P_H
#define QTAWS_DESCRIBEMONITORINGSCHEDULEREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describemonitoringschedulerequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeMonitoringScheduleRequest;

class DescribeMonitoringScheduleRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeMonitoringScheduleRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeMonitoringScheduleRequest * const q);
    DescribeMonitoringScheduleRequestPrivate(const DescribeMonitoringScheduleRequestPrivate &other,
                                   DescribeMonitoringScheduleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeMonitoringScheduleRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif

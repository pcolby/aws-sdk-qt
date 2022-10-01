// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RUNSCHEDULEDINSTANCESREQUEST_P_H
#define QTAWS_RUNSCHEDULEDINSTANCESREQUEST_P_H

#include "ec2request_p.h"
#include "runscheduledinstancesrequest.h"

namespace QtAws {
namespace Ec2 {

class RunScheduledInstancesRequest;

class RunScheduledInstancesRequestPrivate : public Ec2RequestPrivate {

public:
    RunScheduledInstancesRequestPrivate(const Ec2Request::Action action,
                                   RunScheduledInstancesRequest * const q);
    RunScheduledInstancesRequestPrivate(const RunScheduledInstancesRequestPrivate &other,
                                   RunScheduledInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(RunScheduledInstancesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

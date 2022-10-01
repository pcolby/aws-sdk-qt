// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETCAPACITYREQUEST_P_H
#define QTAWS_DESCRIBEFLEETCAPACITYREQUEST_P_H

#include "gameliftrequest_p.h"
#include "describefleetcapacityrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeFleetCapacityRequest;

class DescribeFleetCapacityRequestPrivate : public GameLiftRequestPrivate {

public:
    DescribeFleetCapacityRequestPrivate(const GameLiftRequest::Action action,
                                   DescribeFleetCapacityRequest * const q);
    DescribeFleetCapacityRequestPrivate(const DescribeFleetCapacityRequestPrivate &other,
                                   DescribeFleetCapacityRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFleetCapacityRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif

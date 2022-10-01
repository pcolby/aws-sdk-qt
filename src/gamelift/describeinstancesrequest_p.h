// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCESREQUEST_P_H
#define QTAWS_DESCRIBEINSTANCESREQUEST_P_H

#include "gameliftrequest_p.h"
#include "describeinstancesrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeInstancesRequest;

class DescribeInstancesRequestPrivate : public GameLiftRequestPrivate {

public:
    DescribeInstancesRequestPrivate(const GameLiftRequest::Action action,
                                   DescribeInstancesRequest * const q);
    DescribeInstancesRequestPrivate(const DescribeInstancesRequestPrivate &other,
                                   DescribeInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeInstancesRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif

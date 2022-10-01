// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGAMESERVERINSTANCESREQUEST_P_H
#define QTAWS_DESCRIBEGAMESERVERINSTANCESREQUEST_P_H

#include "gameliftrequest_p.h"
#include "describegameserverinstancesrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeGameServerInstancesRequest;

class DescribeGameServerInstancesRequestPrivate : public GameLiftRequestPrivate {

public:
    DescribeGameServerInstancesRequestPrivate(const GameLiftRequest::Action action,
                                   DescribeGameServerInstancesRequest * const q);
    DescribeGameServerInstancesRequestPrivate(const DescribeGameServerInstancesRequestPrivate &other,
                                   DescribeGameServerInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeGameServerInstancesRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETUTILIZATIONREQUEST_P_H
#define QTAWS_DESCRIBEFLEETUTILIZATIONREQUEST_P_H

#include "gameliftrequest_p.h"
#include "describefleetutilizationrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeFleetUtilizationRequest;

class DescribeFleetUtilizationRequestPrivate : public GameLiftRequestPrivate {

public:
    DescribeFleetUtilizationRequestPrivate(const GameLiftRequest::Action action,
                                   DescribeFleetUtilizationRequest * const q);
    DescribeFleetUtilizationRequestPrivate(const DescribeFleetUtilizationRequestPrivate &other,
                                   DescribeFleetUtilizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFleetUtilizationRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif

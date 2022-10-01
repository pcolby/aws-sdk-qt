// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETLOCATIONCAPACITYREQUEST_P_H
#define QTAWS_DESCRIBEFLEETLOCATIONCAPACITYREQUEST_P_H

#include "gameliftrequest_p.h"
#include "describefleetlocationcapacityrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeFleetLocationCapacityRequest;

class DescribeFleetLocationCapacityRequestPrivate : public GameLiftRequestPrivate {

public:
    DescribeFleetLocationCapacityRequestPrivate(const GameLiftRequest::Action action,
                                   DescribeFleetLocationCapacityRequest * const q);
    DescribeFleetLocationCapacityRequestPrivate(const DescribeFleetLocationCapacityRequestPrivate &other,
                                   DescribeFleetLocationCapacityRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFleetLocationCapacityRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif

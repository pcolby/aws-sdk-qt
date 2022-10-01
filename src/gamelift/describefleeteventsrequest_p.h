// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETEVENTSREQUEST_P_H
#define QTAWS_DESCRIBEFLEETEVENTSREQUEST_P_H

#include "gameliftrequest_p.h"
#include "describefleeteventsrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeFleetEventsRequest;

class DescribeFleetEventsRequestPrivate : public GameLiftRequestPrivate {

public:
    DescribeFleetEventsRequestPrivate(const GameLiftRequest::Action action,
                                   DescribeFleetEventsRequest * const q);
    DescribeFleetEventsRequestPrivate(const DescribeFleetEventsRequestPrivate &other,
                                   DescribeFleetEventsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFleetEventsRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGAMESESSIONSREQUEST_P_H
#define QTAWS_DESCRIBEGAMESESSIONSREQUEST_P_H

#include "gameliftrequest_p.h"
#include "describegamesessionsrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeGameSessionsRequest;

class DescribeGameSessionsRequestPrivate : public GameLiftRequestPrivate {

public:
    DescribeGameSessionsRequestPrivate(const GameLiftRequest::Action action,
                                   DescribeGameSessionsRequest * const q);
    DescribeGameSessionsRequestPrivate(const DescribeGameSessionsRequestPrivate &other,
                                   DescribeGameSessionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeGameSessionsRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif

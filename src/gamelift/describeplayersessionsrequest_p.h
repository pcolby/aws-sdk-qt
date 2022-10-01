// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPLAYERSESSIONSREQUEST_P_H
#define QTAWS_DESCRIBEPLAYERSESSIONSREQUEST_P_H

#include "gameliftrequest_p.h"
#include "describeplayersessionsrequest.h"

namespace QtAws {
namespace GameLift {

class DescribePlayerSessionsRequest;

class DescribePlayerSessionsRequestPrivate : public GameLiftRequestPrivate {

public:
    DescribePlayerSessionsRequestPrivate(const GameLiftRequest::Action action,
                                   DescribePlayerSessionsRequest * const q);
    DescribePlayerSessionsRequestPrivate(const DescribePlayerSessionsRequestPrivate &other,
                                   DescribePlayerSessionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePlayerSessionsRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif

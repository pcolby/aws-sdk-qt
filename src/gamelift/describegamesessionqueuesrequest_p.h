// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGAMESESSIONQUEUESREQUEST_P_H
#define QTAWS_DESCRIBEGAMESESSIONQUEUESREQUEST_P_H

#include "gameliftrequest_p.h"
#include "describegamesessionqueuesrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeGameSessionQueuesRequest;

class DescribeGameSessionQueuesRequestPrivate : public GameLiftRequestPrivate {

public:
    DescribeGameSessionQueuesRequestPrivate(const GameLiftRequest::Action action,
                                   DescribeGameSessionQueuesRequest * const q);
    DescribeGameSessionQueuesRequestPrivate(const DescribeGameSessionQueuesRequestPrivate &other,
                                   DescribeGameSessionQueuesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeGameSessionQueuesRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif

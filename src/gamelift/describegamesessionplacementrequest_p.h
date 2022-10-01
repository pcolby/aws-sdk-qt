// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGAMESESSIONPLACEMENTREQUEST_P_H
#define QTAWS_DESCRIBEGAMESESSIONPLACEMENTREQUEST_P_H

#include "gameliftrequest_p.h"
#include "describegamesessionplacementrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeGameSessionPlacementRequest;

class DescribeGameSessionPlacementRequestPrivate : public GameLiftRequestPrivate {

public:
    DescribeGameSessionPlacementRequestPrivate(const GameLiftRequest::Action action,
                                   DescribeGameSessionPlacementRequest * const q);
    DescribeGameSessionPlacementRequestPrivate(const DescribeGameSessionPlacementRequestPrivate &other,
                                   DescribeGameSessionPlacementRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeGameSessionPlacementRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif

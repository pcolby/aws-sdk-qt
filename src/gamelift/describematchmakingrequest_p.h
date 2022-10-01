// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMATCHMAKINGREQUEST_P_H
#define QTAWS_DESCRIBEMATCHMAKINGREQUEST_P_H

#include "gameliftrequest_p.h"
#include "describematchmakingrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeMatchmakingRequest;

class DescribeMatchmakingRequestPrivate : public GameLiftRequestPrivate {

public:
    DescribeMatchmakingRequestPrivate(const GameLiftRequest::Action action,
                                   DescribeMatchmakingRequest * const q);
    DescribeMatchmakingRequestPrivate(const DescribeMatchmakingRequestPrivate &other,
                                   DescribeMatchmakingRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeMatchmakingRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif

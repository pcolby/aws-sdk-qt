// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMATCHMAKINGRULESETSREQUEST_P_H
#define QTAWS_DESCRIBEMATCHMAKINGRULESETSREQUEST_P_H

#include "gameliftrequest_p.h"
#include "describematchmakingrulesetsrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeMatchmakingRuleSetsRequest;

class DescribeMatchmakingRuleSetsRequestPrivate : public GameLiftRequestPrivate {

public:
    DescribeMatchmakingRuleSetsRequestPrivate(const GameLiftRequest::Action action,
                                   DescribeMatchmakingRuleSetsRequest * const q);
    DescribeMatchmakingRuleSetsRequestPrivate(const DescribeMatchmakingRuleSetsRequestPrivate &other,
                                   DescribeMatchmakingRuleSetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeMatchmakingRuleSetsRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif

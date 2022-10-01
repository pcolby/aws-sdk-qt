// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMATCHMAKINGCONFIGURATIONSREQUEST_P_H
#define QTAWS_DESCRIBEMATCHMAKINGCONFIGURATIONSREQUEST_P_H

#include "gameliftrequest_p.h"
#include "describematchmakingconfigurationsrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeMatchmakingConfigurationsRequest;

class DescribeMatchmakingConfigurationsRequestPrivate : public GameLiftRequestPrivate {

public:
    DescribeMatchmakingConfigurationsRequestPrivate(const GameLiftRequest::Action action,
                                   DescribeMatchmakingConfigurationsRequest * const q);
    DescribeMatchmakingConfigurationsRequestPrivate(const DescribeMatchmakingConfigurationsRequestPrivate &other,
                                   DescribeMatchmakingConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeMatchmakingConfigurationsRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif

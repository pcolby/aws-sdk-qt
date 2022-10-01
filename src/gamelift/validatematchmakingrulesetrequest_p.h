// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VALIDATEMATCHMAKINGRULESETREQUEST_P_H
#define QTAWS_VALIDATEMATCHMAKINGRULESETREQUEST_P_H

#include "gameliftrequest_p.h"
#include "validatematchmakingrulesetrequest.h"

namespace QtAws {
namespace GameLift {

class ValidateMatchmakingRuleSetRequest;

class ValidateMatchmakingRuleSetRequestPrivate : public GameLiftRequestPrivate {

public:
    ValidateMatchmakingRuleSetRequestPrivate(const GameLiftRequest::Action action,
                                   ValidateMatchmakingRuleSetRequest * const q);
    ValidateMatchmakingRuleSetRequestPrivate(const ValidateMatchmakingRuleSetRequestPrivate &other,
                                   ValidateMatchmakingRuleSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(ValidateMatchmakingRuleSetRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif

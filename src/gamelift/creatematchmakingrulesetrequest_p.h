// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMATCHMAKINGRULESETREQUEST_P_H
#define QTAWS_CREATEMATCHMAKINGRULESETREQUEST_P_H

#include "gameliftrequest_p.h"
#include "creatematchmakingrulesetrequest.h"

namespace QtAws {
namespace GameLift {

class CreateMatchmakingRuleSetRequest;

class CreateMatchmakingRuleSetRequestPrivate : public GameLiftRequestPrivate {

public:
    CreateMatchmakingRuleSetRequestPrivate(const GameLiftRequest::Action action,
                                   CreateMatchmakingRuleSetRequest * const q);
    CreateMatchmakingRuleSetRequestPrivate(const CreateMatchmakingRuleSetRequestPrivate &other,
                                   CreateMatchmakingRuleSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateMatchmakingRuleSetRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMATCHMAKINGRULESETREQUEST_P_H
#define QTAWS_DELETEMATCHMAKINGRULESETREQUEST_P_H

#include "gameliftrequest_p.h"
#include "deletematchmakingrulesetrequest.h"

namespace QtAws {
namespace GameLift {

class DeleteMatchmakingRuleSetRequest;

class DeleteMatchmakingRuleSetRequestPrivate : public GameLiftRequestPrivate {

public:
    DeleteMatchmakingRuleSetRequestPrivate(const GameLiftRequest::Action action,
                                   DeleteMatchmakingRuleSetRequest * const q);
    DeleteMatchmakingRuleSetRequestPrivate(const DeleteMatchmakingRuleSetRequestPrivate &other,
                                   DeleteMatchmakingRuleSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteMatchmakingRuleSetRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGAMESESSIONREQUEST_P_H
#define QTAWS_CREATEGAMESESSIONREQUEST_P_H

#include "gameliftrequest_p.h"
#include "creategamesessionrequest.h"

namespace QtAws {
namespace GameLift {

class CreateGameSessionRequest;

class CreateGameSessionRequestPrivate : public GameLiftRequestPrivate {

public:
    CreateGameSessionRequestPrivate(const GameLiftRequest::Action action,
                                   CreateGameSessionRequest * const q);
    CreateGameSessionRequestPrivate(const CreateGameSessionRequestPrivate &other,
                                   CreateGameSessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateGameSessionRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif

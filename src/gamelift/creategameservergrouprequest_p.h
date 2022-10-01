// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGAMESERVERGROUPREQUEST_P_H
#define QTAWS_CREATEGAMESERVERGROUPREQUEST_P_H

#include "gameliftrequest_p.h"
#include "creategameservergrouprequest.h"

namespace QtAws {
namespace GameLift {

class CreateGameServerGroupRequest;

class CreateGameServerGroupRequestPrivate : public GameLiftRequestPrivate {

public:
    CreateGameServerGroupRequestPrivate(const GameLiftRequest::Action action,
                                   CreateGameServerGroupRequest * const q);
    CreateGameServerGroupRequestPrivate(const CreateGameServerGroupRequestPrivate &other,
                                   CreateGameServerGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateGameServerGroupRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif

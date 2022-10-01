// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGAMESERVERGROUPREQUEST_P_H
#define QTAWS_DELETEGAMESERVERGROUPREQUEST_P_H

#include "gameliftrequest_p.h"
#include "deletegameservergrouprequest.h"

namespace QtAws {
namespace GameLift {

class DeleteGameServerGroupRequest;

class DeleteGameServerGroupRequestPrivate : public GameLiftRequestPrivate {

public:
    DeleteGameServerGroupRequestPrivate(const GameLiftRequest::Action action,
                                   DeleteGameServerGroupRequest * const q);
    DeleteGameServerGroupRequestPrivate(const DeleteGameServerGroupRequestPrivate &other,
                                   DeleteGameServerGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteGameServerGroupRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif

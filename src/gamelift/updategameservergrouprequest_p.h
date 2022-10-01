// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGAMESERVERGROUPREQUEST_P_H
#define QTAWS_UPDATEGAMESERVERGROUPREQUEST_P_H

#include "gameliftrequest_p.h"
#include "updategameservergrouprequest.h"

namespace QtAws {
namespace GameLift {

class UpdateGameServerGroupRequest;

class UpdateGameServerGroupRequestPrivate : public GameLiftRequestPrivate {

public:
    UpdateGameServerGroupRequestPrivate(const GameLiftRequest::Action action,
                                   UpdateGameServerGroupRequest * const q);
    UpdateGameServerGroupRequestPrivate(const UpdateGameServerGroupRequestPrivate &other,
                                   UpdateGameServerGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateGameServerGroupRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif

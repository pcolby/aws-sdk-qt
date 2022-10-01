// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGAMESERVERREQUEST_P_H
#define QTAWS_UPDATEGAMESERVERREQUEST_P_H

#include "gameliftrequest_p.h"
#include "updategameserverrequest.h"

namespace QtAws {
namespace GameLift {

class UpdateGameServerRequest;

class UpdateGameServerRequestPrivate : public GameLiftRequestPrivate {

public:
    UpdateGameServerRequestPrivate(const GameLiftRequest::Action action,
                                   UpdateGameServerRequest * const q);
    UpdateGameServerRequestPrivate(const UpdateGameServerRequestPrivate &other,
                                   UpdateGameServerRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateGameServerRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif

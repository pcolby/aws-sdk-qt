// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGAMESESSIONREQUEST_P_H
#define QTAWS_UPDATEGAMESESSIONREQUEST_P_H

#include "gameliftrequest_p.h"
#include "updategamesessionrequest.h"

namespace QtAws {
namespace GameLift {

class UpdateGameSessionRequest;

class UpdateGameSessionRequestPrivate : public GameLiftRequestPrivate {

public:
    UpdateGameSessionRequestPrivate(const GameLiftRequest::Action action,
                                   UpdateGameSessionRequest * const q);
    UpdateGameSessionRequestPrivate(const UpdateGameSessionRequestPrivate &other,
                                   UpdateGameSessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateGameSessionRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif

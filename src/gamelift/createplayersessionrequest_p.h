// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPLAYERSESSIONREQUEST_P_H
#define QTAWS_CREATEPLAYERSESSIONREQUEST_P_H

#include "gameliftrequest_p.h"
#include "createplayersessionrequest.h"

namespace QtAws {
namespace GameLift {

class CreatePlayerSessionRequest;

class CreatePlayerSessionRequestPrivate : public GameLiftRequestPrivate {

public:
    CreatePlayerSessionRequestPrivate(const GameLiftRequest::Action action,
                                   CreatePlayerSessionRequest * const q);
    CreatePlayerSessionRequestPrivate(const CreatePlayerSessionRequestPrivate &other,
                                   CreatePlayerSessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePlayerSessionRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif

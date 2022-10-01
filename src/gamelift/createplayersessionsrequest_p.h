// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPLAYERSESSIONSREQUEST_P_H
#define QTAWS_CREATEPLAYERSESSIONSREQUEST_P_H

#include "gameliftrequest_p.h"
#include "createplayersessionsrequest.h"

namespace QtAws {
namespace GameLift {

class CreatePlayerSessionsRequest;

class CreatePlayerSessionsRequestPrivate : public GameLiftRequestPrivate {

public:
    CreatePlayerSessionsRequestPrivate(const GameLiftRequest::Action action,
                                   CreatePlayerSessionsRequest * const q);
    CreatePlayerSessionsRequestPrivate(const CreatePlayerSessionsRequestPrivate &other,
                                   CreatePlayerSessionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePlayerSessionsRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif

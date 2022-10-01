// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGAMESESSIONLOGURLREQUEST_P_H
#define QTAWS_GETGAMESESSIONLOGURLREQUEST_P_H

#include "gameliftrequest_p.h"
#include "getgamesessionlogurlrequest.h"

namespace QtAws {
namespace GameLift {

class GetGameSessionLogUrlRequest;

class GetGameSessionLogUrlRequestPrivate : public GameLiftRequestPrivate {

public:
    GetGameSessionLogUrlRequestPrivate(const GameLiftRequest::Action action,
                                   GetGameSessionLogUrlRequest * const q);
    GetGameSessionLogUrlRequestPrivate(const GetGameSessionLogUrlRequestPrivate &other,
                                   GetGameSessionLogUrlRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetGameSessionLogUrlRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif

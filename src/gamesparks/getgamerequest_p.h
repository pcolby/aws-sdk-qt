// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGAMEREQUEST_P_H
#define QTAWS_GETGAMEREQUEST_P_H

#include "gamesparksrequest_p.h"
#include "getgamerequest.h"

namespace QtAws {
namespace GameSparks {

class GetGameRequest;

class GetGameRequestPrivate : public GameSparksRequestPrivate {

public:
    GetGameRequestPrivate(const GameSparksRequest::Action action,
                                   GetGameRequest * const q);
    GetGameRequestPrivate(const GetGameRequestPrivate &other,
                                   GetGameRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetGameRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif

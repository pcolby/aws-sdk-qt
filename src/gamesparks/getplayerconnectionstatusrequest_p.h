// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPLAYERCONNECTIONSTATUSREQUEST_P_H
#define QTAWS_GETPLAYERCONNECTIONSTATUSREQUEST_P_H

#include "gamesparksrequest_p.h"
#include "getplayerconnectionstatusrequest.h"

namespace QtAws {
namespace GameSparks {

class GetPlayerConnectionStatusRequest;

class GetPlayerConnectionStatusRequestPrivate : public GameSparksRequestPrivate {

public:
    GetPlayerConnectionStatusRequestPrivate(const GameSparksRequest::Action action,
                                   GetPlayerConnectionStatusRequest * const q);
    GetPlayerConnectionStatusRequestPrivate(const GetPlayerConnectionStatusRequestPrivate &other,
                                   GetPlayerConnectionStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPlayerConnectionStatusRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISCONNECTPLAYERREQUEST_P_H
#define QTAWS_DISCONNECTPLAYERREQUEST_P_H

#include "gamesparksrequest_p.h"
#include "disconnectplayerrequest.h"

namespace QtAws {
namespace GameSparks {

class DisconnectPlayerRequest;

class DisconnectPlayerRequestPrivate : public GameSparksRequestPrivate {

public:
    DisconnectPlayerRequestPrivate(const GameSparksRequest::Action action,
                                   DisconnectPlayerRequest * const q);
    DisconnectPlayerRequestPrivate(const DisconnectPlayerRequestPrivate &other,
                                   DisconnectPlayerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisconnectPlayerRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif

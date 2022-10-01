// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGAMESREQUEST_P_H
#define QTAWS_LISTGAMESREQUEST_P_H

#include "gamesparksrequest_p.h"
#include "listgamesrequest.h"

namespace QtAws {
namespace GameSparks {

class ListGamesRequest;

class ListGamesRequestPrivate : public GameSparksRequestPrivate {

public:
    ListGamesRequestPrivate(const GameSparksRequest::Action action,
                                   ListGamesRequest * const q);
    ListGamesRequestPrivate(const ListGamesRequestPrivate &other,
                                   ListGamesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListGamesRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif

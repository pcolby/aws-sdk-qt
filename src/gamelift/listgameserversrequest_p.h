// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGAMESERVERSREQUEST_P_H
#define QTAWS_LISTGAMESERVERSREQUEST_P_H

#include "gameliftrequest_p.h"
#include "listgameserversrequest.h"

namespace QtAws {
namespace GameLift {

class ListGameServersRequest;

class ListGameServersRequestPrivate : public GameLiftRequestPrivate {

public:
    ListGameServersRequestPrivate(const GameLiftRequest::Action action,
                                   ListGameServersRequest * const q);
    ListGameServersRequestPrivate(const ListGameServersRequestPrivate &other,
                                   ListGameServersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListGameServersRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif

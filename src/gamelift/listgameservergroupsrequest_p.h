// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGAMESERVERGROUPSREQUEST_P_H
#define QTAWS_LISTGAMESERVERGROUPSREQUEST_P_H

#include "gameliftrequest_p.h"
#include "listgameservergroupsrequest.h"

namespace QtAws {
namespace GameLift {

class ListGameServerGroupsRequest;

class ListGameServerGroupsRequestPrivate : public GameLiftRequestPrivate {

public:
    ListGameServerGroupsRequestPrivate(const GameLiftRequest::Action action,
                                   ListGameServerGroupsRequest * const q);
    ListGameServerGroupsRequestPrivate(const ListGameServerGroupsRequestPrivate &other,
                                   ListGameServerGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListGameServerGroupsRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif

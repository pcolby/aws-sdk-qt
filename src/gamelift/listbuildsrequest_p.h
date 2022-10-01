// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUILDSREQUEST_P_H
#define QTAWS_LISTBUILDSREQUEST_P_H

#include "gameliftrequest_p.h"
#include "listbuildsrequest.h"

namespace QtAws {
namespace GameLift {

class ListBuildsRequest;

class ListBuildsRequestPrivate : public GameLiftRequestPrivate {

public:
    ListBuildsRequestPrivate(const GameLiftRequest::Action action,
                                   ListBuildsRequest * const q);
    ListBuildsRequestPrivate(const ListBuildsRequestPrivate &other,
                                   ListBuildsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBuildsRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif

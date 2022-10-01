// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESOLVEROOMREQUEST_P_H
#define QTAWS_RESOLVEROOMREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "resolveroomrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class ResolveRoomRequest;

class ResolveRoomRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    ResolveRoomRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   ResolveRoomRequest * const q);
    ResolveRoomRequestPrivate(const ResolveRoomRequestPrivate &other,
                                   ResolveRoomRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResolveRoomRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif

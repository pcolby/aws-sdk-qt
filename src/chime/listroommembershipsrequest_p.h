// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROOMMEMBERSHIPSREQUEST_P_H
#define QTAWS_LISTROOMMEMBERSHIPSREQUEST_P_H

#include "chimerequest_p.h"
#include "listroommembershipsrequest.h"

namespace QtAws {
namespace Chime {

class ListRoomMembershipsRequest;

class ListRoomMembershipsRequestPrivate : public ChimeRequestPrivate {

public:
    ListRoomMembershipsRequestPrivate(const ChimeRequest::Action action,
                                   ListRoomMembershipsRequest * const q);
    ListRoomMembershipsRequestPrivate(const ListRoomMembershipsRequestPrivate &other,
                                   ListRoomMembershipsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRoomMembershipsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif

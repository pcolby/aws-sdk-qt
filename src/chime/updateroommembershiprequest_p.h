// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROOMMEMBERSHIPREQUEST_P_H
#define QTAWS_UPDATEROOMMEMBERSHIPREQUEST_P_H

#include "chimerequest_p.h"
#include "updateroommembershiprequest.h"

namespace QtAws {
namespace Chime {

class UpdateRoomMembershipRequest;

class UpdateRoomMembershipRequestPrivate : public ChimeRequestPrivate {

public:
    UpdateRoomMembershipRequestPrivate(const ChimeRequest::Action action,
                                   UpdateRoomMembershipRequest * const q);
    UpdateRoomMembershipRequestPrivate(const UpdateRoomMembershipRequestPrivate &other,
                                   UpdateRoomMembershipRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRoomMembershipRequest)

};

} // namespace Chime
} // namespace QtAws

#endif

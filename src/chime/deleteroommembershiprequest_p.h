// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROOMMEMBERSHIPREQUEST_P_H
#define QTAWS_DELETEROOMMEMBERSHIPREQUEST_P_H

#include "chimerequest_p.h"
#include "deleteroommembershiprequest.h"

namespace QtAws {
namespace Chime {

class DeleteRoomMembershipRequest;

class DeleteRoomMembershipRequestPrivate : public ChimeRequestPrivate {

public:
    DeleteRoomMembershipRequestPrivate(const ChimeRequest::Action action,
                                   DeleteRoomMembershipRequest * const q);
    DeleteRoomMembershipRequestPrivate(const DeleteRoomMembershipRequestPrivate &other,
                                   DeleteRoomMembershipRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRoomMembershipRequest)

};

} // namespace Chime
} // namespace QtAws

#endif

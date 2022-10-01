// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROOMMEMBERSHIPREQUEST_P_H
#define QTAWS_CREATEROOMMEMBERSHIPREQUEST_P_H

#include "chimerequest_p.h"
#include "createroommembershiprequest.h"

namespace QtAws {
namespace Chime {

class CreateRoomMembershipRequest;

class CreateRoomMembershipRequestPrivate : public ChimeRequestPrivate {

public:
    CreateRoomMembershipRequestPrivate(const ChimeRequest::Action action,
                                   CreateRoomMembershipRequest * const q);
    CreateRoomMembershipRequestPrivate(const CreateRoomMembershipRequestPrivate &other,
                                   CreateRoomMembershipRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRoomMembershipRequest)

};

} // namespace Chime
} // namespace QtAws

#endif

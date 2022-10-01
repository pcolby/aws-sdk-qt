// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INVITEUSERSREQUEST_P_H
#define QTAWS_INVITEUSERSREQUEST_P_H

#include "chimerequest_p.h"
#include "inviteusersrequest.h"

namespace QtAws {
namespace Chime {

class InviteUsersRequest;

class InviteUsersRequestPrivate : public ChimeRequestPrivate {

public:
    InviteUsersRequestPrivate(const ChimeRequest::Action action,
                                   InviteUsersRequest * const q);
    InviteUsersRequestPrivate(const InviteUsersRequestPrivate &other,
                                   InviteUsersRequest * const q);

private:
    Q_DECLARE_PUBLIC(InviteUsersRequest)

};

} // namespace Chime
} // namespace QtAws

#endif

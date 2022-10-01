// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INVITEMEMBERSREQUEST_P_H
#define QTAWS_INVITEMEMBERSREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "invitemembersrequest.h"

namespace QtAws {
namespace GuardDuty {

class InviteMembersRequest;

class InviteMembersRequestPrivate : public GuardDutyRequestPrivate {

public:
    InviteMembersRequestPrivate(const GuardDutyRequest::Action action,
                                   InviteMembersRequest * const q);
    InviteMembersRequestPrivate(const InviteMembersRequestPrivate &other,
                                   InviteMembersRequest * const q);

private:
    Q_DECLARE_PUBLIC(InviteMembersRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif

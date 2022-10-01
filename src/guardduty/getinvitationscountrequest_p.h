// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINVITATIONSCOUNTREQUEST_P_H
#define QTAWS_GETINVITATIONSCOUNTREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "getinvitationscountrequest.h"

namespace QtAws {
namespace GuardDuty {

class GetInvitationsCountRequest;

class GetInvitationsCountRequestPrivate : public GuardDutyRequestPrivate {

public:
    GetInvitationsCountRequestPrivate(const GuardDutyRequest::Action action,
                                   GetInvitationsCountRequest * const q);
    GetInvitationsCountRequestPrivate(const GetInvitationsCountRequestPrivate &other,
                                   GetInvitationsCountRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetInvitationsCountRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif

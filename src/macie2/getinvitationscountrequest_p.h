// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINVITATIONSCOUNTREQUEST_P_H
#define QTAWS_GETINVITATIONSCOUNTREQUEST_P_H

#include "macie2request_p.h"
#include "getinvitationscountrequest.h"

namespace QtAws {
namespace Macie2 {

class GetInvitationsCountRequest;

class GetInvitationsCountRequestPrivate : public Macie2RequestPrivate {

public:
    GetInvitationsCountRequestPrivate(const Macie2Request::Action action,
                                   GetInvitationsCountRequest * const q);
    GetInvitationsCountRequestPrivate(const GetInvitationsCountRequestPrivate &other,
                                   GetInvitationsCountRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetInvitationsCountRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif

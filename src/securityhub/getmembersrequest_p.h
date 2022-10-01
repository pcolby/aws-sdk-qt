// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEMBERSREQUEST_P_H
#define QTAWS_GETMEMBERSREQUEST_P_H

#include "securityhubrequest_p.h"
#include "getmembersrequest.h"

namespace QtAws {
namespace SecurityHub {

class GetMembersRequest;

class GetMembersRequestPrivate : public SecurityHubRequestPrivate {

public:
    GetMembersRequestPrivate(const SecurityHubRequest::Action action,
                                   GetMembersRequest * const q);
    GetMembersRequestPrivate(const GetMembersRequestPrivate &other,
                                   GetMembersRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMembersRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif

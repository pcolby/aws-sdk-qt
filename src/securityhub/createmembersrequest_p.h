// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMEMBERSREQUEST_P_H
#define QTAWS_CREATEMEMBERSREQUEST_P_H

#include "securityhubrequest_p.h"
#include "createmembersrequest.h"

namespace QtAws {
namespace SecurityHub {

class CreateMembersRequest;

class CreateMembersRequestPrivate : public SecurityHubRequestPrivate {

public:
    CreateMembersRequestPrivate(const SecurityHubRequest::Action action,
                                   CreateMembersRequest * const q);
    CreateMembersRequestPrivate(const CreateMembersRequestPrivate &other,
                                   CreateMembersRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateMembersRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif

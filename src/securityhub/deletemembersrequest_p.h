// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMEMBERSREQUEST_P_H
#define QTAWS_DELETEMEMBERSREQUEST_P_H

#include "securityhubrequest_p.h"
#include "deletemembersrequest.h"

namespace QtAws {
namespace SecurityHub {

class DeleteMembersRequest;

class DeleteMembersRequestPrivate : public SecurityHubRequestPrivate {

public:
    DeleteMembersRequestPrivate(const SecurityHubRequest::Action action,
                                   DeleteMembersRequest * const q);
    DeleteMembersRequestPrivate(const DeleteMembersRequestPrivate &other,
                                   DeleteMembersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteMembersRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif

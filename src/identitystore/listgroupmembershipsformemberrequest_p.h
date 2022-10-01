// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPMEMBERSHIPSFORMEMBERREQUEST_P_H
#define QTAWS_LISTGROUPMEMBERSHIPSFORMEMBERREQUEST_P_H

#include "identitystorerequest_p.h"
#include "listgroupmembershipsformemberrequest.h"

namespace QtAws {
namespace IdentityStore {

class ListGroupMembershipsForMemberRequest;

class ListGroupMembershipsForMemberRequestPrivate : public IdentityStoreRequestPrivate {

public:
    ListGroupMembershipsForMemberRequestPrivate(const IdentityStoreRequest::Action action,
                                   ListGroupMembershipsForMemberRequest * const q);
    ListGroupMembershipsForMemberRequestPrivate(const ListGroupMembershipsForMemberRequestPrivate &other,
                                   ListGroupMembershipsForMemberRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListGroupMembershipsForMemberRequest)

};

} // namespace IdentityStore
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPMEMBERSHIPSREQUEST_P_H
#define QTAWS_LISTGROUPMEMBERSHIPSREQUEST_P_H

#include "identitystorerequest_p.h"
#include "listgroupmembershipsrequest.h"

namespace QtAws {
namespace IdentityStore {

class ListGroupMembershipsRequest;

class ListGroupMembershipsRequestPrivate : public IdentityStoreRequestPrivate {

public:
    ListGroupMembershipsRequestPrivate(const IdentityStoreRequest::Action action,
                                   ListGroupMembershipsRequest * const q);
    ListGroupMembershipsRequestPrivate(const ListGroupMembershipsRequestPrivate &other,
                                   ListGroupMembershipsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListGroupMembershipsRequest)

};

} // namespace IdentityStore
} // namespace QtAws

#endif

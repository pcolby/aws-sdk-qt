// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGROUPMEMBERSHIPREQUEST_P_H
#define QTAWS_DELETEGROUPMEMBERSHIPREQUEST_P_H

#include "identitystorerequest_p.h"
#include "deletegroupmembershiprequest.h"

namespace QtAws {
namespace IdentityStore {

class DeleteGroupMembershipRequest;

class DeleteGroupMembershipRequestPrivate : public IdentityStoreRequestPrivate {

public:
    DeleteGroupMembershipRequestPrivate(const IdentityStoreRequest::Action action,
                                   DeleteGroupMembershipRequest * const q);
    DeleteGroupMembershipRequestPrivate(const DeleteGroupMembershipRequestPrivate &other,
                                   DeleteGroupMembershipRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteGroupMembershipRequest)

};

} // namespace IdentityStore
} // namespace QtAws

#endif

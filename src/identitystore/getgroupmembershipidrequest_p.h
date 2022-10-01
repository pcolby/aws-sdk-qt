// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPMEMBERSHIPIDREQUEST_P_H
#define QTAWS_GETGROUPMEMBERSHIPIDREQUEST_P_H

#include "identitystorerequest_p.h"
#include "getgroupmembershipidrequest.h"

namespace QtAws {
namespace IdentityStore {

class GetGroupMembershipIdRequest;

class GetGroupMembershipIdRequestPrivate : public IdentityStoreRequestPrivate {

public:
    GetGroupMembershipIdRequestPrivate(const IdentityStoreRequest::Action action,
                                   GetGroupMembershipIdRequest * const q);
    GetGroupMembershipIdRequestPrivate(const GetGroupMembershipIdRequestPrivate &other,
                                   GetGroupMembershipIdRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetGroupMembershipIdRequest)

};

} // namespace IdentityStore
} // namespace QtAws

#endif

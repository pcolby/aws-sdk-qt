// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGROUPMEMBERSHIPREQUEST_P_H
#define QTAWS_DESCRIBEGROUPMEMBERSHIPREQUEST_P_H

#include "identitystorerequest_p.h"
#include "describegroupmembershiprequest.h"

namespace QtAws {
namespace IdentityStore {

class DescribeGroupMembershipRequest;

class DescribeGroupMembershipRequestPrivate : public IdentityStoreRequestPrivate {

public:
    DescribeGroupMembershipRequestPrivate(const IdentityStoreRequest::Action action,
                                   DescribeGroupMembershipRequest * const q);
    DescribeGroupMembershipRequestPrivate(const DescribeGroupMembershipRequestPrivate &other,
                                   DescribeGroupMembershipRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeGroupMembershipRequest)

};

} // namespace IdentityStore
} // namespace QtAws

#endif

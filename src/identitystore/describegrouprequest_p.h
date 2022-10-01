// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGROUPREQUEST_P_H
#define QTAWS_DESCRIBEGROUPREQUEST_P_H

#include "identitystorerequest_p.h"
#include "describegrouprequest.h"

namespace QtAws {
namespace IdentityStore {

class DescribeGroupRequest;

class DescribeGroupRequestPrivate : public IdentityStoreRequestPrivate {

public:
    DescribeGroupRequestPrivate(const IdentityStoreRequest::Action action,
                                   DescribeGroupRequest * const q);
    DescribeGroupRequestPrivate(const DescribeGroupRequestPrivate &other,
                                   DescribeGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeGroupRequest)

};

} // namespace IdentityStore
} // namespace QtAws

#endif

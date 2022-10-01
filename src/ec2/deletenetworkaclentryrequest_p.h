// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKACLENTRYREQUEST_P_H
#define QTAWS_DELETENETWORKACLENTRYREQUEST_P_H

#include "ec2request_p.h"
#include "deletenetworkaclentryrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteNetworkAclEntryRequest;

class DeleteNetworkAclEntryRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteNetworkAclEntryRequestPrivate(const Ec2Request::Action action,
                                   DeleteNetworkAclEntryRequest * const q);
    DeleteNetworkAclEntryRequestPrivate(const DeleteNetworkAclEntryRequestPrivate &other,
                                   DeleteNetworkAclEntryRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteNetworkAclEntryRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

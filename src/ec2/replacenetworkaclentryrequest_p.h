// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPLACENETWORKACLENTRYREQUEST_P_H
#define QTAWS_REPLACENETWORKACLENTRYREQUEST_P_H

#include "ec2request_p.h"
#include "replacenetworkaclentryrequest.h"

namespace QtAws {
namespace Ec2 {

class ReplaceNetworkAclEntryRequest;

class ReplaceNetworkAclEntryRequestPrivate : public Ec2RequestPrivate {

public:
    ReplaceNetworkAclEntryRequestPrivate(const Ec2Request::Action action,
                                   ReplaceNetworkAclEntryRequest * const q);
    ReplaceNetworkAclEntryRequestPrivate(const ReplaceNetworkAclEntryRequestPrivate &other,
                                   ReplaceNetworkAclEntryRequest * const q);

private:
    Q_DECLARE_PUBLIC(ReplaceNetworkAclEntryRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

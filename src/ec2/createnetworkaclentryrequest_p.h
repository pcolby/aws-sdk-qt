// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENETWORKACLENTRYREQUEST_P_H
#define QTAWS_CREATENETWORKACLENTRYREQUEST_P_H

#include "ec2request_p.h"
#include "createnetworkaclentryrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateNetworkAclEntryRequest;

class CreateNetworkAclEntryRequestPrivate : public Ec2RequestPrivate {

public:
    CreateNetworkAclEntryRequestPrivate(const Ec2Request::Action action,
                                   CreateNetworkAclEntryRequest * const q);
    CreateNetworkAclEntryRequestPrivate(const CreateNetworkAclEntryRequestPrivate &other,
                                   CreateNetworkAclEntryRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateNetworkAclEntryRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

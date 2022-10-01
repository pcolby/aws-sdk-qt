// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPLACENETWORKACLASSOCIATIONREQUEST_P_H
#define QTAWS_REPLACENETWORKACLASSOCIATIONREQUEST_P_H

#include "ec2request_p.h"
#include "replacenetworkaclassociationrequest.h"

namespace QtAws {
namespace Ec2 {

class ReplaceNetworkAclAssociationRequest;

class ReplaceNetworkAclAssociationRequestPrivate : public Ec2RequestPrivate {

public:
    ReplaceNetworkAclAssociationRequestPrivate(const Ec2Request::Action action,
                                   ReplaceNetworkAclAssociationRequest * const q);
    ReplaceNetworkAclAssociationRequestPrivate(const ReplaceNetworkAclAssociationRequestPrivate &other,
                                   ReplaceNetworkAclAssociationRequest * const q);

private:
    Q_DECLARE_PUBLIC(ReplaceNetworkAclAssociationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

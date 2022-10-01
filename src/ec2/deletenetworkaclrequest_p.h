// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKACLREQUEST_P_H
#define QTAWS_DELETENETWORKACLREQUEST_P_H

#include "ec2request_p.h"
#include "deletenetworkaclrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteNetworkAclRequest;

class DeleteNetworkAclRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteNetworkAclRequestPrivate(const Ec2Request::Action action,
                                   DeleteNetworkAclRequest * const q);
    DeleteNetworkAclRequestPrivate(const DeleteNetworkAclRequestPrivate &other,
                                   DeleteNetworkAclRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteNetworkAclRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

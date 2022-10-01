// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENETWORKACLREQUEST_P_H
#define QTAWS_CREATENETWORKACLREQUEST_P_H

#include "ec2request_p.h"
#include "createnetworkaclrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateNetworkAclRequest;

class CreateNetworkAclRequestPrivate : public Ec2RequestPrivate {

public:
    CreateNetworkAclRequestPrivate(const Ec2Request::Action action,
                                   CreateNetworkAclRequest * const q);
    CreateNetworkAclRequestPrivate(const CreateNetworkAclRequestPrivate &other,
                                   CreateNetworkAclRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateNetworkAclRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

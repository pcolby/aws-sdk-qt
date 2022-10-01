// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESECURITYGROUPREQUEST_P_H
#define QTAWS_CREATESECURITYGROUPREQUEST_P_H

#include "ec2request_p.h"
#include "createsecuritygrouprequest.h"

namespace QtAws {
namespace Ec2 {

class CreateSecurityGroupRequest;

class CreateSecurityGroupRequestPrivate : public Ec2RequestPrivate {

public:
    CreateSecurityGroupRequestPrivate(const Ec2Request::Action action,
                                   CreateSecurityGroupRequest * const q);
    CreateSecurityGroupRequestPrivate(const CreateSecurityGroupRequestPrivate &other,
                                   CreateSecurityGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSecurityGroupRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

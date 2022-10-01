// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKESECURITYGROUPINGRESSREQUEST_P_H
#define QTAWS_REVOKESECURITYGROUPINGRESSREQUEST_P_H

#include "ec2request_p.h"
#include "revokesecuritygroupingressrequest.h"

namespace QtAws {
namespace Ec2 {

class RevokeSecurityGroupIngressRequest;

class RevokeSecurityGroupIngressRequestPrivate : public Ec2RequestPrivate {

public:
    RevokeSecurityGroupIngressRequestPrivate(const Ec2Request::Action action,
                                   RevokeSecurityGroupIngressRequest * const q);
    RevokeSecurityGroupIngressRequestPrivate(const RevokeSecurityGroupIngressRequestPrivate &other,
                                   RevokeSecurityGroupIngressRequest * const q);

private:
    Q_DECLARE_PUBLIC(RevokeSecurityGroupIngressRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKESECURITYGROUPEGRESSREQUEST_P_H
#define QTAWS_REVOKESECURITYGROUPEGRESSREQUEST_P_H

#include "ec2request_p.h"
#include "revokesecuritygroupegressrequest.h"

namespace QtAws {
namespace Ec2 {

class RevokeSecurityGroupEgressRequest;

class RevokeSecurityGroupEgressRequestPrivate : public Ec2RequestPrivate {

public:
    RevokeSecurityGroupEgressRequestPrivate(const Ec2Request::Action action,
                                   RevokeSecurityGroupEgressRequest * const q);
    RevokeSecurityGroupEgressRequestPrivate(const RevokeSecurityGroupEgressRequestPrivate &other,
                                   RevokeSecurityGroupEgressRequest * const q);

private:
    Q_DECLARE_PUBLIC(RevokeSecurityGroupEgressRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

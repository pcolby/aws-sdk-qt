// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKEDBSECURITYGROUPINGRESSREQUEST_P_H
#define QTAWS_REVOKEDBSECURITYGROUPINGRESSREQUEST_P_H

#include "rdsrequest_p.h"
#include "revokedbsecuritygroupingressrequest.h"

namespace QtAws {
namespace Rds {

class RevokeDBSecurityGroupIngressRequest;

class RevokeDBSecurityGroupIngressRequestPrivate : public RdsRequestPrivate {

public:
    RevokeDBSecurityGroupIngressRequestPrivate(const RdsRequest::Action action,
                                   RevokeDBSecurityGroupIngressRequest * const q);
    RevokeDBSecurityGroupIngressRequestPrivate(const RevokeDBSecurityGroupIngressRequestPrivate &other,
                                   RevokeDBSecurityGroupIngressRequest * const q);

private:
    Q_DECLARE_PUBLIC(RevokeDBSecurityGroupIngressRequest)

};

} // namespace Rds
} // namespace QtAws

#endif

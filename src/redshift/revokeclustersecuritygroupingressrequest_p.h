// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKECLUSTERSECURITYGROUPINGRESSREQUEST_P_H
#define QTAWS_REVOKECLUSTERSECURITYGROUPINGRESSREQUEST_P_H

#include "redshiftrequest_p.h"
#include "revokeclustersecuritygroupingressrequest.h"

namespace QtAws {
namespace Redshift {

class RevokeClusterSecurityGroupIngressRequest;

class RevokeClusterSecurityGroupIngressRequestPrivate : public RedshiftRequestPrivate {

public:
    RevokeClusterSecurityGroupIngressRequestPrivate(const RedshiftRequest::Action action,
                                   RevokeClusterSecurityGroupIngressRequest * const q);
    RevokeClusterSecurityGroupIngressRequestPrivate(const RevokeClusterSecurityGroupIngressRequestPrivate &other,
                                   RevokeClusterSecurityGroupIngressRequest * const q);

private:
    Q_DECLARE_PUBLIC(RevokeClusterSecurityGroupIngressRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif

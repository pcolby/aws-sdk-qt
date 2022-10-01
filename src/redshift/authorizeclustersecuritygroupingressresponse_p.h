// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTHORIZECLUSTERSECURITYGROUPINGRESSRESPONSE_P_H
#define QTAWS_AUTHORIZECLUSTERSECURITYGROUPINGRESSRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class AuthorizeClusterSecurityGroupIngressResponse;

class AuthorizeClusterSecurityGroupIngressResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit AuthorizeClusterSecurityGroupIngressResponsePrivate(AuthorizeClusterSecurityGroupIngressResponse * const q);

    void parseAuthorizeClusterSecurityGroupIngressResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AuthorizeClusterSecurityGroupIngressResponse)
    Q_DISABLE_COPY(AuthorizeClusterSecurityGroupIngressResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif

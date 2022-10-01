// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKECLUSTERSECURITYGROUPINGRESSRESPONSE_P_H
#define QTAWS_REVOKECLUSTERSECURITYGROUPINGRESSRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class RevokeClusterSecurityGroupIngressResponse;

class RevokeClusterSecurityGroupIngressResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit RevokeClusterSecurityGroupIngressResponsePrivate(RevokeClusterSecurityGroupIngressResponse * const q);

    void parseRevokeClusterSecurityGroupIngressResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RevokeClusterSecurityGroupIngressResponse)
    Q_DISABLE_COPY(RevokeClusterSecurityGroupIngressResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif

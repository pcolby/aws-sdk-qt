// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKEDBSECURITYGROUPINGRESSRESPONSE_P_H
#define QTAWS_REVOKEDBSECURITYGROUPINGRESSRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class RevokeDBSecurityGroupIngressResponse;

class RevokeDBSecurityGroupIngressResponsePrivate : public RdsResponsePrivate {

public:

    explicit RevokeDBSecurityGroupIngressResponsePrivate(RevokeDBSecurityGroupIngressResponse * const q);

    void parseRevokeDBSecurityGroupIngressResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RevokeDBSecurityGroupIngressResponse)
    Q_DISABLE_COPY(RevokeDBSecurityGroupIngressResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif

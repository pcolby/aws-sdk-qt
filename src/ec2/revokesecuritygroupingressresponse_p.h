// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKESECURITYGROUPINGRESSRESPONSE_P_H
#define QTAWS_REVOKESECURITYGROUPINGRESSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class RevokeSecurityGroupIngressResponse;

class RevokeSecurityGroupIngressResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit RevokeSecurityGroupIngressResponsePrivate(RevokeSecurityGroupIngressResponse * const q);

    void parseRevokeSecurityGroupIngressResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RevokeSecurityGroupIngressResponse)
    Q_DISABLE_COPY(RevokeSecurityGroupIngressResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

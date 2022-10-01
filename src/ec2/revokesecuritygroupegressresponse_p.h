// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKESECURITYGROUPEGRESSRESPONSE_P_H
#define QTAWS_REVOKESECURITYGROUPEGRESSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class RevokeSecurityGroupEgressResponse;

class RevokeSecurityGroupEgressResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit RevokeSecurityGroupEgressResponsePrivate(RevokeSecurityGroupEgressResponse * const q);

    void parseRevokeSecurityGroupEgressResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RevokeSecurityGroupEgressResponse)
    Q_DISABLE_COPY(RevokeSecurityGroupEgressResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

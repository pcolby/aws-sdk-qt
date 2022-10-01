// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTHORIZESECURITYGROUPEGRESSRESPONSE_P_H
#define QTAWS_AUTHORIZESECURITYGROUPEGRESSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class AuthorizeSecurityGroupEgressResponse;

class AuthorizeSecurityGroupEgressResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit AuthorizeSecurityGroupEgressResponsePrivate(AuthorizeSecurityGroupEgressResponse * const q);

    void parseAuthorizeSecurityGroupEgressResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AuthorizeSecurityGroupEgressResponse)
    Q_DISABLE_COPY(AuthorizeSecurityGroupEgressResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

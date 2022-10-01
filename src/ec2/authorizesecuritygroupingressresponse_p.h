// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTHORIZESECURITYGROUPINGRESSRESPONSE_P_H
#define QTAWS_AUTHORIZESECURITYGROUPINGRESSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class AuthorizeSecurityGroupIngressResponse;

class AuthorizeSecurityGroupIngressResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit AuthorizeSecurityGroupIngressResponsePrivate(AuthorizeSecurityGroupIngressResponse * const q);

    void parseAuthorizeSecurityGroupIngressResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AuthorizeSecurityGroupIngressResponse)
    Q_DISABLE_COPY(AuthorizeSecurityGroupIngressResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

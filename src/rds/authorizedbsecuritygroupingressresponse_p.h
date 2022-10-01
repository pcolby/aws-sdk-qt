// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTHORIZEDBSECURITYGROUPINGRESSRESPONSE_P_H
#define QTAWS_AUTHORIZEDBSECURITYGROUPINGRESSRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class AuthorizeDBSecurityGroupIngressResponse;

class AuthorizeDBSecurityGroupIngressResponsePrivate : public RdsResponsePrivate {

public:

    explicit AuthorizeDBSecurityGroupIngressResponsePrivate(AuthorizeDBSecurityGroupIngressResponse * const q);

    void parseAuthorizeDBSecurityGroupIngressResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AuthorizeDBSecurityGroupIngressResponse)
    Q_DISABLE_COPY(AuthorizeDBSecurityGroupIngressResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif

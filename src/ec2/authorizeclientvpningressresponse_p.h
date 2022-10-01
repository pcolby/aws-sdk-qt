// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTHORIZECLIENTVPNINGRESSRESPONSE_P_H
#define QTAWS_AUTHORIZECLIENTVPNINGRESSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class AuthorizeClientVpnIngressResponse;

class AuthorizeClientVpnIngressResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit AuthorizeClientVpnIngressResponsePrivate(AuthorizeClientVpnIngressResponse * const q);

    void parseAuthorizeClientVpnIngressResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AuthorizeClientVpnIngressResponse)
    Q_DISABLE_COPY(AuthorizeClientVpnIngressResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

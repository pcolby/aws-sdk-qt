// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKECLIENTVPNINGRESSRESPONSE_P_H
#define QTAWS_REVOKECLIENTVPNINGRESSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class RevokeClientVpnIngressResponse;

class RevokeClientVpnIngressResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit RevokeClientVpnIngressResponsePrivate(RevokeClientVpnIngressResponse * const q);

    void parseRevokeClientVpnIngressResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RevokeClientVpnIngressResponse)
    Q_DISABLE_COPY(RevokeClientVpnIngressResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

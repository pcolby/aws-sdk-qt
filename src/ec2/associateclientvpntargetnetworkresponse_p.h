// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECLIENTVPNTARGETNETWORKRESPONSE_P_H
#define QTAWS_ASSOCIATECLIENTVPNTARGETNETWORKRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class AssociateClientVpnTargetNetworkResponse;

class AssociateClientVpnTargetNetworkResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit AssociateClientVpnTargetNetworkResponsePrivate(AssociateClientVpnTargetNetworkResponse * const q);

    void parseAssociateClientVpnTargetNetworkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateClientVpnTargetNetworkResponse)
    Q_DISABLE_COPY(AssociateClientVpnTargetNetworkResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

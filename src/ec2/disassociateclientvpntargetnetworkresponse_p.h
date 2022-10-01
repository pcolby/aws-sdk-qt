// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECLIENTVPNTARGETNETWORKRESPONSE_P_H
#define QTAWS_DISASSOCIATECLIENTVPNTARGETNETWORKRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DisassociateClientVpnTargetNetworkResponse;

class DisassociateClientVpnTargetNetworkResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DisassociateClientVpnTargetNetworkResponsePrivate(DisassociateClientVpnTargetNetworkResponse * const q);

    void parseDisassociateClientVpnTargetNetworkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateClientVpnTargetNetworkResponse)
    Q_DISABLE_COPY(DisassociateClientVpnTargetNetworkResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

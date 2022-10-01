// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEVPCFROMHOSTEDZONERESPONSE_P_H
#define QTAWS_DISASSOCIATEVPCFROMHOSTEDZONERESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class DisassociateVPCFromHostedZoneResponse;

class DisassociateVPCFromHostedZoneResponsePrivate : public Route53ResponsePrivate {

public:

    explicit DisassociateVPCFromHostedZoneResponsePrivate(DisassociateVPCFromHostedZoneResponse * const q);

    void parseDisassociateVPCFromHostedZoneResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateVPCFromHostedZoneResponse)
    Q_DISABLE_COPY(DisassociateVPCFromHostedZoneResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif

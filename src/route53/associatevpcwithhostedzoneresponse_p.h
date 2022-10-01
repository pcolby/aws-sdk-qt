// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEVPCWITHHOSTEDZONERESPONSE_P_H
#define QTAWS_ASSOCIATEVPCWITHHOSTEDZONERESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class AssociateVPCWithHostedZoneResponse;

class AssociateVPCWithHostedZoneResponsePrivate : public Route53ResponsePrivate {

public:

    explicit AssociateVPCWithHostedZoneResponsePrivate(AssociateVPCWithHostedZoneResponse * const q);

    void parseAssociateVPCWithHostedZoneResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateVPCWithHostedZoneResponse)
    Q_DISABLE_COPY(AssociateVPCWithHostedZoneResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHOSTEDZONESBYVPCRESPONSE_P_H
#define QTAWS_LISTHOSTEDZONESBYVPCRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class ListHostedZonesByVPCResponse;

class ListHostedZonesByVPCResponsePrivate : public Route53ResponsePrivate {

public:

    explicit ListHostedZonesByVPCResponsePrivate(ListHostedZonesByVPCResponse * const q);

    void parseListHostedZonesByVPCResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListHostedZonesByVPCResponse)
    Q_DISABLE_COPY(ListHostedZonesByVPCResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif

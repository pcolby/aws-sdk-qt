// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEHOSTEDZONEDNSSECRESPONSE_P_H
#define QTAWS_ENABLEHOSTEDZONEDNSSECRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class EnableHostedZoneDNSSECResponse;

class EnableHostedZoneDNSSECResponsePrivate : public Route53ResponsePrivate {

public:

    explicit EnableHostedZoneDNSSECResponsePrivate(EnableHostedZoneDNSSECResponse * const q);

    void parseEnableHostedZoneDNSSECResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableHostedZoneDNSSECResponse)
    Q_DISABLE_COPY(EnableHostedZoneDNSSECResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif

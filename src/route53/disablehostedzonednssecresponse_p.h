// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEHOSTEDZONEDNSSECRESPONSE_P_H
#define QTAWS_DISABLEHOSTEDZONEDNSSECRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class DisableHostedZoneDNSSECResponse;

class DisableHostedZoneDNSSECResponsePrivate : public Route53ResponsePrivate {

public:

    explicit DisableHostedZoneDNSSECResponsePrivate(DisableHostedZoneDNSSECResponse * const q);

    void parseDisableHostedZoneDNSSECResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableHostedZoneDNSSECResponse)
    Q_DISABLE_COPY(DisableHostedZoneDNSSECResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRAFFICPOLICYINSTANCESBYHOSTEDZONERESPONSE_P_H
#define QTAWS_LISTTRAFFICPOLICYINSTANCESBYHOSTEDZONERESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class ListTrafficPolicyInstancesByHostedZoneResponse;

class ListTrafficPolicyInstancesByHostedZoneResponsePrivate : public Route53ResponsePrivate {

public:

    explicit ListTrafficPolicyInstancesByHostedZoneResponsePrivate(ListTrafficPolicyInstancesByHostedZoneResponse * const q);

    void parseListTrafficPolicyInstancesByHostedZoneResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTrafficPolicyInstancesByHostedZoneResponse)
    Q_DISABLE_COPY(ListTrafficPolicyInstancesByHostedZoneResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif

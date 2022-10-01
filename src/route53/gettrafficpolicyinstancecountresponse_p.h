// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRAFFICPOLICYINSTANCECOUNTRESPONSE_P_H
#define QTAWS_GETTRAFFICPOLICYINSTANCECOUNTRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class GetTrafficPolicyInstanceCountResponse;

class GetTrafficPolicyInstanceCountResponsePrivate : public Route53ResponsePrivate {

public:

    explicit GetTrafficPolicyInstanceCountResponsePrivate(GetTrafficPolicyInstanceCountResponse * const q);

    void parseGetTrafficPolicyInstanceCountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTrafficPolicyInstanceCountResponse)
    Q_DISABLE_COPY(GetTrafficPolicyInstanceCountResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif

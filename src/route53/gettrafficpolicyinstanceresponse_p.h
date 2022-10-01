// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRAFFICPOLICYINSTANCERESPONSE_P_H
#define QTAWS_GETTRAFFICPOLICYINSTANCERESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class GetTrafficPolicyInstanceResponse;

class GetTrafficPolicyInstanceResponsePrivate : public Route53ResponsePrivate {

public:

    explicit GetTrafficPolicyInstanceResponsePrivate(GetTrafficPolicyInstanceResponse * const q);

    void parseGetTrafficPolicyInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTrafficPolicyInstanceResponse)
    Q_DISABLE_COPY(GetTrafficPolicyInstanceResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif

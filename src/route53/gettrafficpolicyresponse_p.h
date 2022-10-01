// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRAFFICPOLICYRESPONSE_P_H
#define QTAWS_GETTRAFFICPOLICYRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class GetTrafficPolicyResponse;

class GetTrafficPolicyResponsePrivate : public Route53ResponsePrivate {

public:

    explicit GetTrafficPolicyResponsePrivate(GetTrafficPolicyResponse * const q);

    void parseGetTrafficPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTrafficPolicyResponse)
    Q_DISABLE_COPY(GetTrafficPolicyResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif

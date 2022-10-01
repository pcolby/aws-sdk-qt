// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRAFFICPOLICYINSTANCERESPONSE_P_H
#define QTAWS_UPDATETRAFFICPOLICYINSTANCERESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class UpdateTrafficPolicyInstanceResponse;

class UpdateTrafficPolicyInstanceResponsePrivate : public Route53ResponsePrivate {

public:

    explicit UpdateTrafficPolicyInstanceResponsePrivate(UpdateTrafficPolicyInstanceResponse * const q);

    void parseUpdateTrafficPolicyInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateTrafficPolicyInstanceResponse)
    Q_DISABLE_COPY(UpdateTrafficPolicyInstanceResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif

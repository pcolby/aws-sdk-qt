// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRAFFICPOLICYINSTANCERESPONSE_P_H
#define QTAWS_CREATETRAFFICPOLICYINSTANCERESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class CreateTrafficPolicyInstanceResponse;

class CreateTrafficPolicyInstanceResponsePrivate : public Route53ResponsePrivate {

public:

    explicit CreateTrafficPolicyInstanceResponsePrivate(CreateTrafficPolicyInstanceResponse * const q);

    void parseCreateTrafficPolicyInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTrafficPolicyInstanceResponse)
    Q_DISABLE_COPY(CreateTrafficPolicyInstanceResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif

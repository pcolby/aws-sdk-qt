// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRAFFICPOLICYRESPONSE_P_H
#define QTAWS_CREATETRAFFICPOLICYRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class CreateTrafficPolicyResponse;

class CreateTrafficPolicyResponsePrivate : public Route53ResponsePrivate {

public:

    explicit CreateTrafficPolicyResponsePrivate(CreateTrafficPolicyResponse * const q);

    void parseCreateTrafficPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTrafficPolicyResponse)
    Q_DISABLE_COPY(CreateTrafficPolicyResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif

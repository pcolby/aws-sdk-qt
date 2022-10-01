// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRAFFICPOLICYVERSIONRESPONSE_P_H
#define QTAWS_CREATETRAFFICPOLICYVERSIONRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class CreateTrafficPolicyVersionResponse;

class CreateTrafficPolicyVersionResponsePrivate : public Route53ResponsePrivate {

public:

    explicit CreateTrafficPolicyVersionResponsePrivate(CreateTrafficPolicyVersionResponse * const q);

    void parseCreateTrafficPolicyVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTrafficPolicyVersionResponse)
    Q_DISABLE_COPY(CreateTrafficPolicyVersionResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERTARGETSRESPONSE_P_H
#define QTAWS_REGISTERTARGETSRESPONSE_P_H

#include "elasticloadbalancingv2response_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class RegisterTargetsResponse;

class RegisterTargetsResponsePrivate : public ElasticLoadBalancingv2ResponsePrivate {

public:

    explicit RegisterTargetsResponsePrivate(RegisterTargetsResponse * const q);

    void parseRegisterTargetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterTargetsResponse)
    Q_DISABLE_COPY(RegisterTargetsResponsePrivate)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

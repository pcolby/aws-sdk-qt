// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETSUBNETSRESPONSE_P_H
#define QTAWS_SETSUBNETSRESPONSE_P_H

#include "elasticloadbalancingv2response_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class SetSubnetsResponse;

class SetSubnetsResponsePrivate : public ElasticLoadBalancingv2ResponsePrivate {

public:

    explicit SetSubnetsResponsePrivate(SetSubnetsResponse * const q);

    void parseSetSubnetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetSubnetsResponse)
    Q_DISABLE_COPY(SetSubnetsResponsePrivate)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

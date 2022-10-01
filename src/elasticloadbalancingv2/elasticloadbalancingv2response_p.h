// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ELASTICLOADBALANCINGV2RESPONSE_P_H
#define QTAWS_ELASTICLOADBALANCINGV2RESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class ElasticLoadBalancingv2Response;

class ElasticLoadBalancingv2ResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit ElasticLoadBalancingv2ResponsePrivate(ElasticLoadBalancingv2Response * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ElasticLoadBalancingv2Response)
    Q_DISABLE_COPY(ElasticLoadBalancingv2ResponsePrivate)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

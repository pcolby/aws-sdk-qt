// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETRULEPRIORITIESRESPONSE_P_H
#define QTAWS_SETRULEPRIORITIESRESPONSE_P_H

#include "elasticloadbalancingv2response_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class SetRulePrioritiesResponse;

class SetRulePrioritiesResponsePrivate : public ElasticLoadBalancingv2ResponsePrivate {

public:

    explicit SetRulePrioritiesResponsePrivate(SetRulePrioritiesResponse * const q);

    void parseSetRulePrioritiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetRulePrioritiesResponse)
    Q_DISABLE_COPY(SetRulePrioritiesResponsePrivate)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

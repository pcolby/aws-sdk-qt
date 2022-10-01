// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYRULERESPONSE_P_H
#define QTAWS_MODIFYRULERESPONSE_P_H

#include "elasticloadbalancingv2response_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class ModifyRuleResponse;

class ModifyRuleResponsePrivate : public ElasticLoadBalancingv2ResponsePrivate {

public:

    explicit ModifyRuleResponsePrivate(ModifyRuleResponse * const q);

    void parseModifyRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyRuleResponse)
    Q_DISABLE_COPY(ModifyRuleResponsePrivate)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

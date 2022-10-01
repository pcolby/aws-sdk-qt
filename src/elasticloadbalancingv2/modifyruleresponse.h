// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYRULERESPONSE_H
#define QTAWS_MODIFYRULERESPONSE_H

#include "elasticloadbalancingv2response.h"
#include "modifyrulerequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class ModifyRuleResponsePrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT ModifyRuleResponse : public ElasticLoadBalancingv2Response {
    Q_OBJECT

public:
    ModifyRuleResponse(const ModifyRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyRuleResponse)
    Q_DISABLE_COPY(ModifyRuleResponse)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

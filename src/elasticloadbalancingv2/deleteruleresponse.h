// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERULERESPONSE_H
#define QTAWS_DELETERULERESPONSE_H

#include "elasticloadbalancingv2response.h"
#include "deleterulerequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DeleteRuleResponsePrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT DeleteRuleResponse : public ElasticLoadBalancingv2Response {
    Q_OBJECT

public:
    DeleteRuleResponse(const DeleteRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRuleResponse)
    Q_DISABLE_COPY(DeleteRuleResponse)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

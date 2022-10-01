// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYRULEREQUEST_H
#define QTAWS_MODIFYRULEREQUEST_H

#include "elasticloadbalancingv2request.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class ModifyRuleRequestPrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT ModifyRuleRequest : public ElasticLoadBalancingv2Request {

public:
    ModifyRuleRequest(const ModifyRuleRequest &other);
    ModifyRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyRuleRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

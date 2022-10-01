// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERULEREQUEST_H
#define QTAWS_CREATERULEREQUEST_H

#include "elasticloadbalancingv2request.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class CreateRuleRequestPrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT CreateRuleRequest : public ElasticLoadBalancingv2Request {

public:
    CreateRuleRequest(const CreateRuleRequest &other);
    CreateRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRuleRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

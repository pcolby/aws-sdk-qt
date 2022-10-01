// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERULEREQUEST_H
#define QTAWS_DELETERULEREQUEST_H

#include "elasticloadbalancingv2request.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DeleteRuleRequestPrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT DeleteRuleRequest : public ElasticLoadBalancingv2Request {

public:
    DeleteRuleRequest(const DeleteRuleRequest &other);
    DeleteRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRuleRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

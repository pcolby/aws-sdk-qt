// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETRULEPRIORITIESREQUEST_H
#define QTAWS_SETRULEPRIORITIESREQUEST_H

#include "elasticloadbalancingv2request.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class SetRulePrioritiesRequestPrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT SetRulePrioritiesRequest : public ElasticLoadBalancingv2Request {

public:
    SetRulePrioritiesRequest(const SetRulePrioritiesRequest &other);
    SetRulePrioritiesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetRulePrioritiesRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

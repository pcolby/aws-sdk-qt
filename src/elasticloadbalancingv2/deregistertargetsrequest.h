// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERTARGETSREQUEST_H
#define QTAWS_DEREGISTERTARGETSREQUEST_H

#include "elasticloadbalancingv2request.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DeregisterTargetsRequestPrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT DeregisterTargetsRequest : public ElasticLoadBalancingv2Request {

public:
    DeregisterTargetsRequest(const DeregisterTargetsRequest &other);
    DeregisterTargetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterTargetsRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

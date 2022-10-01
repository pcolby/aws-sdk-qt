// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELISTENERSREQUEST_H
#define QTAWS_DESCRIBELISTENERSREQUEST_H

#include "elasticloadbalancingv2request.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DescribeListenersRequestPrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT DescribeListenersRequest : public ElasticLoadBalancingv2Request {

public:
    DescribeListenersRequest(const DescribeListenersRequest &other);
    DescribeListenersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeListenersRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELISTENERCERTIFICATESREQUEST_H
#define QTAWS_DESCRIBELISTENERCERTIFICATESREQUEST_H

#include "elasticloadbalancingv2request.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DescribeListenerCertificatesRequestPrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT DescribeListenerCertificatesRequest : public ElasticLoadBalancingv2Request {

public:
    DescribeListenerCertificatesRequest(const DescribeListenerCertificatesRequest &other);
    DescribeListenerCertificatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeListenerCertificatesRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

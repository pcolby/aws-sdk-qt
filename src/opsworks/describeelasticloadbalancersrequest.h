// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEELASTICLOADBALANCERSREQUEST_H
#define QTAWS_DESCRIBEELASTICLOADBALANCERSREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeElasticLoadBalancersRequestPrivate;

class QTAWSOPSWORKS_EXPORT DescribeElasticLoadBalancersRequest : public OpsWorksRequest {

public:
    DescribeElasticLoadBalancersRequest(const DescribeElasticLoadBalancersRequest &other);
    DescribeElasticLoadBalancersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeElasticLoadBalancersRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEELASTICLOADBALANCERSRESPONSE_H
#define QTAWS_DESCRIBEELASTICLOADBALANCERSRESPONSE_H

#include "opsworksresponse.h"
#include "describeelasticloadbalancersrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeElasticLoadBalancersResponsePrivate;

class QTAWSOPSWORKS_EXPORT DescribeElasticLoadBalancersResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    DescribeElasticLoadBalancersResponse(const DescribeElasticLoadBalancersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeElasticLoadBalancersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeElasticLoadBalancersResponse)
    Q_DISABLE_COPY(DescribeElasticLoadBalancersResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif

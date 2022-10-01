// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEHEALTHREQUEST_H
#define QTAWS_DESCRIBEINSTANCEHEALTHREQUEST_H

#include "elasticloadbalancingrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DescribeInstanceHealthRequestPrivate;

class QTAWSELASTICLOADBALANCING_EXPORT DescribeInstanceHealthRequest : public ElasticLoadBalancingRequest {

public:
    DescribeInstanceHealthRequest(const DescribeInstanceHealthRequest &other);
    DescribeInstanceHealthRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInstanceHealthRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif

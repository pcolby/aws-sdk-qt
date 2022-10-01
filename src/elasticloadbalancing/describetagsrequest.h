// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETAGSREQUEST_H
#define QTAWS_DESCRIBETAGSREQUEST_H

#include "elasticloadbalancingrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DescribeTagsRequestPrivate;

class QTAWSELASTICLOADBALANCING_EXPORT DescribeTagsRequest : public ElasticLoadBalancingRequest {

public:
    DescribeTagsRequest(const DescribeTagsRequest &other);
    DescribeTagsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTagsRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif

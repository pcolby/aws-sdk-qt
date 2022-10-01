// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESPOTINSTANCEREQUESTSREQUEST_H
#define QTAWS_DESCRIBESPOTINSTANCEREQUESTSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeSpotInstanceRequestsRequestPrivate;

class QTAWSEC2_EXPORT DescribeSpotInstanceRequestsRequest : public Ec2Request {

public:
    DescribeSpotInstanceRequestsRequest(const DescribeSpotInstanceRequestsRequest &other);
    DescribeSpotInstanceRequestsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSpotInstanceRequestsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESPOTFLEETREQUESTSREQUEST_H
#define QTAWS_DESCRIBESPOTFLEETREQUESTSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeSpotFleetRequestsRequestPrivate;

class QTAWSEC2_EXPORT DescribeSpotFleetRequestsRequest : public Ec2Request {

public:
    DescribeSpotFleetRequestsRequest(const DescribeSpotFleetRequestsRequest &other);
    DescribeSpotFleetRequestsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSpotFleetRequestsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

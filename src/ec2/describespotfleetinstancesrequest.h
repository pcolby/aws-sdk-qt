// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESPOTFLEETINSTANCESREQUEST_H
#define QTAWS_DESCRIBESPOTFLEETINSTANCESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeSpotFleetInstancesRequestPrivate;

class QTAWSEC2_EXPORT DescribeSpotFleetInstancesRequest : public Ec2Request {

public:
    DescribeSpotFleetInstancesRequest(const DescribeSpotFleetInstancesRequest &other);
    DescribeSpotFleetInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSpotFleetInstancesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

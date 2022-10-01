// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETINSTANCESREQUEST_H
#define QTAWS_DESCRIBEFLEETINSTANCESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeFleetInstancesRequestPrivate;

class QTAWSEC2_EXPORT DescribeFleetInstancesRequest : public Ec2Request {

public:
    DescribeFleetInstancesRequest(const DescribeFleetInstancesRequest &other);
    DescribeFleetInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFleetInstancesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

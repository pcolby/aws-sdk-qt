// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDINSTANCESREQUEST_H
#define QTAWS_DESCRIBERESERVEDINSTANCESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeReservedInstancesRequestPrivate;

class QTAWSEC2_EXPORT DescribeReservedInstancesRequest : public Ec2Request {

public:
    DescribeReservedInstancesRequest(const DescribeReservedInstancesRequest &other);
    DescribeReservedInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReservedInstancesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

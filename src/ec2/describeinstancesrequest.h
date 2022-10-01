// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCESREQUEST_H
#define QTAWS_DESCRIBEINSTANCESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeInstancesRequestPrivate;

class QTAWSEC2_EXPORT DescribeInstancesRequest : public Ec2Request {

public:
    DescribeInstancesRequest(const DescribeInstancesRequest &other);
    DescribeInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInstancesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPUBLICIPV4POOLSREQUEST_H
#define QTAWS_DESCRIBEPUBLICIPV4POOLSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribePublicIpv4PoolsRequestPrivate;

class QTAWSEC2_EXPORT DescribePublicIpv4PoolsRequest : public Ec2Request {

public:
    DescribePublicIpv4PoolsRequest(const DescribePublicIpv4PoolsRequest &other);
    DescribePublicIpv4PoolsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePublicIpv4PoolsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIPAMPOOLSREQUEST_H
#define QTAWS_DESCRIBEIPAMPOOLSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeIpamPoolsRequestPrivate;

class QTAWSEC2_EXPORT DescribeIpamPoolsRequest : public Ec2Request {

public:
    DescribeIpamPoolsRequest(const DescribeIpamPoolsRequest &other);
    DescribeIpamPoolsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeIpamPoolsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

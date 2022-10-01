// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTALESECURITYGROUPSREQUEST_H
#define QTAWS_DESCRIBESTALESECURITYGROUPSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeStaleSecurityGroupsRequestPrivate;

class QTAWSEC2_EXPORT DescribeStaleSecurityGroupsRequest : public Ec2Request {

public:
    DescribeStaleSecurityGroupsRequest(const DescribeStaleSecurityGroupsRequest &other);
    DescribeStaleSecurityGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStaleSecurityGroupsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

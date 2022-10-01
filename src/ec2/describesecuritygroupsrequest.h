// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESECURITYGROUPSREQUEST_H
#define QTAWS_DESCRIBESECURITYGROUPSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeSecurityGroupsRequestPrivate;

class QTAWSEC2_EXPORT DescribeSecurityGroupsRequest : public Ec2Request {

public:
    DescribeSecurityGroupsRequest(const DescribeSecurityGroupsRequest &other);
    DescribeSecurityGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSecurityGroupsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

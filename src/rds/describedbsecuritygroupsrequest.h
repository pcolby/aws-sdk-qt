// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBSECURITYGROUPSREQUEST_H
#define QTAWS_DESCRIBEDBSECURITYGROUPSREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBSecurityGroupsRequestPrivate;

class QTAWSRDS_EXPORT DescribeDBSecurityGroupsRequest : public RdsRequest {

public:
    DescribeDBSecurityGroupsRequest(const DescribeDBSecurityGroupsRequest &other);
    DescribeDBSecurityGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBSecurityGroupsRequest)

};

} // namespace Rds
} // namespace QtAws

#endif

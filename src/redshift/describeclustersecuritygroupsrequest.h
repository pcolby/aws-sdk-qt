// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERSECURITYGROUPSREQUEST_H
#define QTAWS_DESCRIBECLUSTERSECURITYGROUPSREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeClusterSecurityGroupsRequestPrivate;

class QTAWSREDSHIFT_EXPORT DescribeClusterSecurityGroupsRequest : public RedshiftRequest {

public:
    DescribeClusterSecurityGroupsRequest(const DescribeClusterSecurityGroupsRequest &other);
    DescribeClusterSecurityGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClusterSecurityGroupsRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif

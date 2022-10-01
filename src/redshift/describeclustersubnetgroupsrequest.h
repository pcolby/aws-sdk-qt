// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERSUBNETGROUPSREQUEST_H
#define QTAWS_DESCRIBECLUSTERSUBNETGROUPSREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeClusterSubnetGroupsRequestPrivate;

class QTAWSREDSHIFT_EXPORT DescribeClusterSubnetGroupsRequest : public RedshiftRequest {

public:
    DescribeClusterSubnetGroupsRequest(const DescribeClusterSubnetGroupsRequest &other);
    DescribeClusterSubnetGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClusterSubnetGroupsRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBPROXYTARGETGROUPSREQUEST_H
#define QTAWS_DESCRIBEDBPROXYTARGETGROUPSREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBProxyTargetGroupsRequestPrivate;

class QTAWSRDS_EXPORT DescribeDBProxyTargetGroupsRequest : public RdsRequest {

public:
    DescribeDBProxyTargetGroupsRequest(const DescribeDBProxyTargetGroupsRequest &other);
    DescribeDBProxyTargetGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBProxyTargetGroupsRequest)

};

} // namespace Rds
} // namespace QtAws

#endif

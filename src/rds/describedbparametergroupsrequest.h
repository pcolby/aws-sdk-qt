// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBPARAMETERGROUPSREQUEST_H
#define QTAWS_DESCRIBEDBPARAMETERGROUPSREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBParameterGroupsRequestPrivate;

class QTAWSRDS_EXPORT DescribeDBParameterGroupsRequest : public RdsRequest {

public:
    DescribeDBParameterGroupsRequest(const DescribeDBParameterGroupsRequest &other);
    DescribeDBParameterGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBParameterGroupsRequest)

};

} // namespace Rds
} // namespace QtAws

#endif

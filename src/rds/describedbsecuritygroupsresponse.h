// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBSECURITYGROUPSRESPONSE_H
#define QTAWS_DESCRIBEDBSECURITYGROUPSRESPONSE_H

#include "rdsresponse.h"
#include "describedbsecuritygroupsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBSecurityGroupsResponsePrivate;

class QTAWSRDS_EXPORT DescribeDBSecurityGroupsResponse : public RdsResponse {
    Q_OBJECT

public:
    DescribeDBSecurityGroupsResponse(const DescribeDBSecurityGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDBSecurityGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBSecurityGroupsResponse)
    Q_DISABLE_COPY(DescribeDBSecurityGroupsResponse)

};

} // namespace Rds
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERSECURITYGROUPSRESPONSE_H
#define QTAWS_DESCRIBECLUSTERSECURITYGROUPSRESPONSE_H

#include "redshiftresponse.h"
#include "describeclustersecuritygroupsrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeClusterSecurityGroupsResponsePrivate;

class QTAWSREDSHIFT_EXPORT DescribeClusterSecurityGroupsResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DescribeClusterSecurityGroupsResponse(const DescribeClusterSecurityGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeClusterSecurityGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClusterSecurityGroupsResponse)
    Q_DISABLE_COPY(DescribeClusterSecurityGroupsResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif

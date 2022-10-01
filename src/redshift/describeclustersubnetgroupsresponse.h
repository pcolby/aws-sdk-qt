// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERSUBNETGROUPSRESPONSE_H
#define QTAWS_DESCRIBECLUSTERSUBNETGROUPSRESPONSE_H

#include "redshiftresponse.h"
#include "describeclustersubnetgroupsrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeClusterSubnetGroupsResponsePrivate;

class QTAWSREDSHIFT_EXPORT DescribeClusterSubnetGroupsResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DescribeClusterSubnetGroupsResponse(const DescribeClusterSubnetGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeClusterSubnetGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClusterSubnetGroupsResponse)
    Q_DISABLE_COPY(DescribeClusterSubnetGroupsResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif

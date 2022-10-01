// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBCLUSTERPARAMETERGROUPSRESPONSE_H
#define QTAWS_DESCRIBEDBCLUSTERPARAMETERGROUPSRESPONSE_H

#include "rdsresponse.h"
#include "describedbclusterparametergroupsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBClusterParameterGroupsResponsePrivate;

class QTAWSRDS_EXPORT DescribeDBClusterParameterGroupsResponse : public RdsResponse {
    Q_OBJECT

public:
    DescribeDBClusterParameterGroupsResponse(const DescribeDBClusterParameterGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDBClusterParameterGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBClusterParameterGroupsResponse)
    Q_DISABLE_COPY(DescribeDBClusterParameterGroupsResponse)

};

} // namespace Rds
} // namespace QtAws

#endif

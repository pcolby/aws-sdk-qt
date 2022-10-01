// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBPARAMETERGROUPSRESPONSE_H
#define QTAWS_DESCRIBEDBPARAMETERGROUPSRESPONSE_H

#include "rdsresponse.h"
#include "describedbparametergroupsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBParameterGroupsResponsePrivate;

class QTAWSRDS_EXPORT DescribeDBParameterGroupsResponse : public RdsResponse {
    Q_OBJECT

public:
    DescribeDBParameterGroupsResponse(const DescribeDBParameterGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDBParameterGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBParameterGroupsResponse)
    Q_DISABLE_COPY(DescribeDBParameterGroupsResponse)

};

} // namespace Rds
} // namespace QtAws

#endif

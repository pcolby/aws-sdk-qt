// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBCLUSTERSRESPONSE_H
#define QTAWS_DESCRIBEDBCLUSTERSRESPONSE_H

#include "rdsresponse.h"
#include "describedbclustersrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBClustersResponsePrivate;

class QTAWSRDS_EXPORT DescribeDBClustersResponse : public RdsResponse {
    Q_OBJECT

public:
    DescribeDBClustersResponse(const DescribeDBClustersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDBClustersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBClustersResponse)
    Q_DISABLE_COPY(DescribeDBClustersResponse)

};

} // namespace Rds
} // namespace QtAws

#endif

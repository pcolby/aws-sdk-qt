// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBCLUSTERSRESPONSE_P_H
#define QTAWS_DESCRIBEDBCLUSTERSRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class DescribeDBClustersResponse;

class DescribeDBClustersResponsePrivate : public RdsResponsePrivate {

public:

    explicit DescribeDBClustersResponsePrivate(DescribeDBClustersResponse * const q);

    void parseDescribeDBClustersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDBClustersResponse)
    Q_DISABLE_COPY(DescribeDBClustersResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif

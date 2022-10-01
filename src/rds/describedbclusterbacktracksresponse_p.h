// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBCLUSTERBACKTRACKSRESPONSE_P_H
#define QTAWS_DESCRIBEDBCLUSTERBACKTRACKSRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class DescribeDBClusterBacktracksResponse;

class DescribeDBClusterBacktracksResponsePrivate : public RdsResponsePrivate {

public:

    explicit DescribeDBClusterBacktracksResponsePrivate(DescribeDBClusterBacktracksResponse * const q);

    void parseDescribeDBClusterBacktracksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDBClusterBacktracksResponse)
    Q_DISABLE_COPY(DescribeDBClusterBacktracksResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif

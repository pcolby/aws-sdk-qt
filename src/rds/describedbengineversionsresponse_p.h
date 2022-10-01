// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBENGINEVERSIONSRESPONSE_P_H
#define QTAWS_DESCRIBEDBENGINEVERSIONSRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class DescribeDBEngineVersionsResponse;

class DescribeDBEngineVersionsResponsePrivate : public RdsResponsePrivate {

public:

    explicit DescribeDBEngineVersionsResponsePrivate(DescribeDBEngineVersionsResponse * const q);

    void parseDescribeDBEngineVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDBEngineVersionsResponse)
    Q_DISABLE_COPY(DescribeDBEngineVersionsResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif

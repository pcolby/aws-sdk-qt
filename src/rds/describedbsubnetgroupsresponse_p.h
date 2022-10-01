// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBSUBNETGROUPSRESPONSE_P_H
#define QTAWS_DESCRIBEDBSUBNETGROUPSRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class DescribeDBSubnetGroupsResponse;

class DescribeDBSubnetGroupsResponsePrivate : public RdsResponsePrivate {

public:

    explicit DescribeDBSubnetGroupsResponsePrivate(DescribeDBSubnetGroupsResponse * const q);

    void parseDescribeDBSubnetGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDBSubnetGroupsResponse)
    Q_DISABLE_COPY(DescribeDBSubnetGroupsResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif

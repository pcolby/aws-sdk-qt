// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESUBNETGROUPSRESPONSE_P_H
#define QTAWS_DESCRIBESUBNETGROUPSRESPONSE_P_H

#include "memorydbresponse_p.h"

namespace QtAws {
namespace MemoryDb {

class DescribeSubnetGroupsResponse;

class DescribeSubnetGroupsResponsePrivate : public MemoryDbResponsePrivate {

public:

    explicit DescribeSubnetGroupsResponsePrivate(DescribeSubnetGroupsResponse * const q);

    void parseDescribeSubnetGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSubnetGroupsResponse)
    Q_DISABLE_COPY(DescribeSubnetGroupsResponsePrivate)

};

} // namespace MemoryDb
} // namespace QtAws

#endif

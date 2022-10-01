// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBSUBNETGROUPSRESPONSE_P_H
#define QTAWS_DESCRIBEDBSUBNETGROUPSRESPONSE_P_H

#include "docdbresponse_p.h"

namespace QtAws {
namespace DocDb {

class DescribeDBSubnetGroupsResponse;

class DescribeDBSubnetGroupsResponsePrivate : public DocDbResponsePrivate {

public:

    explicit DescribeDBSubnetGroupsResponsePrivate(DescribeDBSubnetGroupsResponse * const q);

    void parseDescribeDBSubnetGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDBSubnetGroupsResponse)
    Q_DISABLE_COPY(DescribeDBSubnetGroupsResponsePrivate)

};

} // namespace DocDb
} // namespace QtAws

#endif

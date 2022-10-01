// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERSUBNETGROUPSRESPONSE_P_H
#define QTAWS_DESCRIBECLUSTERSUBNETGROUPSRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DescribeClusterSubnetGroupsResponse;

class DescribeClusterSubnetGroupsResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DescribeClusterSubnetGroupsResponsePrivate(DescribeClusterSubnetGroupsResponse * const q);

    void parseDescribeClusterSubnetGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeClusterSubnetGroupsResponse)
    Q_DISABLE_COPY(DescribeClusterSubnetGroupsResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif

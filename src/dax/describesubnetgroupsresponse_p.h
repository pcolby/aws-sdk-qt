// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESUBNETGROUPSRESPONSE_P_H
#define QTAWS_DESCRIBESUBNETGROUPSRESPONSE_P_H

#include "daxresponse_p.h"

namespace QtAws {
namespace Dax {

class DescribeSubnetGroupsResponse;

class DescribeSubnetGroupsResponsePrivate : public DaxResponsePrivate {

public:

    explicit DescribeSubnetGroupsResponsePrivate(DescribeSubnetGroupsResponse * const q);

    void parseDescribeSubnetGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSubnetGroupsResponse)
    Q_DISABLE_COPY(DescribeSubnetGroupsResponsePrivate)

};

} // namespace Dax
} // namespace QtAws

#endif

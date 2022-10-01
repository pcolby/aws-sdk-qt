// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBSECURITYGROUPSRESPONSE_P_H
#define QTAWS_DESCRIBEDBSECURITYGROUPSRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class DescribeDBSecurityGroupsResponse;

class DescribeDBSecurityGroupsResponsePrivate : public RdsResponsePrivate {

public:

    explicit DescribeDBSecurityGroupsResponsePrivate(DescribeDBSecurityGroupsResponse * const q);

    void parseDescribeDBSecurityGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDBSecurityGroupsResponse)
    Q_DISABLE_COPY(DescribeDBSecurityGroupsResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif

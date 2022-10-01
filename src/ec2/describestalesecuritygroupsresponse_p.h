// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTALESECURITYGROUPSRESPONSE_P_H
#define QTAWS_DESCRIBESTALESECURITYGROUPSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeStaleSecurityGroupsResponse;

class DescribeStaleSecurityGroupsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeStaleSecurityGroupsResponsePrivate(DescribeStaleSecurityGroupsResponse * const q);

    void parseDescribeStaleSecurityGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeStaleSecurityGroupsResponse)
    Q_DISABLE_COPY(DescribeStaleSecurityGroupsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

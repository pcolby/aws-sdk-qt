// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESECURITYGROUPSRESPONSE_P_H
#define QTAWS_DESCRIBESECURITYGROUPSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeSecurityGroupsResponse;

class DescribeSecurityGroupsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeSecurityGroupsResponsePrivate(DescribeSecurityGroupsResponse * const q);

    void parseDescribeSecurityGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSecurityGroupsResponse)
    Q_DISABLE_COPY(DescribeSecurityGroupsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

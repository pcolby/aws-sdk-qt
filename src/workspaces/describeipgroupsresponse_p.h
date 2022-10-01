// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIPGROUPSRESPONSE_P_H
#define QTAWS_DESCRIBEIPGROUPSRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeIpGroupsResponse;

class DescribeIpGroupsResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit DescribeIpGroupsResponsePrivate(DescribeIpGroupsResponse * const q);

    void parseDescribeIpGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeIpGroupsResponse)
    Q_DISABLE_COPY(DescribeIpGroupsResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif

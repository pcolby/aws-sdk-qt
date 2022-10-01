// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERHIERARCHYGROUPRESPONSE_P_H
#define QTAWS_DESCRIBEUSERHIERARCHYGROUPRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class DescribeUserHierarchyGroupResponse;

class DescribeUserHierarchyGroupResponsePrivate : public ConnectResponsePrivate {

public:

    explicit DescribeUserHierarchyGroupResponsePrivate(DescribeUserHierarchyGroupResponse * const q);

    void parseDescribeUserHierarchyGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeUserHierarchyGroupResponse)
    Q_DISABLE_COPY(DescribeUserHierarchyGroupResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif

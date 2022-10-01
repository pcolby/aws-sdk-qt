// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERGROUPSRESPONSE_P_H
#define QTAWS_DESCRIBEUSERGROUPSRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class DescribeUserGroupsResponse;

class DescribeUserGroupsResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit DescribeUserGroupsResponsePrivate(DescribeUserGroupsResponse * const q);

    void parseDescribeUserGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeUserGroupsResponse)
    Q_DISABLE_COPY(DescribeUserGroupsResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

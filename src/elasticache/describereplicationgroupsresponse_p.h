// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONGROUPSRESPONSE_P_H
#define QTAWS_DESCRIBEREPLICATIONGROUPSRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class DescribeReplicationGroupsResponse;

class DescribeReplicationGroupsResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit DescribeReplicationGroupsResponsePrivate(DescribeReplicationGroupsResponse * const q);

    void parseDescribeReplicationGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeReplicationGroupsResponse)
    Q_DISABLE_COPY(DescribeReplicationGroupsResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

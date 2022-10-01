// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGLOBALREPLICATIONGROUPSRESPONSE_P_H
#define QTAWS_DESCRIBEGLOBALREPLICATIONGROUPSRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class DescribeGlobalReplicationGroupsResponse;

class DescribeGlobalReplicationGroupsResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit DescribeGlobalReplicationGroupsResponsePrivate(DescribeGlobalReplicationGroupsResponse * const q);

    void parseDescribeGlobalReplicationGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeGlobalReplicationGroupsResponse)
    Q_DISABLE_COPY(DescribeGlobalReplicationGroupsResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

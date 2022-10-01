// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDCACHENODESRESPONSE_P_H
#define QTAWS_DESCRIBERESERVEDCACHENODESRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class DescribeReservedCacheNodesResponse;

class DescribeReservedCacheNodesResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit DescribeReservedCacheNodesResponsePrivate(DescribeReservedCacheNodesResponse * const q);

    void parseDescribeReservedCacheNodesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeReservedCacheNodesResponse)
    Q_DISABLE_COPY(DescribeReservedCacheNodesResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

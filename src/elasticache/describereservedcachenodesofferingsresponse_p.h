// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDCACHENODESOFFERINGSRESPONSE_P_H
#define QTAWS_DESCRIBERESERVEDCACHENODESOFFERINGSRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class DescribeReservedCacheNodesOfferingsResponse;

class DescribeReservedCacheNodesOfferingsResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit DescribeReservedCacheNodesOfferingsResponsePrivate(DescribeReservedCacheNodesOfferingsResponse * const q);

    void parseDescribeReservedCacheNodesOfferingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeReservedCacheNodesOfferingsResponse)
    Q_DISABLE_COPY(DescribeReservedCacheNodesOfferingsResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

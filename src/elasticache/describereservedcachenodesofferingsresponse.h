// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDCACHENODESOFFERINGSRESPONSE_H
#define QTAWS_DESCRIBERESERVEDCACHENODESOFFERINGSRESPONSE_H

#include "elasticacheresponse.h"
#include "describereservedcachenodesofferingsrequest.h"

namespace QtAws {
namespace ElastiCache {

class DescribeReservedCacheNodesOfferingsResponsePrivate;

class QTAWSELASTICACHE_EXPORT DescribeReservedCacheNodesOfferingsResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    DescribeReservedCacheNodesOfferingsResponse(const DescribeReservedCacheNodesOfferingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeReservedCacheNodesOfferingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReservedCacheNodesOfferingsResponse)
    Q_DISABLE_COPY(DescribeReservedCacheNodesOfferingsResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

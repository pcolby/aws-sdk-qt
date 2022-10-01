// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDCACHENODESRESPONSE_H
#define QTAWS_DESCRIBERESERVEDCACHENODESRESPONSE_H

#include "elasticacheresponse.h"
#include "describereservedcachenodesrequest.h"

namespace QtAws {
namespace ElastiCache {

class DescribeReservedCacheNodesResponsePrivate;

class QTAWSELASTICACHE_EXPORT DescribeReservedCacheNodesResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    DescribeReservedCacheNodesResponse(const DescribeReservedCacheNodesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeReservedCacheNodesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReservedCacheNodesResponse)
    Q_DISABLE_COPY(DescribeReservedCacheNodesResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDCACHENODESREQUEST_H
#define QTAWS_DESCRIBERESERVEDCACHENODESREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class DescribeReservedCacheNodesRequestPrivate;

class QTAWSELASTICACHE_EXPORT DescribeReservedCacheNodesRequest : public ElastiCacheRequest {

public:
    DescribeReservedCacheNodesRequest(const DescribeReservedCacheNodesRequest &other);
    DescribeReservedCacheNodesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReservedCacheNodesRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

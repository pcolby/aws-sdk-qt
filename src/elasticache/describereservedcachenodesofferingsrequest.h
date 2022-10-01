// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDCACHENODESOFFERINGSREQUEST_H
#define QTAWS_DESCRIBERESERVEDCACHENODESOFFERINGSREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class DescribeReservedCacheNodesOfferingsRequestPrivate;

class QTAWSELASTICACHE_EXPORT DescribeReservedCacheNodesOfferingsRequest : public ElastiCacheRequest {

public:
    DescribeReservedCacheNodesOfferingsRequest(const DescribeReservedCacheNodesOfferingsRequest &other);
    DescribeReservedCacheNodesOfferingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReservedCacheNodesOfferingsRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

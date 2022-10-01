// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECACHEENGINEVERSIONSREQUEST_H
#define QTAWS_DESCRIBECACHEENGINEVERSIONSREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class DescribeCacheEngineVersionsRequestPrivate;

class QTAWSELASTICACHE_EXPORT DescribeCacheEngineVersionsRequest : public ElastiCacheRequest {

public:
    DescribeCacheEngineVersionsRequest(const DescribeCacheEngineVersionsRequest &other);
    DescribeCacheEngineVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCacheEngineVersionsRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

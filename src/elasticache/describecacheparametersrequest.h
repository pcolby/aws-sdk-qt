// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECACHEPARAMETERSREQUEST_H
#define QTAWS_DESCRIBECACHEPARAMETERSREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class DescribeCacheParametersRequestPrivate;

class QTAWSELASTICACHE_EXPORT DescribeCacheParametersRequest : public ElastiCacheRequest {

public:
    DescribeCacheParametersRequest(const DescribeCacheParametersRequest &other);
    DescribeCacheParametersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCacheParametersRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

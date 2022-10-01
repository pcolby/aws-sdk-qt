// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECACHECLUSTERSREQUEST_H
#define QTAWS_DESCRIBECACHECLUSTERSREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class DescribeCacheClustersRequestPrivate;

class QTAWSELASTICACHE_EXPORT DescribeCacheClustersRequest : public ElastiCacheRequest {

public:
    DescribeCacheClustersRequest(const DescribeCacheClustersRequest &other);
    DescribeCacheClustersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCacheClustersRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECACHESECURITYGROUPSREQUEST_H
#define QTAWS_DESCRIBECACHESECURITYGROUPSREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class DescribeCacheSecurityGroupsRequestPrivate;

class QTAWSELASTICACHE_EXPORT DescribeCacheSecurityGroupsRequest : public ElastiCacheRequest {

public:
    DescribeCacheSecurityGroupsRequest(const DescribeCacheSecurityGroupsRequest &other);
    DescribeCacheSecurityGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCacheSecurityGroupsRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

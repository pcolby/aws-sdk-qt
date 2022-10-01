// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECACHEPARAMETERGROUPSREQUEST_H
#define QTAWS_DESCRIBECACHEPARAMETERGROUPSREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class DescribeCacheParameterGroupsRequestPrivate;

class QTAWSELASTICACHE_EXPORT DescribeCacheParameterGroupsRequest : public ElastiCacheRequest {

public:
    DescribeCacheParameterGroupsRequest(const DescribeCacheParameterGroupsRequest &other);
    DescribeCacheParameterGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCacheParameterGroupsRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

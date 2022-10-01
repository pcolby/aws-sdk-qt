// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGLOBALREPLICATIONGROUPSREQUEST_H
#define QTAWS_DESCRIBEGLOBALREPLICATIONGROUPSREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class DescribeGlobalReplicationGroupsRequestPrivate;

class QTAWSELASTICACHE_EXPORT DescribeGlobalReplicationGroupsRequest : public ElastiCacheRequest {

public:
    DescribeGlobalReplicationGroupsRequest(const DescribeGlobalReplicationGroupsRequest &other);
    DescribeGlobalReplicationGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeGlobalReplicationGroupsRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

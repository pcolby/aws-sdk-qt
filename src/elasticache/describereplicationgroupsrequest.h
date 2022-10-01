// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONGROUPSREQUEST_H
#define QTAWS_DESCRIBEREPLICATIONGROUPSREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class DescribeReplicationGroupsRequestPrivate;

class QTAWSELASTICACHE_EXPORT DescribeReplicationGroupsRequest : public ElastiCacheRequest {

public:
    DescribeReplicationGroupsRequest(const DescribeReplicationGroupsRequest &other);
    DescribeReplicationGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReplicationGroupsRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONGROUPSRESPONSE_H
#define QTAWS_DESCRIBEREPLICATIONGROUPSRESPONSE_H

#include "elasticacheresponse.h"
#include "describereplicationgroupsrequest.h"

namespace QtAws {
namespace ElastiCache {

class DescribeReplicationGroupsResponsePrivate;

class QTAWSELASTICACHE_EXPORT DescribeReplicationGroupsResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    DescribeReplicationGroupsResponse(const DescribeReplicationGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeReplicationGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReplicationGroupsResponse)
    Q_DISABLE_COPY(DescribeReplicationGroupsResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

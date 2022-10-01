// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGLOBALREPLICATIONGROUPSRESPONSE_H
#define QTAWS_DESCRIBEGLOBALREPLICATIONGROUPSRESPONSE_H

#include "elasticacheresponse.h"
#include "describeglobalreplicationgroupsrequest.h"

namespace QtAws {
namespace ElastiCache {

class DescribeGlobalReplicationGroupsResponsePrivate;

class QTAWSELASTICACHE_EXPORT DescribeGlobalReplicationGroupsResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    DescribeGlobalReplicationGroupsResponse(const DescribeGlobalReplicationGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeGlobalReplicationGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeGlobalReplicationGroupsResponse)
    Q_DISABLE_COPY(DescribeGlobalReplicationGroupsResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

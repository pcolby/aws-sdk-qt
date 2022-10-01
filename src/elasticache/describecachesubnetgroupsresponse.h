// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECACHESUBNETGROUPSRESPONSE_H
#define QTAWS_DESCRIBECACHESUBNETGROUPSRESPONSE_H

#include "elasticacheresponse.h"
#include "describecachesubnetgroupsrequest.h"

namespace QtAws {
namespace ElastiCache {

class DescribeCacheSubnetGroupsResponsePrivate;

class QTAWSELASTICACHE_EXPORT DescribeCacheSubnetGroupsResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    DescribeCacheSubnetGroupsResponse(const DescribeCacheSubnetGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCacheSubnetGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCacheSubnetGroupsResponse)
    Q_DISABLE_COPY(DescribeCacheSubnetGroupsResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

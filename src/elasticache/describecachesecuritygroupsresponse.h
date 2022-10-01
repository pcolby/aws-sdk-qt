// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECACHESECURITYGROUPSRESPONSE_H
#define QTAWS_DESCRIBECACHESECURITYGROUPSRESPONSE_H

#include "elasticacheresponse.h"
#include "describecachesecuritygroupsrequest.h"

namespace QtAws {
namespace ElastiCache {

class DescribeCacheSecurityGroupsResponsePrivate;

class QTAWSELASTICACHE_EXPORT DescribeCacheSecurityGroupsResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    DescribeCacheSecurityGroupsResponse(const DescribeCacheSecurityGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCacheSecurityGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCacheSecurityGroupsResponse)
    Q_DISABLE_COPY(DescribeCacheSecurityGroupsResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

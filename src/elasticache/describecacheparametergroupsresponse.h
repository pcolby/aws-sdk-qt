// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECACHEPARAMETERGROUPSRESPONSE_H
#define QTAWS_DESCRIBECACHEPARAMETERGROUPSRESPONSE_H

#include "elasticacheresponse.h"
#include "describecacheparametergroupsrequest.h"

namespace QtAws {
namespace ElastiCache {

class DescribeCacheParameterGroupsResponsePrivate;

class QTAWSELASTICACHE_EXPORT DescribeCacheParameterGroupsResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    DescribeCacheParameterGroupsResponse(const DescribeCacheParameterGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCacheParameterGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCacheParameterGroupsResponse)
    Q_DISABLE_COPY(DescribeCacheParameterGroupsResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

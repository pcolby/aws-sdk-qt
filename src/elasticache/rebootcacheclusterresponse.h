// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTCACHECLUSTERRESPONSE_H
#define QTAWS_REBOOTCACHECLUSTERRESPONSE_H

#include "elasticacheresponse.h"
#include "rebootcacheclusterrequest.h"

namespace QtAws {
namespace ElastiCache {

class RebootCacheClusterResponsePrivate;

class QTAWSELASTICACHE_EXPORT RebootCacheClusterResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    RebootCacheClusterResponse(const RebootCacheClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RebootCacheClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RebootCacheClusterResponse)
    Q_DISABLE_COPY(RebootCacheClusterResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

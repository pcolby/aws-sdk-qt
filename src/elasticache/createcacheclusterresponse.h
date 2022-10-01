// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECACHECLUSTERRESPONSE_H
#define QTAWS_CREATECACHECLUSTERRESPONSE_H

#include "elasticacheresponse.h"
#include "createcacheclusterrequest.h"

namespace QtAws {
namespace ElastiCache {

class CreateCacheClusterResponsePrivate;

class QTAWSELASTICACHE_EXPORT CreateCacheClusterResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    CreateCacheClusterResponse(const CreateCacheClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCacheClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCacheClusterResponse)
    Q_DISABLE_COPY(CreateCacheClusterResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

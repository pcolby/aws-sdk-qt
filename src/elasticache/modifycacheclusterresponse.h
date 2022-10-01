// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCACHECLUSTERRESPONSE_H
#define QTAWS_MODIFYCACHECLUSTERRESPONSE_H

#include "elasticacheresponse.h"
#include "modifycacheclusterrequest.h"

namespace QtAws {
namespace ElastiCache {

class ModifyCacheClusterResponsePrivate;

class QTAWSELASTICACHE_EXPORT ModifyCacheClusterResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    ModifyCacheClusterResponse(const ModifyCacheClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyCacheClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyCacheClusterResponse)
    Q_DISABLE_COPY(ModifyCacheClusterResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

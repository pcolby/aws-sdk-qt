// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECACHECLUSTERRESPONSE_H
#define QTAWS_DELETECACHECLUSTERRESPONSE_H

#include "elasticacheresponse.h"
#include "deletecacheclusterrequest.h"

namespace QtAws {
namespace ElastiCache {

class DeleteCacheClusterResponsePrivate;

class QTAWSELASTICACHE_EXPORT DeleteCacheClusterResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    DeleteCacheClusterResponse(const DeleteCacheClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCacheClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCacheClusterResponse)
    Q_DISABLE_COPY(DeleteCacheClusterResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

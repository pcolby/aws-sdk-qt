// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECACHESUBNETGROUPRESPONSE_H
#define QTAWS_DELETECACHESUBNETGROUPRESPONSE_H

#include "elasticacheresponse.h"
#include "deletecachesubnetgrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class DeleteCacheSubnetGroupResponsePrivate;

class QTAWSELASTICACHE_EXPORT DeleteCacheSubnetGroupResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    DeleteCacheSubnetGroupResponse(const DeleteCacheSubnetGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCacheSubnetGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCacheSubnetGroupResponse)
    Q_DISABLE_COPY(DeleteCacheSubnetGroupResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

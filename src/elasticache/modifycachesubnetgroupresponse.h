// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCACHESUBNETGROUPRESPONSE_H
#define QTAWS_MODIFYCACHESUBNETGROUPRESPONSE_H

#include "elasticacheresponse.h"
#include "modifycachesubnetgrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class ModifyCacheSubnetGroupResponsePrivate;

class QTAWSELASTICACHE_EXPORT ModifyCacheSubnetGroupResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    ModifyCacheSubnetGroupResponse(const ModifyCacheSubnetGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyCacheSubnetGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyCacheSubnetGroupResponse)
    Q_DISABLE_COPY(ModifyCacheSubnetGroupResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

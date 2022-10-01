// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECACHESUBNETGROUPRESPONSE_H
#define QTAWS_CREATECACHESUBNETGROUPRESPONSE_H

#include "elasticacheresponse.h"
#include "createcachesubnetgrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class CreateCacheSubnetGroupResponsePrivate;

class QTAWSELASTICACHE_EXPORT CreateCacheSubnetGroupResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    CreateCacheSubnetGroupResponse(const CreateCacheSubnetGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCacheSubnetGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCacheSubnetGroupResponse)
    Q_DISABLE_COPY(CreateCacheSubnetGroupResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

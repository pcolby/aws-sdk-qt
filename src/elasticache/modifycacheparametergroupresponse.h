// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCACHEPARAMETERGROUPRESPONSE_H
#define QTAWS_MODIFYCACHEPARAMETERGROUPRESPONSE_H

#include "elasticacheresponse.h"
#include "modifycacheparametergrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class ModifyCacheParameterGroupResponsePrivate;

class QTAWSELASTICACHE_EXPORT ModifyCacheParameterGroupResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    ModifyCacheParameterGroupResponse(const ModifyCacheParameterGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyCacheParameterGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyCacheParameterGroupResponse)
    Q_DISABLE_COPY(ModifyCacheParameterGroupResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

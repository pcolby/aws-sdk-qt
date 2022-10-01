// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETCACHEPARAMETERGROUPRESPONSE_H
#define QTAWS_RESETCACHEPARAMETERGROUPRESPONSE_H

#include "elasticacheresponse.h"
#include "resetcacheparametergrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class ResetCacheParameterGroupResponsePrivate;

class QTAWSELASTICACHE_EXPORT ResetCacheParameterGroupResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    ResetCacheParameterGroupResponse(const ResetCacheParameterGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResetCacheParameterGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResetCacheParameterGroupResponse)
    Q_DISABLE_COPY(ResetCacheParameterGroupResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

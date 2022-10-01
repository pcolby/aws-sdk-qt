// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECACHEPARAMETERGROUPRESPONSE_H
#define QTAWS_CREATECACHEPARAMETERGROUPRESPONSE_H

#include "elasticacheresponse.h"
#include "createcacheparametergrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class CreateCacheParameterGroupResponsePrivate;

class QTAWSELASTICACHE_EXPORT CreateCacheParameterGroupResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    CreateCacheParameterGroupResponse(const CreateCacheParameterGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCacheParameterGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCacheParameterGroupResponse)
    Q_DISABLE_COPY(CreateCacheParameterGroupResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

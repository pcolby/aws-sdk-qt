// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECACHEPARAMETERGROUPRESPONSE_H
#define QTAWS_DELETECACHEPARAMETERGROUPRESPONSE_H

#include "elasticacheresponse.h"
#include "deletecacheparametergrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class DeleteCacheParameterGroupResponsePrivate;

class QTAWSELASTICACHE_EXPORT DeleteCacheParameterGroupResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    DeleteCacheParameterGroupResponse(const DeleteCacheParameterGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCacheParameterGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCacheParameterGroupResponse)
    Q_DISABLE_COPY(DeleteCacheParameterGroupResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

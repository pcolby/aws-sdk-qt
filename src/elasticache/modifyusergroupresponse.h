// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYUSERGROUPRESPONSE_H
#define QTAWS_MODIFYUSERGROUPRESPONSE_H

#include "elasticacheresponse.h"
#include "modifyusergrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class ModifyUserGroupResponsePrivate;

class QTAWSELASTICACHE_EXPORT ModifyUserGroupResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    ModifyUserGroupResponse(const ModifyUserGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyUserGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyUserGroupResponse)
    Q_DISABLE_COPY(ModifyUserGroupResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

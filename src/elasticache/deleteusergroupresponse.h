// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERGROUPRESPONSE_H
#define QTAWS_DELETEUSERGROUPRESPONSE_H

#include "elasticacheresponse.h"
#include "deleteusergrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class DeleteUserGroupResponsePrivate;

class QTAWSELASTICACHE_EXPORT DeleteUserGroupResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    DeleteUserGroupResponse(const DeleteUserGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteUserGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteUserGroupResponse)
    Q_DISABLE_COPY(DeleteUserGroupResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

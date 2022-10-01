// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSERGROUPRESPONSE_H
#define QTAWS_CREATEUSERGROUPRESPONSE_H

#include "elasticacheresponse.h"
#include "createusergrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class CreateUserGroupResponsePrivate;

class QTAWSELASTICACHE_EXPORT CreateUserGroupResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    CreateUserGroupResponse(const CreateUserGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateUserGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateUserGroupResponse)
    Q_DISABLE_COPY(CreateUserGroupResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

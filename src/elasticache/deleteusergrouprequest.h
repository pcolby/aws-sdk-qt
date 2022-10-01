// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERGROUPREQUEST_H
#define QTAWS_DELETEUSERGROUPREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class DeleteUserGroupRequestPrivate;

class QTAWSELASTICACHE_EXPORT DeleteUserGroupRequest : public ElastiCacheRequest {

public:
    DeleteUserGroupRequest(const DeleteUserGroupRequest &other);
    DeleteUserGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteUserGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

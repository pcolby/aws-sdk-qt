// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERGROUPREQUEST_P_H
#define QTAWS_DELETEUSERGROUPREQUEST_P_H

#include "elasticacherequest_p.h"
#include "deleteusergrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class DeleteUserGroupRequest;

class DeleteUserGroupRequestPrivate : public ElastiCacheRequestPrivate {

public:
    DeleteUserGroupRequestPrivate(const ElastiCacheRequest::Action action,
                                   DeleteUserGroupRequest * const q);
    DeleteUserGroupRequestPrivate(const DeleteUserGroupRequestPrivate &other,
                                   DeleteUserGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteUserGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

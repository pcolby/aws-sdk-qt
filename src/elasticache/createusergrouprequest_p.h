// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSERGROUPREQUEST_P_H
#define QTAWS_CREATEUSERGROUPREQUEST_P_H

#include "elasticacherequest_p.h"
#include "createusergrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class CreateUserGroupRequest;

class CreateUserGroupRequestPrivate : public ElastiCacheRequestPrivate {

public:
    CreateUserGroupRequestPrivate(const ElastiCacheRequest::Action action,
                                   CreateUserGroupRequest * const q);
    CreateUserGroupRequestPrivate(const CreateUserGroupRequestPrivate &other,
                                   CreateUserGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateUserGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

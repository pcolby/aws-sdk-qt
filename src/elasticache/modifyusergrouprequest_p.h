// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYUSERGROUPREQUEST_P_H
#define QTAWS_MODIFYUSERGROUPREQUEST_P_H

#include "elasticacherequest_p.h"
#include "modifyusergrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class ModifyUserGroupRequest;

class ModifyUserGroupRequestPrivate : public ElastiCacheRequestPrivate {

public:
    ModifyUserGroupRequestPrivate(const ElastiCacheRequest::Action action,
                                   ModifyUserGroupRequest * const q);
    ModifyUserGroupRequestPrivate(const ModifyUserGroupRequestPrivate &other,
                                   ModifyUserGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyUserGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

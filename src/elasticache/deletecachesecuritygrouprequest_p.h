// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECACHESECURITYGROUPREQUEST_P_H
#define QTAWS_DELETECACHESECURITYGROUPREQUEST_P_H

#include "elasticacherequest_p.h"
#include "deletecachesecuritygrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class DeleteCacheSecurityGroupRequest;

class DeleteCacheSecurityGroupRequestPrivate : public ElastiCacheRequestPrivate {

public:
    DeleteCacheSecurityGroupRequestPrivate(const ElastiCacheRequest::Action action,
                                   DeleteCacheSecurityGroupRequest * const q);
    DeleteCacheSecurityGroupRequestPrivate(const DeleteCacheSecurityGroupRequestPrivate &other,
                                   DeleteCacheSecurityGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCacheSecurityGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECACHESECURITYGROUPREQUEST_P_H
#define QTAWS_CREATECACHESECURITYGROUPREQUEST_P_H

#include "elasticacherequest_p.h"
#include "createcachesecuritygrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class CreateCacheSecurityGroupRequest;

class CreateCacheSecurityGroupRequestPrivate : public ElastiCacheRequestPrivate {

public:
    CreateCacheSecurityGroupRequestPrivate(const ElastiCacheRequest::Action action,
                                   CreateCacheSecurityGroupRequest * const q);
    CreateCacheSecurityGroupRequestPrivate(const CreateCacheSecurityGroupRequestPrivate &other,
                                   CreateCacheSecurityGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCacheSecurityGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

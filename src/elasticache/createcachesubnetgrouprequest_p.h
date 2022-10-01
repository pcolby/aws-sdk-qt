// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECACHESUBNETGROUPREQUEST_P_H
#define QTAWS_CREATECACHESUBNETGROUPREQUEST_P_H

#include "elasticacherequest_p.h"
#include "createcachesubnetgrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class CreateCacheSubnetGroupRequest;

class CreateCacheSubnetGroupRequestPrivate : public ElastiCacheRequestPrivate {

public:
    CreateCacheSubnetGroupRequestPrivate(const ElastiCacheRequest::Action action,
                                   CreateCacheSubnetGroupRequest * const q);
    CreateCacheSubnetGroupRequestPrivate(const CreateCacheSubnetGroupRequestPrivate &other,
                                   CreateCacheSubnetGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCacheSubnetGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

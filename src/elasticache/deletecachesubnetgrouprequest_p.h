// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECACHESUBNETGROUPREQUEST_P_H
#define QTAWS_DELETECACHESUBNETGROUPREQUEST_P_H

#include "elasticacherequest_p.h"
#include "deletecachesubnetgrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class DeleteCacheSubnetGroupRequest;

class DeleteCacheSubnetGroupRequestPrivate : public ElastiCacheRequestPrivate {

public:
    DeleteCacheSubnetGroupRequestPrivate(const ElastiCacheRequest::Action action,
                                   DeleteCacheSubnetGroupRequest * const q);
    DeleteCacheSubnetGroupRequestPrivate(const DeleteCacheSubnetGroupRequestPrivate &other,
                                   DeleteCacheSubnetGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCacheSubnetGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

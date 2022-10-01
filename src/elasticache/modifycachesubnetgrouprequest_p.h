// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCACHESUBNETGROUPREQUEST_P_H
#define QTAWS_MODIFYCACHESUBNETGROUPREQUEST_P_H

#include "elasticacherequest_p.h"
#include "modifycachesubnetgrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class ModifyCacheSubnetGroupRequest;

class ModifyCacheSubnetGroupRequestPrivate : public ElastiCacheRequestPrivate {

public:
    ModifyCacheSubnetGroupRequestPrivate(const ElastiCacheRequest::Action action,
                                   ModifyCacheSubnetGroupRequest * const q);
    ModifyCacheSubnetGroupRequestPrivate(const ModifyCacheSubnetGroupRequestPrivate &other,
                                   ModifyCacheSubnetGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyCacheSubnetGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

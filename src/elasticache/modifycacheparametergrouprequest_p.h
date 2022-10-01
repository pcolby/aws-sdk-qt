// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCACHEPARAMETERGROUPREQUEST_P_H
#define QTAWS_MODIFYCACHEPARAMETERGROUPREQUEST_P_H

#include "elasticacherequest_p.h"
#include "modifycacheparametergrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class ModifyCacheParameterGroupRequest;

class ModifyCacheParameterGroupRequestPrivate : public ElastiCacheRequestPrivate {

public:
    ModifyCacheParameterGroupRequestPrivate(const ElastiCacheRequest::Action action,
                                   ModifyCacheParameterGroupRequest * const q);
    ModifyCacheParameterGroupRequestPrivate(const ModifyCacheParameterGroupRequestPrivate &other,
                                   ModifyCacheParameterGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyCacheParameterGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

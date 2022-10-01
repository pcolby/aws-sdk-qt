// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECACHEPARAMETERGROUPREQUEST_P_H
#define QTAWS_CREATECACHEPARAMETERGROUPREQUEST_P_H

#include "elasticacherequest_p.h"
#include "createcacheparametergrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class CreateCacheParameterGroupRequest;

class CreateCacheParameterGroupRequestPrivate : public ElastiCacheRequestPrivate {

public:
    CreateCacheParameterGroupRequestPrivate(const ElastiCacheRequest::Action action,
                                   CreateCacheParameterGroupRequest * const q);
    CreateCacheParameterGroupRequestPrivate(const CreateCacheParameterGroupRequestPrivate &other,
                                   CreateCacheParameterGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCacheParameterGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

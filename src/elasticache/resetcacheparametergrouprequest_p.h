// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETCACHEPARAMETERGROUPREQUEST_P_H
#define QTAWS_RESETCACHEPARAMETERGROUPREQUEST_P_H

#include "elasticacherequest_p.h"
#include "resetcacheparametergrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class ResetCacheParameterGroupRequest;

class ResetCacheParameterGroupRequestPrivate : public ElastiCacheRequestPrivate {

public:
    ResetCacheParameterGroupRequestPrivate(const ElastiCacheRequest::Action action,
                                   ResetCacheParameterGroupRequest * const q);
    ResetCacheParameterGroupRequestPrivate(const ResetCacheParameterGroupRequestPrivate &other,
                                   ResetCacheParameterGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResetCacheParameterGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECACHEPARAMETERGROUPREQUEST_P_H
#define QTAWS_DELETECACHEPARAMETERGROUPREQUEST_P_H

#include "elasticacherequest_p.h"
#include "deletecacheparametergrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class DeleteCacheParameterGroupRequest;

class DeleteCacheParameterGroupRequestPrivate : public ElastiCacheRequestPrivate {

public:
    DeleteCacheParameterGroupRequestPrivate(const ElastiCacheRequest::Action action,
                                   DeleteCacheParameterGroupRequest * const q);
    DeleteCacheParameterGroupRequestPrivate(const DeleteCacheParameterGroupRequestPrivate &other,
                                   DeleteCacheParameterGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCacheParameterGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

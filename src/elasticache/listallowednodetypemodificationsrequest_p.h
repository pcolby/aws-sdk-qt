// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALLOWEDNODETYPEMODIFICATIONSREQUEST_P_H
#define QTAWS_LISTALLOWEDNODETYPEMODIFICATIONSREQUEST_P_H

#include "elasticacherequest_p.h"
#include "listallowednodetypemodificationsrequest.h"

namespace QtAws {
namespace ElastiCache {

class ListAllowedNodeTypeModificationsRequest;

class ListAllowedNodeTypeModificationsRequestPrivate : public ElastiCacheRequestPrivate {

public:
    ListAllowedNodeTypeModificationsRequestPrivate(const ElastiCacheRequest::Action action,
                                   ListAllowedNodeTypeModificationsRequest * const q);
    ListAllowedNodeTypeModificationsRequestPrivate(const ListAllowedNodeTypeModificationsRequestPrivate &other,
                                   ListAllowedNodeTypeModificationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAllowedNodeTypeModificationsRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

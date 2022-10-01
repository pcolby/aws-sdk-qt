// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORRESOURCESREQUEST_P_H
#define QTAWS_LISTTAGSFORRESOURCESREQUEST_P_H

#include "route53request_p.h"
#include "listtagsforresourcesrequest.h"

namespace QtAws {
namespace Route53 {

class ListTagsForResourcesRequest;

class ListTagsForResourcesRequestPrivate : public Route53RequestPrivate {

public:
    ListTagsForResourcesRequestPrivate(const Route53Request::Action action,
                                   ListTagsForResourcesRequest * const q);
    ListTagsForResourcesRequestPrivate(const ListTagsForResourcesRequestPrivate &other,
                                   ListTagsForResourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTagsForResourcesRequest)

};

} // namespace Route53
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORRESOURCESREQUEST_P_H
#define QTAWS_LISTTAGSFORRESOURCESREQUEST_P_H

#include "route53recoveryreadinessrequest_p.h"
#include "listtagsforresourcesrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class ListTagsForResourcesRequest;

class ListTagsForResourcesRequestPrivate : public Route53RecoveryReadinessRequestPrivate {

public:
    ListTagsForResourcesRequestPrivate(const Route53RecoveryReadinessRequest::Action action,
                                   ListTagsForResourcesRequest * const q);
    ListTagsForResourcesRequestPrivate(const ListTagsForResourcesRequestPrivate &other,
                                   ListTagsForResourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTagsForResourcesRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif

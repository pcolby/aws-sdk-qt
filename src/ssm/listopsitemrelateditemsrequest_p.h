// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOPSITEMRELATEDITEMSREQUEST_P_H
#define QTAWS_LISTOPSITEMRELATEDITEMSREQUEST_P_H

#include "ssmrequest_p.h"
#include "listopsitemrelateditemsrequest.h"

namespace QtAws {
namespace Ssm {

class ListOpsItemRelatedItemsRequest;

class ListOpsItemRelatedItemsRequestPrivate : public SsmRequestPrivate {

public:
    ListOpsItemRelatedItemsRequestPrivate(const SsmRequest::Action action,
                                   ListOpsItemRelatedItemsRequest * const q);
    ListOpsItemRelatedItemsRequestPrivate(const ListOpsItemRelatedItemsRequestPrivate &other,
                                   ListOpsItemRelatedItemsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListOpsItemRelatedItemsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif

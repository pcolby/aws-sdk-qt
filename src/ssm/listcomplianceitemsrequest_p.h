// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPLIANCEITEMSREQUEST_P_H
#define QTAWS_LISTCOMPLIANCEITEMSREQUEST_P_H

#include "ssmrequest_p.h"
#include "listcomplianceitemsrequest.h"

namespace QtAws {
namespace Ssm {

class ListComplianceItemsRequest;

class ListComplianceItemsRequestPrivate : public SsmRequestPrivate {

public:
    ListComplianceItemsRequestPrivate(const SsmRequest::Action action,
                                   ListComplianceItemsRequest * const q);
    ListComplianceItemsRequestPrivate(const ListComplianceItemsRequestPrivate &other,
                                   ListComplianceItemsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListComplianceItemsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif

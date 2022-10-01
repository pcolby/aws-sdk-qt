// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRELATEDITEMSREQUEST_P_H
#define QTAWS_LISTRELATEDITEMSREQUEST_P_H

#include "ssmincidentsrequest_p.h"
#include "listrelateditemsrequest.h"

namespace QtAws {
namespace SsmIncidents {

class ListRelatedItemsRequest;

class ListRelatedItemsRequestPrivate : public SsmIncidentsRequestPrivate {

public:
    ListRelatedItemsRequestPrivate(const SsmIncidentsRequest::Action action,
                                   ListRelatedItemsRequest * const q);
    ListRelatedItemsRequestPrivate(const ListRelatedItemsRequestPrivate &other,
                                   ListRelatedItemsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRelatedItemsRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif

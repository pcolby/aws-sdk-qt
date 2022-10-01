// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETSREQUEST_P_H
#define QTAWS_LISTDATASETSREQUEST_P_H

#include "dataexchangerequest_p.h"
#include "listdatasetsrequest.h"

namespace QtAws {
namespace DataExchange {

class ListDataSetsRequest;

class ListDataSetsRequestPrivate : public DataExchangeRequestPrivate {

public:
    ListDataSetsRequestPrivate(const DataExchangeRequest::Action action,
                                   ListDataSetsRequest * const q);
    ListDataSetsRequestPrivate(const ListDataSetsRequestPrivate &other,
                                   ListDataSetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDataSetsRequest)

};

} // namespace DataExchange
} // namespace QtAws

#endif

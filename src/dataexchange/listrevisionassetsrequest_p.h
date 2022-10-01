// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREVISIONASSETSREQUEST_P_H
#define QTAWS_LISTREVISIONASSETSREQUEST_P_H

#include "dataexchangerequest_p.h"
#include "listrevisionassetsrequest.h"

namespace QtAws {
namespace DataExchange {

class ListRevisionAssetsRequest;

class ListRevisionAssetsRequestPrivate : public DataExchangeRequestPrivate {

public:
    ListRevisionAssetsRequestPrivate(const DataExchangeRequest::Action action,
                                   ListRevisionAssetsRequest * const q);
    ListRevisionAssetsRequestPrivate(const ListRevisionAssetsRequestPrivate &other,
                                   ListRevisionAssetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRevisionAssetsRequest)

};

} // namespace DataExchange
} // namespace QtAws

#endif

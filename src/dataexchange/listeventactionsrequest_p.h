// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTACTIONSREQUEST_P_H
#define QTAWS_LISTEVENTACTIONSREQUEST_P_H

#include "dataexchangerequest_p.h"
#include "listeventactionsrequest.h"

namespace QtAws {
namespace DataExchange {

class ListEventActionsRequest;

class ListEventActionsRequestPrivate : public DataExchangeRequestPrivate {

public:
    ListEventActionsRequestPrivate(const DataExchangeRequest::Action action,
                                   ListEventActionsRequest * const q);
    ListEventActionsRequestPrivate(const ListEventActionsRequestPrivate &other,
                                   ListEventActionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEventActionsRequest)

};

} // namespace DataExchange
} // namespace QtAws

#endif

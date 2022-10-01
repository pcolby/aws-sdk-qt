// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROTOCOLSLISTSREQUEST_P_H
#define QTAWS_LISTPROTOCOLSLISTSREQUEST_P_H

#include "fmsrequest_p.h"
#include "listprotocolslistsrequest.h"

namespace QtAws {
namespace Fms {

class ListProtocolsListsRequest;

class ListProtocolsListsRequestPrivate : public FmsRequestPrivate {

public:
    ListProtocolsListsRequestPrivate(const FmsRequest::Action action,
                                   ListProtocolsListsRequest * const q);
    ListProtocolsListsRequestPrivate(const ListProtocolsListsRequestPrivate &other,
                                   ListProtocolsListsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListProtocolsListsRequest)

};

} // namespace Fms
} // namespace QtAws

#endif

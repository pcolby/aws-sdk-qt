// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVIRTUALINTERFACETESTHISTORYREQUEST_P_H
#define QTAWS_LISTVIRTUALINTERFACETESTHISTORYREQUEST_P_H

#include "directconnectrequest_p.h"
#include "listvirtualinterfacetesthistoryrequest.h"

namespace QtAws {
namespace DirectConnect {

class ListVirtualInterfaceTestHistoryRequest;

class ListVirtualInterfaceTestHistoryRequestPrivate : public DirectConnectRequestPrivate {

public:
    ListVirtualInterfaceTestHistoryRequestPrivate(const DirectConnectRequest::Action action,
                                   ListVirtualInterfaceTestHistoryRequest * const q);
    ListVirtualInterfaceTestHistoryRequestPrivate(const ListVirtualInterfaceTestHistoryRequestPrivate &other,
                                   ListVirtualInterfaceTestHistoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListVirtualInterfaceTestHistoryRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif

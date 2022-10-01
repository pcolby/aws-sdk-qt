// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVIRTUALINTERFACETESTHISTORYRESPONSE_P_H
#define QTAWS_LISTVIRTUALINTERFACETESTHISTORYRESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class ListVirtualInterfaceTestHistoryResponse;

class ListVirtualInterfaceTestHistoryResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit ListVirtualInterfaceTestHistoryResponsePrivate(ListVirtualInterfaceTestHistoryResponse * const q);

    void parseListVirtualInterfaceTestHistoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListVirtualInterfaceTestHistoryResponse)
    Q_DISABLE_COPY(ListVirtualInterfaceTestHistoryResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif

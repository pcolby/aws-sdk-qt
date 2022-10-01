// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVIRTUALINTERFACETESTHISTORYRESPONSE_H
#define QTAWS_LISTVIRTUALINTERFACETESTHISTORYRESPONSE_H

#include "directconnectresponse.h"
#include "listvirtualinterfacetesthistoryrequest.h"

namespace QtAws {
namespace DirectConnect {

class ListVirtualInterfaceTestHistoryResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT ListVirtualInterfaceTestHistoryResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    ListVirtualInterfaceTestHistoryResponse(const ListVirtualInterfaceTestHistoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListVirtualInterfaceTestHistoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVirtualInterfaceTestHistoryResponse)
    Q_DISABLE_COPY(ListVirtualInterfaceTestHistoryResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif

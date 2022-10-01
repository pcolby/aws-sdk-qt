// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTACTIONSRESPONSE_H
#define QTAWS_LISTEVENTACTIONSRESPONSE_H

#include "dataexchangeresponse.h"
#include "listeventactionsrequest.h"

namespace QtAws {
namespace DataExchange {

class ListEventActionsResponsePrivate;

class QTAWSDATAEXCHANGE_EXPORT ListEventActionsResponse : public DataExchangeResponse {
    Q_OBJECT

public:
    ListEventActionsResponse(const ListEventActionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEventActionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEventActionsResponse)
    Q_DISABLE_COPY(ListEventActionsResponse)

};

} // namespace DataExchange
} // namespace QtAws

#endif

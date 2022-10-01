// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREVISIONASSETSRESPONSE_H
#define QTAWS_LISTREVISIONASSETSRESPONSE_H

#include "dataexchangeresponse.h"
#include "listrevisionassetsrequest.h"

namespace QtAws {
namespace DataExchange {

class ListRevisionAssetsResponsePrivate;

class QTAWSDATAEXCHANGE_EXPORT ListRevisionAssetsResponse : public DataExchangeResponse {
    Q_OBJECT

public:
    ListRevisionAssetsResponse(const ListRevisionAssetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRevisionAssetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRevisionAssetsResponse)
    Q_DISABLE_COPY(ListRevisionAssetsResponse)

};

} // namespace DataExchange
} // namespace QtAws

#endif

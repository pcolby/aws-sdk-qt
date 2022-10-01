// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETSRESPONSE_H
#define QTAWS_LISTDATASETSRESPONSE_H

#include "dataexchangeresponse.h"
#include "listdatasetsrequest.h"

namespace QtAws {
namespace DataExchange {

class ListDataSetsResponsePrivate;

class QTAWSDATAEXCHANGE_EXPORT ListDataSetsResponse : public DataExchangeResponse {
    Q_OBJECT

public:
    ListDataSetsResponse(const ListDataSetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDataSetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDataSetsResponse)
    Q_DISABLE_COPY(ListDataSetsResponse)

};

} // namespace DataExchange
} // namespace QtAws

#endif

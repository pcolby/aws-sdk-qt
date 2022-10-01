// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETREVISIONSRESPONSE_H
#define QTAWS_LISTDATASETREVISIONSRESPONSE_H

#include "dataexchangeresponse.h"
#include "listdatasetrevisionsrequest.h"

namespace QtAws {
namespace DataExchange {

class ListDataSetRevisionsResponsePrivate;

class QTAWSDATAEXCHANGE_EXPORT ListDataSetRevisionsResponse : public DataExchangeResponse {
    Q_OBJECT

public:
    ListDataSetRevisionsResponse(const ListDataSetRevisionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDataSetRevisionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDataSetRevisionsResponse)
    Q_DISABLE_COPY(ListDataSetRevisionsResponse)

};

} // namespace DataExchange
} // namespace QtAws

#endif

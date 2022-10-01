// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATASETRESPONSE_H
#define QTAWS_GETDATASETRESPONSE_H

#include "dataexchangeresponse.h"
#include "getdatasetrequest.h"

namespace QtAws {
namespace DataExchange {

class GetDataSetResponsePrivate;

class QTAWSDATAEXCHANGE_EXPORT GetDataSetResponse : public DataExchangeResponse {
    Q_OBJECT

public:
    GetDataSetResponse(const GetDataSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDataSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDataSetResponse)
    Q_DISABLE_COPY(GetDataSetResponse)

};

} // namespace DataExchange
} // namespace QtAws

#endif

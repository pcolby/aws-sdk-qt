// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREVISIONRESPONSE_H
#define QTAWS_GETREVISIONRESPONSE_H

#include "dataexchangeresponse.h"
#include "getrevisionrequest.h"

namespace QtAws {
namespace DataExchange {

class GetRevisionResponsePrivate;

class QTAWSDATAEXCHANGE_EXPORT GetRevisionResponse : public DataExchangeResponse {
    Q_OBJECT

public:
    GetRevisionResponse(const GetRevisionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRevisionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRevisionResponse)
    Q_DISABLE_COPY(GetRevisionResponse)

};

} // namespace DataExchange
} // namespace QtAws

#endif

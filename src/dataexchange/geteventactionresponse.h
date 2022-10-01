// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTACTIONRESPONSE_H
#define QTAWS_GETEVENTACTIONRESPONSE_H

#include "dataexchangeresponse.h"
#include "geteventactionrequest.h"

namespace QtAws {
namespace DataExchange {

class GetEventActionResponsePrivate;

class QTAWSDATAEXCHANGE_EXPORT GetEventActionResponse : public DataExchangeResponse {
    Q_OBJECT

public:
    GetEventActionResponse(const GetEventActionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEventActionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEventActionResponse)
    Q_DISABLE_COPY(GetEventActionResponse)

};

} // namespace DataExchange
} // namespace QtAws

#endif

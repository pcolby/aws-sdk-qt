// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEVENTACTIONRESPONSE_H
#define QTAWS_CREATEEVENTACTIONRESPONSE_H

#include "dataexchangeresponse.h"
#include "createeventactionrequest.h"

namespace QtAws {
namespace DataExchange {

class CreateEventActionResponsePrivate;

class QTAWSDATAEXCHANGE_EXPORT CreateEventActionResponse : public DataExchangeResponse {
    Q_OBJECT

public:
    CreateEventActionResponse(const CreateEventActionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateEventActionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEventActionResponse)
    Q_DISABLE_COPY(CreateEventActionResponse)

};

} // namespace DataExchange
} // namespace QtAws

#endif

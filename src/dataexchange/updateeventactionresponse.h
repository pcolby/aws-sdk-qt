// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEVENTACTIONRESPONSE_H
#define QTAWS_UPDATEEVENTACTIONRESPONSE_H

#include "dataexchangeresponse.h"
#include "updateeventactionrequest.h"

namespace QtAws {
namespace DataExchange {

class UpdateEventActionResponsePrivate;

class QTAWSDATAEXCHANGE_EXPORT UpdateEventActionResponse : public DataExchangeResponse {
    Q_OBJECT

public:
    UpdateEventActionResponse(const UpdateEventActionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateEventActionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEventActionResponse)
    Q_DISABLE_COPY(UpdateEventActionResponse)

};

} // namespace DataExchange
} // namespace QtAws

#endif

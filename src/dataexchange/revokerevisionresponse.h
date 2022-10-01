// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKEREVISIONRESPONSE_H
#define QTAWS_REVOKEREVISIONRESPONSE_H

#include "dataexchangeresponse.h"
#include "revokerevisionrequest.h"

namespace QtAws {
namespace DataExchange {

class RevokeRevisionResponsePrivate;

class QTAWSDATAEXCHANGE_EXPORT RevokeRevisionResponse : public DataExchangeResponse {
    Q_OBJECT

public:
    RevokeRevisionResponse(const RevokeRevisionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RevokeRevisionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RevokeRevisionResponse)
    Q_DISABLE_COPY(RevokeRevisionResponse)

};

} // namespace DataExchange
} // namespace QtAws

#endif

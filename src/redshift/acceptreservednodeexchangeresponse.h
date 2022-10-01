// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTRESERVEDNODEEXCHANGERESPONSE_H
#define QTAWS_ACCEPTRESERVEDNODEEXCHANGERESPONSE_H

#include "redshiftresponse.h"
#include "acceptreservednodeexchangerequest.h"

namespace QtAws {
namespace Redshift {

class AcceptReservedNodeExchangeResponsePrivate;

class QTAWSREDSHIFT_EXPORT AcceptReservedNodeExchangeResponse : public RedshiftResponse {
    Q_OBJECT

public:
    AcceptReservedNodeExchangeResponse(const AcceptReservedNodeExchangeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AcceptReservedNodeExchangeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptReservedNodeExchangeResponse)
    Q_DISABLE_COPY(AcceptReservedNodeExchangeResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif

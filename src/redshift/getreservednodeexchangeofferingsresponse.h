// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESERVEDNODEEXCHANGEOFFERINGSRESPONSE_H
#define QTAWS_GETRESERVEDNODEEXCHANGEOFFERINGSRESPONSE_H

#include "redshiftresponse.h"
#include "getreservednodeexchangeofferingsrequest.h"

namespace QtAws {
namespace Redshift {

class GetReservedNodeExchangeOfferingsResponsePrivate;

class QTAWSREDSHIFT_EXPORT GetReservedNodeExchangeOfferingsResponse : public RedshiftResponse {
    Q_OBJECT

public:
    GetReservedNodeExchangeOfferingsResponse(const GetReservedNodeExchangeOfferingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetReservedNodeExchangeOfferingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetReservedNodeExchangeOfferingsResponse)
    Q_DISABLE_COPY(GetReservedNodeExchangeOfferingsResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif

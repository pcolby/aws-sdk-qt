// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESERVEDNODEEXCHANGEOFFERINGSRESPONSE_P_H
#define QTAWS_GETRESERVEDNODEEXCHANGEOFFERINGSRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class GetReservedNodeExchangeOfferingsResponse;

class GetReservedNodeExchangeOfferingsResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit GetReservedNodeExchangeOfferingsResponsePrivate(GetReservedNodeExchangeOfferingsResponse * const q);

    void parseGetReservedNodeExchangeOfferingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetReservedNodeExchangeOfferingsResponse)
    Q_DISABLE_COPY(GetReservedNodeExchangeOfferingsResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif

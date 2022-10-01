// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESERVEDINSTANCESEXCHANGEQUOTERESPONSE_P_H
#define QTAWS_GETRESERVEDINSTANCESEXCHANGEQUOTERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class GetReservedInstancesExchangeQuoteResponse;

class GetReservedInstancesExchangeQuoteResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit GetReservedInstancesExchangeQuoteResponsePrivate(GetReservedInstancesExchangeQuoteResponse * const q);

    void parseGetReservedInstancesExchangeQuoteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetReservedInstancesExchangeQuoteResponse)
    Q_DISABLE_COPY(GetReservedInstancesExchangeQuoteResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

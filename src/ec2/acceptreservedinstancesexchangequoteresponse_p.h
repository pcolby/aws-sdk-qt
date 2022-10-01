// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTRESERVEDINSTANCESEXCHANGEQUOTERESPONSE_P_H
#define QTAWS_ACCEPTRESERVEDINSTANCESEXCHANGEQUOTERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class AcceptReservedInstancesExchangeQuoteResponse;

class AcceptReservedInstancesExchangeQuoteResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit AcceptReservedInstancesExchangeQuoteResponsePrivate(AcceptReservedInstancesExchangeQuoteResponse * const q);

    void parseAcceptReservedInstancesExchangeQuoteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AcceptReservedInstancesExchangeQuoteResponse)
    Q_DISABLE_COPY(AcceptReservedInstancesExchangeQuoteResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

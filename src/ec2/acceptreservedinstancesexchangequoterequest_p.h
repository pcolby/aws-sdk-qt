// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTRESERVEDINSTANCESEXCHANGEQUOTEREQUEST_P_H
#define QTAWS_ACCEPTRESERVEDINSTANCESEXCHANGEQUOTEREQUEST_P_H

#include "ec2request_p.h"
#include "acceptreservedinstancesexchangequoterequest.h"

namespace QtAws {
namespace Ec2 {

class AcceptReservedInstancesExchangeQuoteRequest;

class AcceptReservedInstancesExchangeQuoteRequestPrivate : public Ec2RequestPrivate {

public:
    AcceptReservedInstancesExchangeQuoteRequestPrivate(const Ec2Request::Action action,
                                   AcceptReservedInstancesExchangeQuoteRequest * const q);
    AcceptReservedInstancesExchangeQuoteRequestPrivate(const AcceptReservedInstancesExchangeQuoteRequestPrivate &other,
                                   AcceptReservedInstancesExchangeQuoteRequest * const q);

private:
    Q_DECLARE_PUBLIC(AcceptReservedInstancesExchangeQuoteRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

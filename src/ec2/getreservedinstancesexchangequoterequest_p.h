// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESERVEDINSTANCESEXCHANGEQUOTEREQUEST_P_H
#define QTAWS_GETRESERVEDINSTANCESEXCHANGEQUOTEREQUEST_P_H

#include "ec2request_p.h"
#include "getreservedinstancesexchangequoterequest.h"

namespace QtAws {
namespace Ec2 {

class GetReservedInstancesExchangeQuoteRequest;

class GetReservedInstancesExchangeQuoteRequestPrivate : public Ec2RequestPrivate {

public:
    GetReservedInstancesExchangeQuoteRequestPrivate(const Ec2Request::Action action,
                                   GetReservedInstancesExchangeQuoteRequest * const q);
    GetReservedInstancesExchangeQuoteRequestPrivate(const GetReservedInstancesExchangeQuoteRequestPrivate &other,
                                   GetReservedInstancesExchangeQuoteRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetReservedInstancesExchangeQuoteRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESERVEDNODEEXCHANGEOFFERINGSREQUEST_P_H
#define QTAWS_GETRESERVEDNODEEXCHANGEOFFERINGSREQUEST_P_H

#include "redshiftrequest_p.h"
#include "getreservednodeexchangeofferingsrequest.h"

namespace QtAws {
namespace Redshift {

class GetReservedNodeExchangeOfferingsRequest;

class GetReservedNodeExchangeOfferingsRequestPrivate : public RedshiftRequestPrivate {

public:
    GetReservedNodeExchangeOfferingsRequestPrivate(const RedshiftRequest::Action action,
                                   GetReservedNodeExchangeOfferingsRequest * const q);
    GetReservedNodeExchangeOfferingsRequestPrivate(const GetReservedNodeExchangeOfferingsRequestPrivate &other,
                                   GetReservedNodeExchangeOfferingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetReservedNodeExchangeOfferingsRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif

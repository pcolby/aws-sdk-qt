/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_GETENTITLEMENTSREQUEST_P_H
#define QTAWS_GETENTITLEMENTSREQUEST_P_H

#include "marketplaceentitlementservicerequest_p.h"
#include "getentitlementsrequest.h"

namespace QtAws {
namespace MarketplaceEntitlementService {

class GetEntitlementsRequest;

class GetEntitlementsRequestPrivate : public MarketplaceEntitlementServiceRequestPrivate {

public:
    GetEntitlementsRequestPrivate(const MarketplaceEntitlementServiceRequest::Action action,
                                   GetEntitlementsRequest * const q);
    GetEntitlementsRequestPrivate(const GetEntitlementsRequestPrivate &other,
                                   GetEntitlementsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEntitlementsRequest)

};

} // namespace MarketplaceEntitlementService
} // namespace QtAws

#endif

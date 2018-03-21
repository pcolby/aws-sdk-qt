/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_PURCHASERESERVEDNODEOFFERINGREQUEST_P_H
#define QTAWS_PURCHASERESERVEDNODEOFFERINGREQUEST_P_H

#include "redshift_p.h"
#include "purchasereservednodeofferingrequest.h"

namespace AWS {

namespace Redshift {

class PurchaseReservedNodeOfferingRequest;

class QTAWS_EXPORT PurchaseReservedNodeOfferingRequestPrivate : public RedshiftPrivate {

public:
    PurchaseReservedNodeOfferingRequestPrivate(const Redshift::Action action,
                                   PurchaseReservedNodeOfferingRequest * const q);
    PurchaseReservedNodeOfferingRequestPrivate(const PurchaseReservedNodeOfferingRequestPrivate &other,
                                   PurchaseReservedNodeOfferingRequest * const q);

private:
    Q_DECLARE_PUBLIC(PurchaseReservedNodeOfferingRequest)

};

} // namespace Redshift
} // namespace AWS

#endif

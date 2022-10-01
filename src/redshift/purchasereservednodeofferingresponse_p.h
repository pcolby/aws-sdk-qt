// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURCHASERESERVEDNODEOFFERINGRESPONSE_P_H
#define QTAWS_PURCHASERESERVEDNODEOFFERINGRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class PurchaseReservedNodeOfferingResponse;

class PurchaseReservedNodeOfferingResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit PurchaseReservedNodeOfferingResponsePrivate(PurchaseReservedNodeOfferingResponse * const q);

    void parsePurchaseReservedNodeOfferingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PurchaseReservedNodeOfferingResponse)
    Q_DISABLE_COPY(PurchaseReservedNodeOfferingResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif

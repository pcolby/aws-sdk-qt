// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURCHASERESERVEDINSTANCEOFFERINGRESPONSE_P_H
#define QTAWS_PURCHASERESERVEDINSTANCEOFFERINGRESPONSE_P_H

#include "opensearchresponse_p.h"

namespace QtAws {
namespace OpenSearch {

class PurchaseReservedInstanceOfferingResponse;

class PurchaseReservedInstanceOfferingResponsePrivate : public OpenSearchResponsePrivate {

public:

    explicit PurchaseReservedInstanceOfferingResponsePrivate(PurchaseReservedInstanceOfferingResponse * const q);

    void parsePurchaseReservedInstanceOfferingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PurchaseReservedInstanceOfferingResponse)
    Q_DISABLE_COPY(PurchaseReservedInstanceOfferingResponsePrivate)

};

} // namespace OpenSearch
} // namespace QtAws

#endif

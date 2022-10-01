// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRICINGPLANSRESPONSE_P_H
#define QTAWS_LISTPRICINGPLANSRESPONSE_P_H

#include "billingconductorresponse_p.h"

namespace QtAws {
namespace BillingConductor {

class ListPricingPlansResponse;

class ListPricingPlansResponsePrivate : public BillingConductorResponsePrivate {

public:

    explicit ListPricingPlansResponsePrivate(ListPricingPlansResponse * const q);

    void parseListPricingPlansResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPricingPlansResponse)
    Q_DISABLE_COPY(ListPricingPlansResponsePrivate)

};

} // namespace BillingConductor
} // namespace QtAws

#endif

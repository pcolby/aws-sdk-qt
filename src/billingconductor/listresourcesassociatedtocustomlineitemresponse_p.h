// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCESASSOCIATEDTOCUSTOMLINEITEMRESPONSE_P_H
#define QTAWS_LISTRESOURCESASSOCIATEDTOCUSTOMLINEITEMRESPONSE_P_H

#include "billingconductorresponse_p.h"

namespace QtAws {
namespace BillingConductor {

class ListResourcesAssociatedToCustomLineItemResponse;

class ListResourcesAssociatedToCustomLineItemResponsePrivate : public BillingConductorResponsePrivate {

public:

    explicit ListResourcesAssociatedToCustomLineItemResponsePrivate(ListResourcesAssociatedToCustomLineItemResponse * const q);

    void parseListResourcesAssociatedToCustomLineItemResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListResourcesAssociatedToCustomLineItemResponse)
    Q_DISABLE_COPY(ListResourcesAssociatedToCustomLineItemResponsePrivate)

};

} // namespace BillingConductor
} // namespace QtAws

#endif

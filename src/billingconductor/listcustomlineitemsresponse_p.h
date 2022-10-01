// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMLINEITEMSRESPONSE_P_H
#define QTAWS_LISTCUSTOMLINEITEMSRESPONSE_P_H

#include "billingconductorresponse_p.h"

namespace QtAws {
namespace BillingConductor {

class ListCustomLineItemsResponse;

class ListCustomLineItemsResponsePrivate : public BillingConductorResponsePrivate {

public:

    explicit ListCustomLineItemsResponsePrivate(ListCustomLineItemsResponse * const q);

    void parseListCustomLineItemsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCustomLineItemsResponse)
    Q_DISABLE_COPY(ListCustomLineItemsResponsePrivate)

};

} // namespace BillingConductor
} // namespace QtAws

#endif

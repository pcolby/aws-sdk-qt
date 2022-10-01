// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBILLINGGROUPCOSTREPORTSRESPONSE_P_H
#define QTAWS_LISTBILLINGGROUPCOSTREPORTSRESPONSE_P_H

#include "billingconductorresponse_p.h"

namespace QtAws {
namespace BillingConductor {

class ListBillingGroupCostReportsResponse;

class ListBillingGroupCostReportsResponsePrivate : public BillingConductorResponsePrivate {

public:

    explicit ListBillingGroupCostReportsResponsePrivate(ListBillingGroupCostReportsResponse * const q);

    void parseListBillingGroupCostReportsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBillingGroupCostReportsResponse)
    Q_DISABLE_COPY(ListBillingGroupCostReportsResponsePrivate)

};

} // namespace BillingConductor
} // namespace QtAws

#endif

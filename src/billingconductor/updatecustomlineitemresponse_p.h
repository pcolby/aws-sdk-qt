// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECUSTOMLINEITEMRESPONSE_P_H
#define QTAWS_UPDATECUSTOMLINEITEMRESPONSE_P_H

#include "billingconductorresponse_p.h"

namespace QtAws {
namespace BillingConductor {

class UpdateCustomLineItemResponse;

class UpdateCustomLineItemResponsePrivate : public BillingConductorResponsePrivate {

public:

    explicit UpdateCustomLineItemResponsePrivate(UpdateCustomLineItemResponse * const q);

    void parseUpdateCustomLineItemResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateCustomLineItemResponse)
    Q_DISABLE_COPY(UpdateCustomLineItemResponsePrivate)

};

} // namespace BillingConductor
} // namespace QtAws

#endif

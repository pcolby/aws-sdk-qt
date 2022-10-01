// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMLINEITEMRESPONSE_P_H
#define QTAWS_CREATECUSTOMLINEITEMRESPONSE_P_H

#include "billingconductorresponse_p.h"

namespace QtAws {
namespace BillingConductor {

class CreateCustomLineItemResponse;

class CreateCustomLineItemResponsePrivate : public BillingConductorResponsePrivate {

public:

    explicit CreateCustomLineItemResponsePrivate(CreateCustomLineItemResponse * const q);

    void parseCreateCustomLineItemResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCustomLineItemResponse)
    Q_DISABLE_COPY(CreateCustomLineItemResponsePrivate)

};

} // namespace BillingConductor
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDISASSOCIATERESOURCESFROMCUSTOMLINEITEMRESPONSE_P_H
#define QTAWS_BATCHDISASSOCIATERESOURCESFROMCUSTOMLINEITEMRESPONSE_P_H

#include "billingconductorresponse_p.h"

namespace QtAws {
namespace BillingConductor {

class BatchDisassociateResourcesFromCustomLineItemResponse;

class BatchDisassociateResourcesFromCustomLineItemResponsePrivate : public BillingConductorResponsePrivate {

public:

    explicit BatchDisassociateResourcesFromCustomLineItemResponsePrivate(BatchDisassociateResourcesFromCustomLineItemResponse * const q);

    void parseBatchDisassociateResourcesFromCustomLineItemResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchDisassociateResourcesFromCustomLineItemResponse)
    Q_DISABLE_COPY(BatchDisassociateResourcesFromCustomLineItemResponsePrivate)

};

} // namespace BillingConductor
} // namespace QtAws

#endif

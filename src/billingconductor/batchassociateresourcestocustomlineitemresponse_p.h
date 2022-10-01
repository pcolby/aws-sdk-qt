// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHASSOCIATERESOURCESTOCUSTOMLINEITEMRESPONSE_P_H
#define QTAWS_BATCHASSOCIATERESOURCESTOCUSTOMLINEITEMRESPONSE_P_H

#include "billingconductorresponse_p.h"

namespace QtAws {
namespace BillingConductor {

class BatchAssociateResourcesToCustomLineItemResponse;

class BatchAssociateResourcesToCustomLineItemResponsePrivate : public BillingConductorResponsePrivate {

public:

    explicit BatchAssociateResourcesToCustomLineItemResponsePrivate(BatchAssociateResourcesToCustomLineItemResponse * const q);

    void parseBatchAssociateResourcesToCustomLineItemResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchAssociateResourcesToCustomLineItemResponse)
    Q_DISABLE_COPY(BatchAssociateResourcesToCustomLineItemResponsePrivate)

};

} // namespace BillingConductor
} // namespace QtAws

#endif

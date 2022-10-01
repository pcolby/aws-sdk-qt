// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDISASSOCIATERESOURCESFROMCUSTOMLINEITEMRESPONSE_H
#define QTAWS_BATCHDISASSOCIATERESOURCESFROMCUSTOMLINEITEMRESPONSE_H

#include "billingconductorresponse.h"
#include "batchdisassociateresourcesfromcustomlineitemrequest.h"

namespace QtAws {
namespace BillingConductor {

class BatchDisassociateResourcesFromCustomLineItemResponsePrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT BatchDisassociateResourcesFromCustomLineItemResponse : public BillingConductorResponse {
    Q_OBJECT

public:
    BatchDisassociateResourcesFromCustomLineItemResponse(const BatchDisassociateResourcesFromCustomLineItemRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchDisassociateResourcesFromCustomLineItemRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDisassociateResourcesFromCustomLineItemResponse)
    Q_DISABLE_COPY(BatchDisassociateResourcesFromCustomLineItemResponse)

};

} // namespace BillingConductor
} // namespace QtAws

#endif

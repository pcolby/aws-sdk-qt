// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHASSOCIATERESOURCESTOCUSTOMLINEITEMRESPONSE_H
#define QTAWS_BATCHASSOCIATERESOURCESTOCUSTOMLINEITEMRESPONSE_H

#include "billingconductorresponse.h"
#include "batchassociateresourcestocustomlineitemrequest.h"

namespace QtAws {
namespace BillingConductor {

class BatchAssociateResourcesToCustomLineItemResponsePrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT BatchAssociateResourcesToCustomLineItemResponse : public BillingConductorResponse {
    Q_OBJECT

public:
    BatchAssociateResourcesToCustomLineItemResponse(const BatchAssociateResourcesToCustomLineItemRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchAssociateResourcesToCustomLineItemRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchAssociateResourcesToCustomLineItemResponse)
    Q_DISABLE_COPY(BatchAssociateResourcesToCustomLineItemResponse)

};

} // namespace BillingConductor
} // namespace QtAws

#endif

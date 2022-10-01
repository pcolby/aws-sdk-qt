// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHASSOCIATERESOURCESTOCUSTOMLINEITEMREQUEST_H
#define QTAWS_BATCHASSOCIATERESOURCESTOCUSTOMLINEITEMREQUEST_H

#include "billingconductorrequest.h"

namespace QtAws {
namespace BillingConductor {

class BatchAssociateResourcesToCustomLineItemRequestPrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT BatchAssociateResourcesToCustomLineItemRequest : public BillingConductorRequest {

public:
    BatchAssociateResourcesToCustomLineItemRequest(const BatchAssociateResourcesToCustomLineItemRequest &other);
    BatchAssociateResourcesToCustomLineItemRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchAssociateResourcesToCustomLineItemRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif

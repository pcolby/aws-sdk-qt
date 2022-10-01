// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDISASSOCIATERESOURCESFROMCUSTOMLINEITEMREQUEST_H
#define QTAWS_BATCHDISASSOCIATERESOURCESFROMCUSTOMLINEITEMREQUEST_H

#include "billingconductorrequest.h"

namespace QtAws {
namespace BillingConductor {

class BatchDisassociateResourcesFromCustomLineItemRequestPrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT BatchDisassociateResourcesFromCustomLineItemRequest : public BillingConductorRequest {

public:
    BatchDisassociateResourcesFromCustomLineItemRequest(const BatchDisassociateResourcesFromCustomLineItemRequest &other);
    BatchDisassociateResourcesFromCustomLineItemRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDisassociateResourcesFromCustomLineItemRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif

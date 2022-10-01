// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMLINEITEMREQUEST_H
#define QTAWS_DELETECUSTOMLINEITEMREQUEST_H

#include "billingconductorrequest.h"

namespace QtAws {
namespace BillingConductor {

class DeleteCustomLineItemRequestPrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT DeleteCustomLineItemRequest : public BillingConductorRequest {

public:
    DeleteCustomLineItemRequest(const DeleteCustomLineItemRequest &other);
    DeleteCustomLineItemRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCustomLineItemRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMLINEITEMREQUEST_H
#define QTAWS_CREATECUSTOMLINEITEMREQUEST_H

#include "billingconductorrequest.h"

namespace QtAws {
namespace BillingConductor {

class CreateCustomLineItemRequestPrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT CreateCustomLineItemRequest : public BillingConductorRequest {

public:
    CreateCustomLineItemRequest(const CreateCustomLineItemRequest &other);
    CreateCustomLineItemRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCustomLineItemRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif

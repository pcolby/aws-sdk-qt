// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCESASSOCIATEDTOCUSTOMLINEITEMREQUEST_H
#define QTAWS_LISTRESOURCESASSOCIATEDTOCUSTOMLINEITEMREQUEST_H

#include "billingconductorrequest.h"

namespace QtAws {
namespace BillingConductor {

class ListResourcesAssociatedToCustomLineItemRequestPrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT ListResourcesAssociatedToCustomLineItemRequest : public BillingConductorRequest {

public:
    ListResourcesAssociatedToCustomLineItemRequest(const ListResourcesAssociatedToCustomLineItemRequest &other);
    ListResourcesAssociatedToCustomLineItemRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResourcesAssociatedToCustomLineItemRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif

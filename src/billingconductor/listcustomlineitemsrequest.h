// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMLINEITEMSREQUEST_H
#define QTAWS_LISTCUSTOMLINEITEMSREQUEST_H

#include "billingconductorrequest.h"

namespace QtAws {
namespace BillingConductor {

class ListCustomLineItemsRequestPrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT ListCustomLineItemsRequest : public BillingConductorRequest {

public:
    ListCustomLineItemsRequest(const ListCustomLineItemsRequest &other);
    ListCustomLineItemsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCustomLineItemsRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif

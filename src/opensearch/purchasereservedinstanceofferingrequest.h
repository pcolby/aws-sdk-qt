// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURCHASERESERVEDINSTANCEOFFERINGREQUEST_H
#define QTAWS_PURCHASERESERVEDINSTANCEOFFERINGREQUEST_H

#include "opensearchrequest.h"

namespace QtAws {
namespace OpenSearch {

class PurchaseReservedInstanceOfferingRequestPrivate;

class QTAWSOPENSEARCH_EXPORT PurchaseReservedInstanceOfferingRequest : public OpenSearchRequest {

public:
    PurchaseReservedInstanceOfferingRequest(const PurchaseReservedInstanceOfferingRequest &other);
    PurchaseReservedInstanceOfferingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PurchaseReservedInstanceOfferingRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif

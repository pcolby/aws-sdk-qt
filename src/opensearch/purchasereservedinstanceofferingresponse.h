// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURCHASERESERVEDINSTANCEOFFERINGRESPONSE_H
#define QTAWS_PURCHASERESERVEDINSTANCEOFFERINGRESPONSE_H

#include "opensearchresponse.h"
#include "purchasereservedinstanceofferingrequest.h"

namespace QtAws {
namespace OpenSearch {

class PurchaseReservedInstanceOfferingResponsePrivate;

class QTAWSOPENSEARCH_EXPORT PurchaseReservedInstanceOfferingResponse : public OpenSearchResponse {
    Q_OBJECT

public:
    PurchaseReservedInstanceOfferingResponse(const PurchaseReservedInstanceOfferingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PurchaseReservedInstanceOfferingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PurchaseReservedInstanceOfferingResponse)
    Q_DISABLE_COPY(PurchaseReservedInstanceOfferingResponse)

};

} // namespace OpenSearch
} // namespace QtAws

#endif

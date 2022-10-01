// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURCHASERESERVEDNODEOFFERINGRESPONSE_H
#define QTAWS_PURCHASERESERVEDNODEOFFERINGRESPONSE_H

#include "redshiftresponse.h"
#include "purchasereservednodeofferingrequest.h"

namespace QtAws {
namespace Redshift {

class PurchaseReservedNodeOfferingResponsePrivate;

class QTAWSREDSHIFT_EXPORT PurchaseReservedNodeOfferingResponse : public RedshiftResponse {
    Q_OBJECT

public:
    PurchaseReservedNodeOfferingResponse(const PurchaseReservedNodeOfferingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PurchaseReservedNodeOfferingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PurchaseReservedNodeOfferingResponse)
    Q_DISABLE_COPY(PurchaseReservedNodeOfferingResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURCHASEHOSTRESERVATIONRESPONSE_H
#define QTAWS_PURCHASEHOSTRESERVATIONRESPONSE_H

#include "ec2response.h"
#include "purchasehostreservationrequest.h"

namespace QtAws {
namespace Ec2 {

class PurchaseHostReservationResponsePrivate;

class QTAWSEC2_EXPORT PurchaseHostReservationResponse : public Ec2Response {
    Q_OBJECT

public:
    PurchaseHostReservationResponse(const PurchaseHostReservationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PurchaseHostReservationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PurchaseHostReservationResponse)
    Q_DISABLE_COPY(PurchaseHostReservationResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif

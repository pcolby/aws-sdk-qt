// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURCHASEOFFERINGRESPONSE_H
#define QTAWS_PURCHASEOFFERINGRESPONSE_H

#include "mediaconnectresponse.h"
#include "purchaseofferingrequest.h"

namespace QtAws {
namespace MediaConnect {

class PurchaseOfferingResponsePrivate;

class QTAWSMEDIACONNECT_EXPORT PurchaseOfferingResponse : public MediaConnectResponse {
    Q_OBJECT

public:
    PurchaseOfferingResponse(const PurchaseOfferingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PurchaseOfferingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PurchaseOfferingResponse)
    Q_DISABLE_COPY(PurchaseOfferingResponse)

};

} // namespace MediaConnect
} // namespace QtAws

#endif

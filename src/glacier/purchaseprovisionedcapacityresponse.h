// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURCHASEPROVISIONEDCAPACITYRESPONSE_H
#define QTAWS_PURCHASEPROVISIONEDCAPACITYRESPONSE_H

#include "glacierresponse.h"
#include "purchaseprovisionedcapacityrequest.h"

namespace QtAws {
namespace Glacier {

class PurchaseProvisionedCapacityResponsePrivate;

class QTAWSGLACIER_EXPORT PurchaseProvisionedCapacityResponse : public GlacierResponse {
    Q_OBJECT

public:
    PurchaseProvisionedCapacityResponse(const PurchaseProvisionedCapacityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PurchaseProvisionedCapacityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PurchaseProvisionedCapacityResponse)
    Q_DISABLE_COPY(PurchaseProvisionedCapacityResponse)

};

} // namespace Glacier
} // namespace QtAws

#endif

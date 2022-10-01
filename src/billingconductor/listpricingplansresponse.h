// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRICINGPLANSRESPONSE_H
#define QTAWS_LISTPRICINGPLANSRESPONSE_H

#include "billingconductorresponse.h"
#include "listpricingplansrequest.h"

namespace QtAws {
namespace BillingConductor {

class ListPricingPlansResponsePrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT ListPricingPlansResponse : public BillingConductorResponse {
    Q_OBJECT

public:
    ListPricingPlansResponse(const ListPricingPlansRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPricingPlansRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPricingPlansResponse)
    Q_DISABLE_COPY(ListPricingPlansResponse)

};

} // namespace BillingConductor
} // namespace QtAws

#endif

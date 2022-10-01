// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESAVINGSPLANSOFFERINGRATESRESPONSE_H
#define QTAWS_DESCRIBESAVINGSPLANSOFFERINGRATESRESPONSE_H

#include "savingsplansresponse.h"
#include "describesavingsplansofferingratesrequest.h"

namespace QtAws {
namespace SavingsPlans {

class DescribeSavingsPlansOfferingRatesResponsePrivate;

class QTAWSSAVINGSPLANS_EXPORT DescribeSavingsPlansOfferingRatesResponse : public SavingsPlansResponse {
    Q_OBJECT

public:
    DescribeSavingsPlansOfferingRatesResponse(const DescribeSavingsPlansOfferingRatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSavingsPlansOfferingRatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSavingsPlansOfferingRatesResponse)
    Q_DISABLE_COPY(DescribeSavingsPlansOfferingRatesResponse)

};

} // namespace SavingsPlans
} // namespace QtAws

#endif

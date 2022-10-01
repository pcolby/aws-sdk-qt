// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESAVINGSPLANSOFFERINGSRESPONSE_H
#define QTAWS_DESCRIBESAVINGSPLANSOFFERINGSRESPONSE_H

#include "savingsplansresponse.h"
#include "describesavingsplansofferingsrequest.h"

namespace QtAws {
namespace SavingsPlans {

class DescribeSavingsPlansOfferingsResponsePrivate;

class QTAWSSAVINGSPLANS_EXPORT DescribeSavingsPlansOfferingsResponse : public SavingsPlansResponse {
    Q_OBJECT

public:
    DescribeSavingsPlansOfferingsResponse(const DescribeSavingsPlansOfferingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSavingsPlansOfferingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSavingsPlansOfferingsResponse)
    Q_DISABLE_COPY(DescribeSavingsPlansOfferingsResponse)

};

} // namespace SavingsPlans
} // namespace QtAws

#endif

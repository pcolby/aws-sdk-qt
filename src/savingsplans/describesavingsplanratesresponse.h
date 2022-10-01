// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESAVINGSPLANRATESRESPONSE_H
#define QTAWS_DESCRIBESAVINGSPLANRATESRESPONSE_H

#include "savingsplansresponse.h"
#include "describesavingsplanratesrequest.h"

namespace QtAws {
namespace SavingsPlans {

class DescribeSavingsPlanRatesResponsePrivate;

class QTAWSSAVINGSPLANS_EXPORT DescribeSavingsPlanRatesResponse : public SavingsPlansResponse {
    Q_OBJECT

public:
    DescribeSavingsPlanRatesResponse(const DescribeSavingsPlanRatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSavingsPlanRatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSavingsPlanRatesResponse)
    Q_DISABLE_COPY(DescribeSavingsPlanRatesResponse)

};

} // namespace SavingsPlans
} // namespace QtAws

#endif

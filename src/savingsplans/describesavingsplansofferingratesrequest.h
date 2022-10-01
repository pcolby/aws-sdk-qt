// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESAVINGSPLANSOFFERINGRATESREQUEST_H
#define QTAWS_DESCRIBESAVINGSPLANSOFFERINGRATESREQUEST_H

#include "savingsplansrequest.h"

namespace QtAws {
namespace SavingsPlans {

class DescribeSavingsPlansOfferingRatesRequestPrivate;

class QTAWSSAVINGSPLANS_EXPORT DescribeSavingsPlansOfferingRatesRequest : public SavingsPlansRequest {

public:
    DescribeSavingsPlansOfferingRatesRequest(const DescribeSavingsPlansOfferingRatesRequest &other);
    DescribeSavingsPlansOfferingRatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSavingsPlansOfferingRatesRequest)

};

} // namespace SavingsPlans
} // namespace QtAws

#endif

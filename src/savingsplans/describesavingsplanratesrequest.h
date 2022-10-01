// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESAVINGSPLANRATESREQUEST_H
#define QTAWS_DESCRIBESAVINGSPLANRATESREQUEST_H

#include "savingsplansrequest.h"

namespace QtAws {
namespace SavingsPlans {

class DescribeSavingsPlanRatesRequestPrivate;

class QTAWSSAVINGSPLANS_EXPORT DescribeSavingsPlanRatesRequest : public SavingsPlansRequest {

public:
    DescribeSavingsPlanRatesRequest(const DescribeSavingsPlanRatesRequest &other);
    DescribeSavingsPlanRatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSavingsPlanRatesRequest)

};

} // namespace SavingsPlans
} // namespace QtAws

#endif

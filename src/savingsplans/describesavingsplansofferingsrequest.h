// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESAVINGSPLANSOFFERINGSREQUEST_H
#define QTAWS_DESCRIBESAVINGSPLANSOFFERINGSREQUEST_H

#include "savingsplansrequest.h"

namespace QtAws {
namespace SavingsPlans {

class DescribeSavingsPlansOfferingsRequestPrivate;

class QTAWSSAVINGSPLANS_EXPORT DescribeSavingsPlansOfferingsRequest : public SavingsPlansRequest {

public:
    DescribeSavingsPlansOfferingsRequest(const DescribeSavingsPlansOfferingsRequest &other);
    DescribeSavingsPlansOfferingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSavingsPlansOfferingsRequest)

};

} // namespace SavingsPlans
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESAVINGSPLANSREQUEST_H
#define QTAWS_DESCRIBESAVINGSPLANSREQUEST_H

#include "savingsplansrequest.h"

namespace QtAws {
namespace SavingsPlans {

class DescribeSavingsPlansRequestPrivate;

class QTAWSSAVINGSPLANS_EXPORT DescribeSavingsPlansRequest : public SavingsPlansRequest {

public:
    DescribeSavingsPlansRequest(const DescribeSavingsPlansRequest &other);
    DescribeSavingsPlansRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSavingsPlansRequest)

};

} // namespace SavingsPlans
} // namespace QtAws

#endif

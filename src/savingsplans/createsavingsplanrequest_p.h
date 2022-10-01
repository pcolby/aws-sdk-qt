// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESAVINGSPLANREQUEST_P_H
#define QTAWS_CREATESAVINGSPLANREQUEST_P_H

#include "savingsplansrequest_p.h"
#include "createsavingsplanrequest.h"

namespace QtAws {
namespace SavingsPlans {

class CreateSavingsPlanRequest;

class CreateSavingsPlanRequestPrivate : public SavingsPlansRequestPrivate {

public:
    CreateSavingsPlanRequestPrivate(const SavingsPlansRequest::Action action,
                                   CreateSavingsPlanRequest * const q);
    CreateSavingsPlanRequestPrivate(const CreateSavingsPlanRequestPrivate &other,
                                   CreateSavingsPlanRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSavingsPlanRequest)

};

} // namespace SavingsPlans
} // namespace QtAws

#endif

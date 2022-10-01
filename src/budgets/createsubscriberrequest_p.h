// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESUBSCRIBERREQUEST_P_H
#define QTAWS_CREATESUBSCRIBERREQUEST_P_H

#include "budgetsrequest_p.h"
#include "createsubscriberrequest.h"

namespace QtAws {
namespace Budgets {

class CreateSubscriberRequest;

class CreateSubscriberRequestPrivate : public BudgetsRequestPrivate {

public:
    CreateSubscriberRequestPrivate(const BudgetsRequest::Action action,
                                   CreateSubscriberRequest * const q);
    CreateSubscriberRequestPrivate(const CreateSubscriberRequestPrivate &other,
                                   CreateSubscriberRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSubscriberRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif

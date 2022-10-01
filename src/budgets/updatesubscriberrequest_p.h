// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESUBSCRIBERREQUEST_P_H
#define QTAWS_UPDATESUBSCRIBERREQUEST_P_H

#include "budgetsrequest_p.h"
#include "updatesubscriberrequest.h"

namespace QtAws {
namespace Budgets {

class UpdateSubscriberRequest;

class UpdateSubscriberRequestPrivate : public BudgetsRequestPrivate {

public:
    UpdateSubscriberRequestPrivate(const BudgetsRequest::Action action,
                                   UpdateSubscriberRequest * const q);
    UpdateSubscriberRequestPrivate(const UpdateSubscriberRequestPrivate &other,
                                   UpdateSubscriberRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSubscriberRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif

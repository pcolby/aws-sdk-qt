// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESUBSCRIBERREQUEST_P_H
#define QTAWS_DELETESUBSCRIBERREQUEST_P_H

#include "budgetsrequest_p.h"
#include "deletesubscriberrequest.h"

namespace QtAws {
namespace Budgets {

class DeleteSubscriberRequest;

class DeleteSubscriberRequestPrivate : public BudgetsRequestPrivate {

public:
    DeleteSubscriberRequestPrivate(const BudgetsRequest::Action action,
                                   DeleteSubscriberRequest * const q);
    DeleteSubscriberRequestPrivate(const DeleteSubscriberRequestPrivate &other,
                                   DeleteSubscriberRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSubscriberRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif

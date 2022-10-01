// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEQUEUEDSAVINGSPLANREQUEST_P_H
#define QTAWS_DELETEQUEUEDSAVINGSPLANREQUEST_P_H

#include "savingsplansrequest_p.h"
#include "deletequeuedsavingsplanrequest.h"

namespace QtAws {
namespace SavingsPlans {

class DeleteQueuedSavingsPlanRequest;

class DeleteQueuedSavingsPlanRequestPrivate : public SavingsPlansRequestPrivate {

public:
    DeleteQueuedSavingsPlanRequestPrivate(const SavingsPlansRequest::Action action,
                                   DeleteQueuedSavingsPlanRequest * const q);
    DeleteQueuedSavingsPlanRequestPrivate(const DeleteQueuedSavingsPlanRequestPrivate &other,
                                   DeleteQueuedSavingsPlanRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteQueuedSavingsPlanRequest)

};

} // namespace SavingsPlans
} // namespace QtAws

#endif

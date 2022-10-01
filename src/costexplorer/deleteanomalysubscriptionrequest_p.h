// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEANOMALYSUBSCRIPTIONREQUEST_P_H
#define QTAWS_DELETEANOMALYSUBSCRIPTIONREQUEST_P_H

#include "costexplorerrequest_p.h"
#include "deleteanomalysubscriptionrequest.h"

namespace QtAws {
namespace CostExplorer {

class DeleteAnomalySubscriptionRequest;

class DeleteAnomalySubscriptionRequestPrivate : public CostExplorerRequestPrivate {

public:
    DeleteAnomalySubscriptionRequestPrivate(const CostExplorerRequest::Action action,
                                   DeleteAnomalySubscriptionRequest * const q);
    DeleteAnomalySubscriptionRequestPrivate(const DeleteAnomalySubscriptionRequestPrivate &other,
                                   DeleteAnomalySubscriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAnomalySubscriptionRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif

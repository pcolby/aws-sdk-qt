// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEANOMALYSUBSCRIPTIONREQUEST_P_H
#define QTAWS_UPDATEANOMALYSUBSCRIPTIONREQUEST_P_H

#include "costexplorerrequest_p.h"
#include "updateanomalysubscriptionrequest.h"

namespace QtAws {
namespace CostExplorer {

class UpdateAnomalySubscriptionRequest;

class UpdateAnomalySubscriptionRequestPrivate : public CostExplorerRequestPrivate {

public:
    UpdateAnomalySubscriptionRequestPrivate(const CostExplorerRequest::Action action,
                                   UpdateAnomalySubscriptionRequest * const q);
    UpdateAnomalySubscriptionRequestPrivate(const UpdateAnomalySubscriptionRequestPrivate &other,
                                   UpdateAnomalySubscriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAnomalySubscriptionRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif

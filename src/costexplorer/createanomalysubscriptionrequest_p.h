// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEANOMALYSUBSCRIPTIONREQUEST_P_H
#define QTAWS_CREATEANOMALYSUBSCRIPTIONREQUEST_P_H

#include "costexplorerrequest_p.h"
#include "createanomalysubscriptionrequest.h"

namespace QtAws {
namespace CostExplorer {

class CreateAnomalySubscriptionRequest;

class CreateAnomalySubscriptionRequestPrivate : public CostExplorerRequestPrivate {

public:
    CreateAnomalySubscriptionRequestPrivate(const CostExplorerRequest::Action action,
                                   CreateAnomalySubscriptionRequest * const q);
    CreateAnomalySubscriptionRequestPrivate(const CreateAnomalySubscriptionRequestPrivate &other,
                                   CreateAnomalySubscriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAnomalySubscriptionRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif

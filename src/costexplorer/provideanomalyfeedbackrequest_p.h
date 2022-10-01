// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROVIDEANOMALYFEEDBACKREQUEST_P_H
#define QTAWS_PROVIDEANOMALYFEEDBACKREQUEST_P_H

#include "costexplorerrequest_p.h"
#include "provideanomalyfeedbackrequest.h"

namespace QtAws {
namespace CostExplorer {

class ProvideAnomalyFeedbackRequest;

class ProvideAnomalyFeedbackRequestPrivate : public CostExplorerRequestPrivate {

public:
    ProvideAnomalyFeedbackRequestPrivate(const CostExplorerRequest::Action action,
                                   ProvideAnomalyFeedbackRequest * const q);
    ProvideAnomalyFeedbackRequestPrivate(const ProvideAnomalyFeedbackRequestPrivate &other,
                                   ProvideAnomalyFeedbackRequest * const q);

private:
    Q_DECLARE_PUBLIC(ProvideAnomalyFeedbackRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCOSTESTIMATIONREQUEST_P_H
#define QTAWS_STARTCOSTESTIMATIONREQUEST_P_H

#include "devopsgururequest_p.h"
#include "startcostestimationrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class StartCostEstimationRequest;

class StartCostEstimationRequestPrivate : public DevOpsGuruRequestPrivate {

public:
    StartCostEstimationRequestPrivate(const DevOpsGuruRequest::Action action,
                                   StartCostEstimationRequest * const q);
    StartCostEstimationRequestPrivate(const StartCostEstimationRequestPrivate &other,
                                   StartCostEstimationRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartCostEstimationRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif

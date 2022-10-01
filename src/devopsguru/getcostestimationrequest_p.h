// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOSTESTIMATIONREQUEST_P_H
#define QTAWS_GETCOSTESTIMATIONREQUEST_P_H

#include "devopsgururequest_p.h"
#include "getcostestimationrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class GetCostEstimationRequest;

class GetCostEstimationRequestPrivate : public DevOpsGuruRequestPrivate {

public:
    GetCostEstimationRequestPrivate(const DevOpsGuruRequest::Action action,
                                   GetCostEstimationRequest * const q);
    GetCostEstimationRequestPrivate(const GetCostEstimationRequestPrivate &other,
                                   GetCostEstimationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCostEstimationRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif

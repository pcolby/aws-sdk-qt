// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROBLEMOBSERVATIONSREQUEST_P_H
#define QTAWS_DESCRIBEPROBLEMOBSERVATIONSREQUEST_P_H

#include "applicationinsightsrequest_p.h"
#include "describeproblemobservationsrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class DescribeProblemObservationsRequest;

class DescribeProblemObservationsRequestPrivate : public ApplicationInsightsRequestPrivate {

public:
    DescribeProblemObservationsRequestPrivate(const ApplicationInsightsRequest::Action action,
                                   DescribeProblemObservationsRequest * const q);
    DescribeProblemObservationsRequestPrivate(const DescribeProblemObservationsRequestPrivate &other,
                                   DescribeProblemObservationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeProblemObservationsRequest)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif

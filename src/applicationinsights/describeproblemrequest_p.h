// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROBLEMREQUEST_P_H
#define QTAWS_DESCRIBEPROBLEMREQUEST_P_H

#include "applicationinsightsrequest_p.h"
#include "describeproblemrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class DescribeProblemRequest;

class DescribeProblemRequestPrivate : public ApplicationInsightsRequestPrivate {

public:
    DescribeProblemRequestPrivate(const ApplicationInsightsRequest::Action action,
                                   DescribeProblemRequest * const q);
    DescribeProblemRequestPrivate(const DescribeProblemRequestPrivate &other,
                                   DescribeProblemRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeProblemRequest)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif

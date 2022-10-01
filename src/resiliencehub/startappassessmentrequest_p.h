// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTAPPASSESSMENTREQUEST_P_H
#define QTAWS_STARTAPPASSESSMENTREQUEST_P_H

#include "resiliencehubrequest_p.h"
#include "startappassessmentrequest.h"

namespace QtAws {
namespace ResilienceHub {

class StartAppAssessmentRequest;

class StartAppAssessmentRequestPrivate : public ResilienceHubRequestPrivate {

public:
    StartAppAssessmentRequestPrivate(const ResilienceHubRequest::Action action,
                                   StartAppAssessmentRequest * const q);
    StartAppAssessmentRequestPrivate(const StartAppAssessmentRequestPrivate &other,
                                   StartAppAssessmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartAppAssessmentRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif

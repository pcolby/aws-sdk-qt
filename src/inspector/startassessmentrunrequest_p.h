// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTASSESSMENTRUNREQUEST_P_H
#define QTAWS_STARTASSESSMENTRUNREQUEST_P_H

#include "inspectorrequest_p.h"
#include "startassessmentrunrequest.h"

namespace QtAws {
namespace Inspector {

class StartAssessmentRunRequest;

class StartAssessmentRunRequestPrivate : public InspectorRequestPrivate {

public:
    StartAssessmentRunRequestPrivate(const InspectorRequest::Action action,
                                   StartAssessmentRunRequest * const q);
    StartAssessmentRunRequestPrivate(const StartAssessmentRunRequestPrivate &other,
                                   StartAssessmentRunRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartAssessmentRunRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif

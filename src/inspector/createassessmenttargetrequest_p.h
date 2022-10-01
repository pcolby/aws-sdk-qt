// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSESSMENTTARGETREQUEST_P_H
#define QTAWS_CREATEASSESSMENTTARGETREQUEST_P_H

#include "inspectorrequest_p.h"
#include "createassessmenttargetrequest.h"

namespace QtAws {
namespace Inspector {

class CreateAssessmentTargetRequest;

class CreateAssessmentTargetRequestPrivate : public InspectorRequestPrivate {

public:
    CreateAssessmentTargetRequestPrivate(const InspectorRequest::Action action,
                                   CreateAssessmentTargetRequest * const q);
    CreateAssessmentTargetRequestPrivate(const CreateAssessmentTargetRequestPrivate &other,
                                   CreateAssessmentTargetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAssessmentTargetRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif

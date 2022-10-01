// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSESSMENTTARGETREQUEST_P_H
#define QTAWS_UPDATEASSESSMENTTARGETREQUEST_P_H

#include "inspectorrequest_p.h"
#include "updateassessmenttargetrequest.h"

namespace QtAws {
namespace Inspector {

class UpdateAssessmentTargetRequest;

class UpdateAssessmentTargetRequestPrivate : public InspectorRequestPrivate {

public:
    UpdateAssessmentTargetRequestPrivate(const InspectorRequest::Action action,
                                   UpdateAssessmentTargetRequest * const q);
    UpdateAssessmentTargetRequestPrivate(const UpdateAssessmentTargetRequestPrivate &other,
                                   UpdateAssessmentTargetRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAssessmentTargetRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif

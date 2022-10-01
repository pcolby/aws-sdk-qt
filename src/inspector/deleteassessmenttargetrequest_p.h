// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSESSMENTTARGETREQUEST_P_H
#define QTAWS_DELETEASSESSMENTTARGETREQUEST_P_H

#include "inspectorrequest_p.h"
#include "deleteassessmenttargetrequest.h"

namespace QtAws {
namespace Inspector {

class DeleteAssessmentTargetRequest;

class DeleteAssessmentTargetRequestPrivate : public InspectorRequestPrivate {

public:
    DeleteAssessmentTargetRequestPrivate(const InspectorRequest::Action action,
                                   DeleteAssessmentTargetRequest * const q);
    DeleteAssessmentTargetRequestPrivate(const DeleteAssessmentTargetRequestPrivate &other,
                                   DeleteAssessmentTargetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAssessmentTargetRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSESSMENTRUNREQUEST_P_H
#define QTAWS_DELETEASSESSMENTRUNREQUEST_P_H

#include "inspectorrequest_p.h"
#include "deleteassessmentrunrequest.h"

namespace QtAws {
namespace Inspector {

class DeleteAssessmentRunRequest;

class DeleteAssessmentRunRequestPrivate : public InspectorRequestPrivate {

public:
    DeleteAssessmentRunRequestPrivate(const InspectorRequest::Action action,
                                   DeleteAssessmentRunRequest * const q);
    DeleteAssessmentRunRequestPrivate(const DeleteAssessmentRunRequestPrivate &other,
                                   DeleteAssessmentRunRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAssessmentRunRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif

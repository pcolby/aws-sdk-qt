// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSESSMENTTEMPLATEREQUEST_P_H
#define QTAWS_DELETEASSESSMENTTEMPLATEREQUEST_P_H

#include "inspectorrequest_p.h"
#include "deleteassessmenttemplaterequest.h"

namespace QtAws {
namespace Inspector {

class DeleteAssessmentTemplateRequest;

class DeleteAssessmentTemplateRequestPrivate : public InspectorRequestPrivate {

public:
    DeleteAssessmentTemplateRequestPrivate(const InspectorRequest::Action action,
                                   DeleteAssessmentTemplateRequest * const q);
    DeleteAssessmentTemplateRequestPrivate(const DeleteAssessmentTemplateRequestPrivate &other,
                                   DeleteAssessmentTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAssessmentTemplateRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif

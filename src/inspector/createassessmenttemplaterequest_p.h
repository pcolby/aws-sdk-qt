// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSESSMENTTEMPLATEREQUEST_P_H
#define QTAWS_CREATEASSESSMENTTEMPLATEREQUEST_P_H

#include "inspectorrequest_p.h"
#include "createassessmenttemplaterequest.h"

namespace QtAws {
namespace Inspector {

class CreateAssessmentTemplateRequest;

class CreateAssessmentTemplateRequestPrivate : public InspectorRequestPrivate {

public:
    CreateAssessmentTemplateRequestPrivate(const InspectorRequest::Action action,
                                   CreateAssessmentTemplateRequest * const q);
    CreateAssessmentTemplateRequestPrivate(const CreateAssessmentTemplateRequestPrivate &other,
                                   CreateAssessmentTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAssessmentTemplateRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif

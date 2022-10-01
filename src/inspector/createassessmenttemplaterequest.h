// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSESSMENTTEMPLATEREQUEST_H
#define QTAWS_CREATEASSESSMENTTEMPLATEREQUEST_H

#include "inspectorrequest.h"

namespace QtAws {
namespace Inspector {

class CreateAssessmentTemplateRequestPrivate;

class QTAWSINSPECTOR_EXPORT CreateAssessmentTemplateRequest : public InspectorRequest {

public:
    CreateAssessmentTemplateRequest(const CreateAssessmentTemplateRequest &other);
    CreateAssessmentTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAssessmentTemplateRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif

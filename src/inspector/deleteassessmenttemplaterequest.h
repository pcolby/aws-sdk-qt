// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSESSMENTTEMPLATEREQUEST_H
#define QTAWS_DELETEASSESSMENTTEMPLATEREQUEST_H

#include "inspectorrequest.h"

namespace QtAws {
namespace Inspector {

class DeleteAssessmentTemplateRequestPrivate;

class QTAWSINSPECTOR_EXPORT DeleteAssessmentTemplateRequest : public InspectorRequest {

public:
    DeleteAssessmentTemplateRequest(const DeleteAssessmentTemplateRequest &other);
    DeleteAssessmentTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAssessmentTemplateRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif

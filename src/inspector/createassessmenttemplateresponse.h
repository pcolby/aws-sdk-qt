// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSESSMENTTEMPLATERESPONSE_H
#define QTAWS_CREATEASSESSMENTTEMPLATERESPONSE_H

#include "inspectorresponse.h"
#include "createassessmenttemplaterequest.h"

namespace QtAws {
namespace Inspector {

class CreateAssessmentTemplateResponsePrivate;

class QTAWSINSPECTOR_EXPORT CreateAssessmentTemplateResponse : public InspectorResponse {
    Q_OBJECT

public:
    CreateAssessmentTemplateResponse(const CreateAssessmentTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAssessmentTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAssessmentTemplateResponse)
    Q_DISABLE_COPY(CreateAssessmentTemplateResponse)

};

} // namespace Inspector
} // namespace QtAws

#endif

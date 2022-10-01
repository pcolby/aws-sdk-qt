// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSESSMENTTEMPLATERESPONSE_H
#define QTAWS_DELETEASSESSMENTTEMPLATERESPONSE_H

#include "inspectorresponse.h"
#include "deleteassessmenttemplaterequest.h"

namespace QtAws {
namespace Inspector {

class DeleteAssessmentTemplateResponsePrivate;

class QTAWSINSPECTOR_EXPORT DeleteAssessmentTemplateResponse : public InspectorResponse {
    Q_OBJECT

public:
    DeleteAssessmentTemplateResponse(const DeleteAssessmentTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAssessmentTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAssessmentTemplateResponse)
    Q_DISABLE_COPY(DeleteAssessmentTemplateResponse)

};

} // namespace Inspector
} // namespace QtAws

#endif

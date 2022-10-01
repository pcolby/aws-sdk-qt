// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSESSMENTTEMPLATERESPONSE_P_H
#define QTAWS_DELETEASSESSMENTTEMPLATERESPONSE_P_H

#include "inspectorresponse_p.h"

namespace QtAws {
namespace Inspector {

class DeleteAssessmentTemplateResponse;

class DeleteAssessmentTemplateResponsePrivate : public InspectorResponsePrivate {

public:

    explicit DeleteAssessmentTemplateResponsePrivate(DeleteAssessmentTemplateResponse * const q);

    void parseDeleteAssessmentTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAssessmentTemplateResponse)
    Q_DISABLE_COPY(DeleteAssessmentTemplateResponsePrivate)

};

} // namespace Inspector
} // namespace QtAws

#endif

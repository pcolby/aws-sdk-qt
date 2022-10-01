// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSESSMENTTEMPLATERESPONSE_P_H
#define QTAWS_CREATEASSESSMENTTEMPLATERESPONSE_P_H

#include "inspectorresponse_p.h"

namespace QtAws {
namespace Inspector {

class CreateAssessmentTemplateResponse;

class CreateAssessmentTemplateResponsePrivate : public InspectorResponsePrivate {

public:

    explicit CreateAssessmentTemplateResponsePrivate(CreateAssessmentTemplateResponse * const q);

    void parseCreateAssessmentTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAssessmentTemplateResponse)
    Q_DISABLE_COPY(CreateAssessmentTemplateResponsePrivate)

};

} // namespace Inspector
} // namespace QtAws

#endif

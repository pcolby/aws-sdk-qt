// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSESSMENTTEMPLATESRESPONSE_P_H
#define QTAWS_LISTASSESSMENTTEMPLATESRESPONSE_P_H

#include "inspectorresponse_p.h"

namespace QtAws {
namespace Inspector {

class ListAssessmentTemplatesResponse;

class ListAssessmentTemplatesResponsePrivate : public InspectorResponsePrivate {

public:

    explicit ListAssessmentTemplatesResponsePrivate(ListAssessmentTemplatesResponse * const q);

    void parseListAssessmentTemplatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAssessmentTemplatesResponse)
    Q_DISABLE_COPY(ListAssessmentTemplatesResponsePrivate)

};

} // namespace Inspector
} // namespace QtAws

#endif

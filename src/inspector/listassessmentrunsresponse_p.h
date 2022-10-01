// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSESSMENTRUNSRESPONSE_P_H
#define QTAWS_LISTASSESSMENTRUNSRESPONSE_P_H

#include "inspectorresponse_p.h"

namespace QtAws {
namespace Inspector {

class ListAssessmentRunsResponse;

class ListAssessmentRunsResponsePrivate : public InspectorResponsePrivate {

public:

    explicit ListAssessmentRunsResponsePrivate(ListAssessmentRunsResponse * const q);

    void parseListAssessmentRunsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAssessmentRunsResponse)
    Q_DISABLE_COPY(ListAssessmentRunsResponsePrivate)

};

} // namespace Inspector
} // namespace QtAws

#endif
